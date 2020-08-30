---
title: 淦翻Hexo各种插件安装+调试
categories: 
  - backup
  - Blog
tags: 
  - Hexo
  - 备忘录
  - Website
cover: https://gitee.com/Weidows2984539695/Weidows/raw/master/Website/public/images/post/Hexo-plugin.jpg
---
<!--
 * @Author: Weidows
 * @Date: 2020-08-25 00:05:52
 * @LastEditors: Weidows
 * @LastEditTime: 2020-08-30 11:18:51
 * @FilePath: \Weidows\Website\source\_posts\backup\Hexo-plugin.md
-->

# 常用的Hexo 自身命令
  ``` 
    cnpm install hexo-cli -g #安装Hexo
    cnpm update hexo -g #升级,先cnpm再npm
    hexo init 博客名 #初始化博客
    cnpm uninstall hexo-xxx  #删除插件
    Hexo new page page名 #新建页面
    安装过的插件会在root/package.json里显示
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

# 注意事项 & 常见问题
  * 注意如果repo命名时没加.github.io的后缀,那么只能deploy到gh-pages分支(否则出错)

  * workflow作用只是把public/ deploy到gh-pages分支上,generate出public/仍需要在本地进行
    
  * 如果打开Hexo Server后报错(extends includes/layout.pug block content #recent-posts.recent-posts include includes/recent-posts.pug include includes/pagination.pug)是因为没有安装渲染插件:
    ```
    cnpm install hexo-renderer-pug hexo-renderer-stylus --save
    ```
  * 导航栏中的项目不能打tag和categories(编译报错),也不能进行cover更改(无效)
  * 注意修改source的css或者js后进行generate不会刷新状态,需要删掉重新generate
  * theme/xxx/_config.yml可以放在source/_data/xxx.yml来当主题配置文件,原先的可以删去
---

# 添加tags/categories/link页面
  ## tags
  ```
  hexo new page tags
  ```
  ## categories
  ```
  hexo new page categories
  ```
  ## link
  ```
  hexo new page link
  ```
  * 另外还需要在source/_data/link.yml里添加数据,如:
    ```
    - class_name: 友情鏈接
      class_desc: 那些人，那些事
      link_list:
        - name: JerryC
          link: https://jerryc.me/
          avatar: https://jerryc.me/image/avatar.png
          descr: 今日事,今日畢
        - name: Hexo
          link: https://hexo.io/zh-tw/
          avatar: https://d33wubrfki0l68.cloudfront.net/6657ba50e702d84afb32fe846bed54fba1a77add/827ae/logo.svg
          descr: 快速、簡單且強大的網誌框架

    - class_name: 網站
      class_desc: 值得推薦的網站
      link_list:
        - name: Youtube
          link: https://www.youtube.com/
          avatar: https://i.loli.net/2020/05/14/9ZkGg8v3azHJfM1.png
          descr: 視頻網站
        - name: Weibo
          link: https://www.weibo.com/
          avatar: https://i.loli.net/2020/05/14/TLJBum386vcnI1P.png
          descr: 中國最大社交分享平台
        - name: Twitter
          link: https://twitter.com/
          avatar: https://i.loli.net/2020/05/14/5VyHPQqR6LWF39a.png
          descr: 社交分享平台
    ```
  * 最后,还可以在link.md中自定义样式(写的内容显示在友链下方)
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
  ```
  * 然后把主题里的_config.yml改改
  * 需要注意comment插件有些主题自带,不需要安装(butterfly)
  * 在source/data/里新建valine.json,里面可以添加表情包了,格式如下:
  ```
  {
    "表情1": "URL",
    "表情2": "URL"
  }
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
      comments: # 评论开关 true/false
      top_img: # 文章banner图,如果有cover的话默认用的是cover(这个可以给_post之外的用)
      date: # 创建时间
      updated:  # 更新时间
      description: # 网站描述
      aside: # 侧边栏开关
    #以下是没用过或无效的
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
      loading: '/images/img/bangumi-loading.gif' # 图片加载完成前的 loading 图片
      metaColor: #  meta 部分(简介上方)字体颜色
      color: # 简介字体颜色
      webp:
      progress: # 获取番剧数据时是否显示进度条，默认true
  ```
  * 创建页面,进入root/命令行,执行: ` hexo new page bangumis` ;当然也可以直接在source/直接新建一个markdown,然后把文件头type写为这样:`type: "bangumis"`
  * 另外,Hexo g之前最好更新下数据,防止请求过多: `hexo bangumi -u` 再者删除数据: `hexo bangumi -d`
