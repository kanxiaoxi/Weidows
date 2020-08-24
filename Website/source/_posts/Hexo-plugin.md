---
title: 淦翻Hexo各种插件安装+调试
categories: 
  - backup
  - Blog
tags: 
  - Hexo
  - 备忘录
  - Website
cover: /images/post/Hexo-plugin.jpg
---
<!--
 * @Author: Weidows
 * @Date: 2020-08-25 00:05:52
 * @LastEditors: Weidows
 * @LastEditTime: 2020-08-25 01:36:15
 * @FilePath: \Weidows\Website\source\_posts\Hexo-plugin.md
-->

# 常用的Hexo 自身命令
  ``` 
    cnpm install hexo-cli -g #安装Hexo
    cnpm update hexo -g #升级,先cnpm再npm
    hexo init 博客名 #初始化博客
    npm uninstall hexo-xxx  #删除插件
    Hexo new page page名 #新建页面
    
  ```
---

# 安装deployer
  * (这个不能用阿里源) && 编译部署三部曲(GitHub需要,Gitee不用)
  ``` 
    npm install hexo-deployer-git --save

    hexo clean # 清缓存
    hexo g # 编译generate
    hexo d # deploy部署
  ```
---

# 注意事项
  ``` 
    注意如果repo命名时没加.github.io的后缀,那么只能deploy到gh-pages分支(否则出错)

    workflow作用只是把public/ deploy到gh-pages分支上,generate出public/仍需要在本地进行
    
    如果打开Hexo Server后报错(extends includes/layout.pug block content #recent-posts.recent-posts include includes/recent-posts.pug include includes/pagination.pug)
      cnpm install hexo-renderer-pug hexo-renderer-stylus --save

    导航栏中的项目不能打tag和categories(编译报错),也不能进行cover更改(无效)
  ```
---

# 安装Live2D (不能用cnpm 这俩二选一)
  ``` 
    yarn add hexo-helper-live2d
    npm install --save hexo-helper-live2d

    导入模型: (导入后在node_modules里找相应文件夹,移动到/live2d_models/ 注意不能用npm)
      白猫:cnpm install live2d-widget-model-tororo
      黑猫:cnpm install live2d-widget-model-hijiki

    启用模型:
      在/_config.yml里找到model.use改成想用的模型文件夹名
  ```
---

# 启用comment && search && 字数统计
  ``` 
    cnpm install valine --save
    cnpm install hexo-generator-search --save
    cnpm i --save hexo-wordcount
    然后把主题里的_config.yml改改
  ```
---

# Hexo文章标题 & 格式
  ```
    #肯定要背过的
      title: # 网站标题
      categories: # 分类(只能单线)
        - category_1
        - category_1_1
        - category_1_1_1
      tags:  # 标签(可以多标)
        - tag_1
        - tag_2
      type: "" # 指定这个页面的类型(比如categories/tags)
      cover: # 封面图片,注意不能用../命令,双引号有无均可
      comments: # 评论开关
    #以下是没用过或无效的
      subtitle: # 网站副标题,无效
      description: # 网站描述
      keywords: # 网站关键词
      author: # 网站作者
      language: # 语言, 一般填 'zh-CN'
      timezone: # 时区, 可以不填
  ```
---

# 添加bilibili番剧页面
  * 安装 `npm install hexo-bilibili-bangumi --save`
  * 更新 `npm install hexo-bilibili-bangumi --update --save`
  * 配置: 写入_config.yml里(root/里的)
  ```
    bangumi:
      enable: true 
      path: #页面路径
      vmid:   # 哔哩哔哩番剧页面的 vmid(uid)
      title: '追番列表'  # 页面的标题
      quote: '生命不息，追番不止！' # 写在页面开头的一段话，支持 html 语法
      show: 1 # 初始显示页面：0: 想看 , 1: 在看 , 2: 看过，默认为 1
      loading: '/img/bangumi-loading.gif' # 图片加载完成前的 loading 图片
      metaColor: #  meta 部分(简介上方)字体颜色
      color: # 简介字体颜色
      webp:
      progress: # 获取番剧数据时是否显示进度条，默认true
  ```
  * 创建页面,进入root/命令行,执行: ` hexo new page bangumis` ;当然也可以直接在source/直接新建一个markdown,然后把文件头type写为这样:`type: "bangumis"`
  * 另外,Hexo g之前最好更新下数据,防止请求过多: `hexo bangumi -u` 再者删除数据: `hexo bangumi -d`
---
