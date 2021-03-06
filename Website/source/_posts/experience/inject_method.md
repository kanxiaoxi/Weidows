---
title: 两种inject自定义Js/CSS文件方法 && Pjax冲突解决方案
categories: experience
tags:
  - Hexo
  - Website
  - Pjax
cover: https://gitee.com/Weidows2984539695/Weidows/raw/master/Website/public/images/post/inject_method.jpg
---
<!--
 * @Author: Weidows
 * @Date: 2020-08-31 01:35:01
 * @LastEditors: Weidows
 * @LastEditTime: 2020-08-31 20:22:10
 * @FilePath: \Weidows\Website\source\_posts\experience\inject_method.md
-->
# 通过主题文件注入
  * 一般是写在`theme/xxx/source/`里的`js`和`css`里面
  * 随便起个名字,比如我的叫mine.js和mine.css,里面写上需要的内容
  * 在主题配置文件`_config.yml`里找到`inject:`字段,一般css在head,js在bottom里,如下:
  ```
  inject:
    head:
      - <link rel="stylesheet" href="./css/mine.css">
    bottom:
      - <script src="./js/mine.js"></script>
  ```
  * 但是务必注意这样引入只对`某一层`目录生效,比如上面只对public/第一层目录生效,其中子目录无效,如果想使其生效:
  ```
  inject:
    head:
      - <link rel="stylesheet" href="./css/mine.css">
      - <link rel="stylesheet" href="../css/mine.css">
      - <link rel="stylesheet" href="../../css/mine.css">
    bottom:
      - <script src="./js/mine.js"></script>
      - <script src="../js/mine.js"></script>
      - <script src="../../js/mine.js"></script>
  ```
  * 喏,这样是让第一二三层生效了,以此类推.
---

# 通过修改内部文件注入
  * 首先操作如上面一样新建文件并写好js和css文件,只是注入方式不同
  * 找到`theme/xxx/layout/include/layout.pug`,在内部添加如下:
  ```
  script(src='js/mine.js')
  link(rel='stylesheet', href='css/mine.css')
  ```
  * 这两个分别是引入js和css,可以分别在body和head里加入,注意缩进格式!
  * 解释:
    * 在Hexo generate时会把`theme/xxx/source/`里你写的文件复制到`public/`对应目录里
    * 一般Hexo在引用时根目录是`public/`,所以上面找的是`public/js/mine.js`和`public/css/mine.css`
    * 这样注入可能因为渲染位置和时机不对而未生效,需要酌情使用
---

# Pjax使JS渲染失效解决方案
  * 用过的都知道Pjax可以让网页在非跳转的情况下局部刷新来使网页加载速度提升
  * 但是会带来非常多的Bug,比如某些依赖JS渲染和加载的插件无效化,或者监听和交互不奏效
  * 网上搜的有些是让各种插件本身屈服Pjax各种修改渲染策略
  * 这里提出一个虽然不是新方法但是也是个不错的解决方案:
  ---
  ## 文件定位:
  * 这里修改的是Butterfly自带的Pjax第三方pug,如有不同需要自行查找
  * 找到`themes/butterfly/layout/includes/third-party/pjax.pug`,打开开始修改
  * 定位  `document.addEventListener('pjax:complete', function ()`这一行,这是监听Pjax跳转页面是否完成的函数,并执行跳转完成后的指令
  * 原理就是让Pjax加载完成页面后再让JS渲染一遍(但是可能有些局部渲染还是无法生效)
  * 复制需要重载的JS,粘贴到这个函数括号内部,并Hexo Server测试一下,如不生效也没法治了...
