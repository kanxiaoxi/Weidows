---
title: Hexo-pages里一些奇奇怪怪的写法
categories: 
  - backup
  - Blog
tags: 
  - Hexo
  - 备忘录
  - Website
cover: https://gitee.com/Weidows2984539695/Weidows/raw/master/Website/public/images/post/Hexo-fansy.jpg
---

<!--
 * @Author: Weidows
 * @Date: 2020-08-27 01:13:03
 * @LastEditors: Weidows
 * @LastEditTime: 2020-08-30 10:26:43
 * @FilePath: \Weidows\Website\source\_posts\backup\Hexo-fansy.md
-->

# 标签外挂
  * 写法:
  ```
  {% note default %}
  default 提示块标籤
  {% endnote %}

  {% note primary no-icon %}
  primary 提示块标籤
  {% endnote %}

  {% note success %}
  success 提示块标籤
  {% endnote %}

  {% note info %}
  info 提示块标籤
  {% endnote %}

  {% note warning %}
  warning 提示块标籤
  {% endnote %}

  {% note danger %}
  danger 提示块标籤
  {% endnote %}
  ```
  * 显示效果:
    {% note default %}
    default 提示块标籤
    {% endnote %}

    {% note primary no-icon %}
    primary 提示块标籤
    {% endnote %}

    {% note success %}
    success 提示块标籤
    {% endnote %}

    {% note info %}
    info 提示块标籤
    {% endnote %}

    {% note warning %}
    warning 提示块标籤
    {% endnote %}

    {% note danger %}
    danger 提示块标籤
    {% endnote %}  
---

