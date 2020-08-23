---
title: GitHub-Pages自动化部署
category: GitHub
tag: 备忘录
---
<!--
 * @Author: Weidows
 * @Date: 2020-08-23 10:54:41
 * @LastEditors: Weidows
 * @LastEditTime: 2020-08-23 11:04:54
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
# 解释:
* name随意起
* on:[push]意思是在推送时触发action
* Build and Deploy就是触发的job名称
* run-on是运行环境(其自带一些基础的环境,Exp:Node.JS,但是更具体的比如Hexo就不会自带了)
* steps就是步骤了,可以看出下面有三个步骤(步骤内的操作就不细讲了...)