---
title: 一篇扫清:GitHub-Pages自动化部署 + github/gitee选择
category: 
  - GitHub
  - GitHub-Pages
tag:
  - 备忘录
  - Hexo
  - Website
cover: https://gitee.com/Weidows2984539695/Weidows/raw/master/Website/public/images/post/Hexo-Butteryfly.jpg
---
<!--
 * @Author: Weidows
 * @Date: 2020-08-23 10:54:41
 * @LastEditors: Weidows
 * @LastEditTime: 2020-08-26 22:11:37
 * @FilePath: \Weidows\Website\source\_posts\GitHub\GitHub-Pages-deploy.md
-->
# 历史-2020-8: (如果你在找教程最好了解下历史:)
  * 之前一直在用github-pages搭建静态网站(因为都说Gitee没GitHub强)
  * 用过后发现...*我傻了*
  * GitHub纯奶味的英语确实不太容易理解,而Gitee这方面..都懂.
  * 而且建站方面,在个人用的是Node.JS + Hexo搭建静态博客的情况下deploy速度比Github要强(明显能感觉出来)
  * 而且他有个功能GitHub无法实现(`指定某个目录进行部署`,github需要绕远道),比如我的博客应该部署`root/Website/public/`  GitHub只能用action把这个目录部署到`gh-pages分支`再进行操作(实际动起手来略难受,而且注意必须是这个分支,其他名不行,除非repo名字是`xxx.github.io`这个样式的)
  * 而Gitee直接写完了generate一下(这个就别指望云端操作了,云肯定比个人电脑慢,而且很多脚手架和运行环境的缺失会导致出错),编译完成出来~/public/目录直接push然后刷新一下Gitee-pages状态就O了,不要求repo名和分支名格式!
  * 而且最重要的是GitHub国外服务器慢的一批,Gitee国内的快很多倍(初体验就惊艳了我,啥玩意CDN,lz用不着:)
  * 总之...嗯这篇只是个笔记(日),bush广告

  ## 总结:
  * 1.不要求仓库名和分支名格式,可以指定部署的文件夹
  * 2.速度快,部署速度快,访问速度无限快
  * 3.不用写yaml进行action部署(直接省了一步)
  * 4.中文的容易管理点(其实熟了差不多)
  * 5.魂淡GitHub以上一条不占,坑了老夫很久...
---

# GitHub自动化部署
  ## 首先安装Hexo-deployer(注意cnpm好像不行)
  `npm install hexo-deployer-git --save`
  ## 然后在_config.yml里添加以下内容(注意缩进不要错)
  ```
  deploy: 
    type: git # 用本项目的git进行提交 & 推送
    repo: 这里填入GitHub仓库URL
    branch: master # 这里写想要部署到的分支名(没有对应分支的话会自动新建)
  ```
  ### 然后在对应仓库的设置里找到github-pages然后选择对应分支,系统就会自动部署并发出你的博客链接了
  ---
  
  ## 另一种更加方便完美的解决方案(比上面好些)
  * 因为搭建这个博客的工作目录可能并不是一个独立的git仓库
  * (就是它被包含在其他仓库里,而非自己是一个独立仓库)
  * 这种情况下上面的deployer就鸡鸡了(没法用了,除非自己改),有没有解决方案呢?
  * 有,使用github-action自动化部署!
  ## github-action自动化部署
  文件目录: `Blogroot/.github/workflows/deploy.yml`
  (简单点就是.github跟public,source等等同级目录),写入下面内容:
  ```
  name: Build and Deploy
  on: [push] # 触发条件(git推送时)
  jobs:
    build-and-deploy:
      runs-on: ubuntu-latest
      steps:
        - name: Checkout 🛎️
          uses: actions/checkout@v2 
          # 下面这个最好设成false
          with:
            persist-credentials: false

        - name: Install and Build 🔧 
          # 这下面可以自定义你想使用的命令,注意环境条件是否允许  
          run: |
            cd Website
            npm install
            npm run build
          env:
            CI: false

        - name: Deploy 🚀
          uses: JamesIves/github-pages-deploy-action@releases/v3
          with:
            GITHUB_TOKEN: ${{ secrets.GITHUB_TOKEN }}
            BRANCH: gh-pages # 把下面这个文件夹部署到哪个分支(不能是本分支,会覆盖掉)
            FOLDER: Website/public # 想部署的文件夹
  ```
  ### 解释:
  * name随意起
  * on:[push]意思是在推送时触发action
  * Build and Deploy就是触发的job名称
  * run-on是运行环境(其自带一些基础的环境,Exp:Node.JS,但是更具体的比如Hexo就不会自带了)
  * steps就是步骤了,可以看出下面有三个步骤(步骤内的操作就不细讲了...)
  * 这样我们写完博客generate之后push这个仓库,github-action会自动执行找到你指定的文件夹把它部署到你指定的分支上,然后设置下让github-pages部署这个分支,博客就出来了!
  * 如果嫌github慢想找CDN,推荐[*看看上面的历史*](#历史-2020-8-如果你在找教程最好了解下历史)