---

# 添加站点地图
  * 百度专用
  ```
  cnpm install hexo-generator-baidu-sitemap --save
  ```
  * 通用的
  ```
  cnpm install hexo-generator-sitemap --save
  ```
  ## 配置文件root/_config.yml
  ```
  Plugins:
  - hexo-generator-baidu-sitemap
  - hexo-generator-sitemap

  baidusitemap:
      path: sitemap/baidusitemap.xml
  sitemap:
      path: sitemap/sitemap.xml
  ```
  * *需要注意的是如果访问路径带中文,肯定无法generate(报错),需要在_config里找到category_map和tag_map修改映射,根据需要自行修改,我的样式如下:*
  ```
  default_category: uncategorized
  category_map:
    GitHub: github
  tag_map:
    备忘录: memorandum
    计算机系统: operating_system
    Hexo: hexo
    Java: java
    PHP: php
    VScode: vscode
    Website: website
  ```
---

# Steam游戏页面(经常被其他插件干扰误删)
  ## 安装
  ```
  cnpm install hexo-steam-games --save
  ```
  ## 配置
  ```
  steam:
    enable: true 
    steamId: '76561198321099712' # steam64位Id(需要放在引号里),将steam库设置为公开
    path: tags/games.html # 页面路径，默认steamgames/index.html
    title: ⭐️养鸡场⭐️ 
    quote: 'Steam给爷爬!别让我家EPIC误会' # 写在页面开头的一段话,支持html语法
    tab: all # all或recent, all: 所有游戏, recent: 最近游玩的游戏
    length: 1000
    imgUrl: 'http://weidows2984539695.gitee.io/weidows/images/img/avatar.jpg' # 图片链接，在quote下面放一张图片，图片链接到Steam个人资料，可留空
    proxy: # 如果无法访问steam社区的话请使用代理
      host: # 代理ip或域名
      port: # 代理端口
  ```
  ## 使用
  * `Hexo g` 之前 `hexo steam -u` (如果失败需要手动)
  * 浏览器打开`https://steamcommunity.com/profiles/76561198321099712/games/?tab=all` {steamId}和{tab}分别替换为上面配置中提到的steamId和tab
  * F12控制台console输入下面内容执行:
  ```
  let script = jQuery('script[language="javascript"]');
  var games = [];
  for (let i = 0; i < script.length; i++) {
    if (script.eq(i).html().includes("rgGames")) {
      let rgGames = script.eq(i).html().match(/var.*?rgGames.*?=.*?(\[[\w\W]*?\}\}\]);/);
      if (rgGames) {
        games = JSON.parse(rgGames[1]);
        break;
      }
    }
  }
  document.write(JSON.stringify(games))
  ```
  * 生成的内容复制到`root/node_modules/hexo-steam-games/data/games.json`
  * 这个不用new页面(但是数据文件路径无法改)
---

# 安装音乐aplayer
  ## 安装
  ```
  cnpm install --save hexo-tag-aplayer
  ```
  ## 使用
  * 如果per_page关了的话在需要开启的页面Front-matter添加
    ```
    aplayer: true
    ```
  ## 全局吸底mini播放器
  需要导入js并通过导入css修改Aplayer缩进样式
---

# 安装豆瓣电影
  ## 安装
  ```
  cnpm install hexo-douban --save
  ```
  ## 使用
  ```
  douban:
    user: userID
    builtin: true
    timeout: 10000 
    book:
      title: 'My book title'
      quote: 'My book quote'
    movie:
      title: 'My movie title'
      quote: 'My movie quote'
    game:
      title: 'My game title'
      quote: 'My game quote'
  ```
  * user: 你的豆瓣ID.打开豆瓣，登入账户，然后在右上角点击 "个人主页" ，这时候地址栏的URL大概是这样："https://www.douban.com/people/xxxxxx/" ，其中的"xxxxxx"就是你的个人ID了。
  * builtin: 是否将生成页面的功能嵌入hexo s和hexo g中，默认是false,另一可选项为true(1.x.x版本新增配置项)。
  * title: 该页面的标题.
  * quote: 写在页面开头的一段话,支持html语法.
  * timeout: 爬取数据的超时时间，默认是 10000ms ,如果在使用时发现报了超时的错(ETIMEOUT)可以把这个数据设置的大一点。
  * 如果只想显示某一个页面(比如movie)，那就把其他的配置项注释掉即可。
---