---
title: 仅仅是一篇关于yaml文件语法虐待我后的小诟病
categories: 
  - experience
tags: 
  - yaml
cover: https://gitee.com/Weidows2984539695/Weidows/raw/master/Website/public/images/post/yaml-experience.jpg
---
<!--
 * @Author: Weidows
 * @Date: 2020-08-25 00:44:40
 * @LastEditors: Weidows
 * @LastEditTime: 2020-08-26 22:11:26
 * @FilePath: \Weidows\Website\source\_posts\experience\yaml-experience.md
-->
# 冒号 :
  * yaml元素标签后加个冒号表示结束,这俩要紧挨着,但是与冒号后跟着的值要空出一个空格
  这样 `keyword: value`
---

# 连字符(减号) -
  * 在keyword下面用-连续赋值,一定要注意缩进,连字符与value之间也需要有空格
  * 另外不能保证这一排value是同一级的
  * 比如下面的Blog是backup的下一级,backup是categories的下一级
  ```
    categories: 
      - backup
      - Blog
  ```
---

# 单引号 '
  * 这魂淡肯定是成对出现,但又不是跟双引号一样可有可无
  * 当generate时报错(一长溜)但又不知道啥原因时,尝试寻找一下这个的错
  * 该来的地儿不来,不该来的却总是在2333