# Gallery相册图库
  ## div式写法
  ```
  <div class="gallery-group-main">
  {% galleryGroup name description link img-url %}
  {% galleryGroup name description link img-url %}
  {% galleryGroup name description link img-url %}
  </div>

  name：图库名字
  description：图库描述
  link：连接到对应相册的地址
  img-url：图库封面的地址

  例如:
  <div class="gallery-group-main">
  {% galleryGroup '壁纸' '收藏的一些壁纸' '/Gallery/wallpaper' https://i.loli.net/2019/11/10/T7Mu8Aod3egmC4Q.png %}
  {% galleryGroup '漫威' '关于漫威的图片' '/Gallery/marvel' https://i.loli.net/2019/12/25/8t97aVlp4hgyBGu.jpg %}
  {% galleryGroup 'OH MY GIRL' '关于OH MY GIRL的图片' '/Gallery/ohmygirl' https://i.loli.net/2019/12/25/hOqbQ3BIwa6KWpo.jpg %}
  </div>
  ```
  ## 效果:
  <div class="gallery-group-main">
  {% galleryGroup '壁纸' '收藏的一些壁纸' '/Gallery/wallpaper' https://i.loli.net/2019/11/10/T7Mu8Aod3egmC4Q.png %}
  {% galleryGroup '漫威' '关于漫威的图片' '/Gallery/marvel' https://i.loli.net/2019/12/25/8t97aVlp4hgyBGu.jpg %}
  {% galleryGroup 'OH MY GIRL' '关于OH MY GIRL的图片' '/Gallery/ohmygirl' https://i.loli.net/2019/12/25/hOqbQ3BIwa6KWpo.jpg %}
  </div>

  ## 另一种相册形式(自动排列)
  ```
  {% gallery %}
  ![图片描述](图片地址)
  ![图片描述](图片地址)
  ![图片描述](图片地址)
  {% endgallery %}
  ```
---

# tag-hide
  ## inline(一行内)
  ```
  {% hideInline content,display,bg,color %}

    content: 文本内容
    display: 按钮显示的文字 (可选)
    bg: 按钮的背景颜色 (可选)
    color: 按钮文字的颜色 (可选)
  ```
  * 例如1:
    我是谁:{% hideInline Weidows,查看答案,#FF7242,#fff %}

  ## Block(块)
  ```
  {% hideBlock display,bg,color %}
  content
  {% endhideBlock %}
  ```
  * 例如2:
    {% hideBlock 我是谁 %}
    爷是:
    Weidows
    {% endhideBlock %}

  ## toggle(收缩框)
  ```
  {% hideToggle display,bg,color %}
  content
  {% endhideToggle %}
  ```
  * 例如3:
  {% hideToggle 我是谁 %}
  爷是:
  Weidows
  {% endhideToggle %}
  * tag-hide 内的标签外挂 content 内都不建议有 h1 - h6 等标题。因为 Toc 会把隐藏内容标题也显示出来，而且当滚动屏幕时，如果隐藏内容没有显示出来，会导致 Toc 的滚动出现异常。
---

# mermaid
  * 写法:
  ```
  {% mermaid %}
  内容
  {% endmermaid %}
  ```
  * 例如:
    ```
    {% mermaid %}
    pie
        title Key elements in Product X
        "Calcium" : 42.96
        "Potassium" : 50.05
        "Magnesium" : 10.01
        "Iron" :  5
    {% endmermaid %}
    ```
  * 显示:
    {% mermaid %}
    pie
        title Key elements in Product X
        "Calcium" : 42.96
        "Potassium" : 50.05
        "Magnesium" : 10.01
        "Iron" :  5
    {% endmermaid %}
  * mermaid 标籤不允许嵌套于一些隐藏属性的标籤外挂，例如: tag-hide 内的标籤外挂和 tabs 标籤外挂，这会导致 mermaid 图示无法正常显示，使用时请留意。
  * 请不要压缩 html 代码，不然会导致 mermaid 显示异常
---

# tabs(标签块)
  * 写法:
    ```
    {% tabs Unique name, [index] %}
    <!-- tab [Tab caption] [@icon] -->
    markdown内容(inline)
    <!-- endtab -->
    {% endtabs %}

    Unique name   : Unique name of tabs block tag without comma.
                    Will be used in #id's as prefix for each tab with their index numbers.
                    If there are whitespaces in name, for generate #id all whitespaces will replaced by dashes.
                    Only for current url of post/page must be unique!
    [index]       : Index number of active tab.
                    If not specified, first tab (1) will be selected.
                    If index is -1, no tab will be selected. It's will be something like spoiler.
                    Optional parameter.
    [Tab caption] : Caption of current tab.
                    If not caption specified, unique name with tab index suffix will be used as caption of tab.
                    If not caption specified, but specified icon, caption will empty.
                    Optional parameter.
    [@icon]       : FontAwesome icon name (full-name, look like 'fas fa-font')
                    Can be specified with or without space; e.g. 'Tab caption @icon' similar to 'Tab caption@icon'.
                    Optional parameter.
    ```
  * 例如: (test2标签为预选状态,找不到的话就是第一个)
    ```
    {% tabs test2 %}
    <!-- tab 第一个Tab -->
    **tab名字为第一个Tab**
    <!-- endtab -->

    <!-- tab @fab fa-apple-pay -->
    **只有图标 没有Tab名字**
    <!-- endtab -->

    <!-- tab 炸弹@fas fa-bomb -->
    **名字+icon**
    <!-- endtab -->
    {% endtabs %}
    ```
  * 显示:
    {% tabs test2 %}
    <!-- tab 第一个Tab -->
    **tab名字为第一个Tab**
    <!-- endtab -->

    <!-- tab @fab fa-apple-pay -->
    **只有图标 没有Tab名字**
    <!-- endtab -->

    <!-- tab 炸弹@fas fa-bomb -->
    **名字+icon**
    <!-- endtab -->
    {% endtabs %}
---

# Button
  ## 写法:
  ```
  {% btn [url],[text],[icon],[color] [style] [layout] [position] [size] %}

    [url]         : 链接
    [text]        : 按钮文字
    [icon]        : [可选] 图标
    [color]       : [可选] 按钮背景顔色(默认style时）
                          按钮字体和边框顔色(outline时)
                          default/blue/pink/red/purple/orange/green
    [style]       : [可选] 按钮样式 默认实心
                          outline/留空
    [layout]      : [可选] 按钮佈局 默认为line
                          block/留空
    [position]    : [可选] 按钮位置 前提是设置了layout为block 默认为左边
                          center/right/留空
    [size]        : [可选] 按钮大小
                          larger/留空
  ```
  ## 好康的demo:
  ```
  {% btn 'http://www.jerryc.me',JerryC,far fa-hand-point-right,outline blue larger %}
  {% btn 'http://www.jerryc.me',JerryC,far fa-hand-point-right,outline pink larger %}
  {% btn 'http://www.jerryc.me',JerryC,far fa-hand-point-right,outline red larger %}
  {% btn 'http://www.jerryc.me',JerryC,far fa-hand-point-right,outline purple larger %}
  {% btn 'http://www.jerryc.me',JerryC,far fa-hand-point-right,outline orange larger %}
  {% btn 'http://www.jerryc.me',JerryC,far fa-hand-point-right,outline green larger %}
  ```
  * 演示:
    {% btn 'http://www.jerryc.me',JerryC,far fa-hand-point-right,outline blue larger %}
    {% btn 'http://www.jerryc.me',JerryC,far fa-hand-point-right,outline pink larger %}
    {% btn 'http://www.jerryc.me',JerryC,far fa-hand-point-right,outline red larger %}
    {% btn 'http://www.jerryc.me',JerryC,far fa-hand-point-right,outline purple larger %}
    {% btn 'http://www.jerryc.me',JerryC,far fa-hand-point-right,outline orange larger %}
    {% btn 'http://www.jerryc.me',JerryC,far fa-hand-point-right,outline green larger %}
---

# _config.yml
  * 合并:把themes/xxx/_config.yml移动到source/_data/里,并改名为xxx.yml
  * 我所遇到的各种问题
    * 这里面inject js/css功能只能插入本地的,而且必须是./形式
    * css的inject在head,js的inject在body,不能改变位置(失效)
    * valine设置处的placeholder不能写带单引号的内容,会导致整个valine评论崩溃不显示
---