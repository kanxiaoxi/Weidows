---
title: GitHub-Pages自动化部署
category: GitHub
tag: 备忘录
---
<!--
 * @Author: Weidows
 * @Date: 2020-08-23 10:54:41
 * @LastEditors: Weidows
 * @LastEditTime: 2020-08-23 15:53:15
 * @FilePath: \Weidows\Website\source\_posts\GitHub-Pages-deploy.md
-->
# 文件目录: .github/workflows/deploy.yml
```
  name: Build and Deploy
  on: [push] # 触发条件
  jobs:
    build-and-deploy:
      runs-on: ubuntu-latest
      steps:
        - name: Checkout 🛎️
          uses: actions/checkout@v2 # If you're using actions/checkout@v2 you must set persist-credentials to false in most cases for the deployment to work correctly.
          with:
            persist-credentials: false

        - name: Install and Build 🔧 # This example project is built using npm and outputs the result to the 'build' folder. Replace with the commands required to build your project, or remove this step entirely if your site is pre-built.
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
            BRANCH: gh-pages # The branch the action should deploy to.
            FOLDER: Website/public # The folder the action should deploy.
```
---
# 解释:
* name随意起
* on:[push]意思是在推送时触发action
* Build and Deploy就是触发的job名称
* run-on是运行环境(其自带一些基础的环境,Exp:Node.JS,但是更具体的比如Hexo就不会自带了)
* steps就是步骤了,可以看出下面有三个步骤(步骤内的操作就不细讲了...)
---

# 历史:
* 之前一直在用github-pages搭建静态网站(因为都说Gitee没GitHub强)
* 用过后发现...我他妈傻了
* GitHub纯奶味的英语确实不太容易理解,而Gitee这方面..都懂.
* 而且建站方面,在个人用的是Node.JS Hexo搭建静态博客的情况下deploy速度比Github要强(明显能感觉出来)
* 而且他有个功能GitHub无法实现(指定某个目录进行deploy),比如我的博客应该部署root/Website/public/  GitHub只能用action把这个目录部署到gh-pages分支再进行操作(实际动起手来略难受)
* 而Gitee直接写完了generate一下(这个就别指望云端操作了,云肯定比个人电脑慢,而且很多脚手架和运行环境的缺失会导致出错),编译完成出来~/public/目录直接push然后刷新一下Gitee-pages状态就O了
* 而且最重要的是GitHub国外服务器慢的一批,Gitee国内的快很多倍(初体验就惊艳了我,啥玩意CDN,lz用不着:)
* 总之...嗯这篇只是个笔记(日),bush广告