---
title: Data:关于各类语言及技术栈的安装 && 使用
tags: 备忘录
categories: backup
cover: https://gitee.com/Weidows2984539695/Weidows/raw/master/Website/public/images/Humor/Cai.jpg
---
<!--
 * @Author: Weidows
 * @Date: 2020-08-19 00:38:26
 * @LastEditors: Weidows
 * @LastEditTime: 2020-08-30 19:20:27
 * @FilePath: \Weidows\Website\source\_posts\backup\Data.md
-->

# 一.命令行（管理员模式）代码：
  ``` 
  reg add "HKEY_LOCAL_MACHINE\SYSTEM\CurrentControlSet\Control\Session Manager\Kernel" /v DisableTsx /t REG_DWORD /d 0 /f
  ```
---

# 二.Java环境:
  ## JDK环境
  ``` 
  VScode中Java环境异常时先尝试在命令面板Clean the Java language sever Workspace
  新建JAVA_HOME, 变量值  D:\Game\Demo\AdoptOpenJDK\
  Path里面添加 %JAVA_HOME%\bin
  同上CLASSPATH(比较新的不用)	.;%Java_Home%\bin;%Java_Home%\lib\dt.jar;%Java_Home%\lib\tools.jar
  JDK创建jre: 进入JDK根目录管理员模式输入
    bin\jlink.exe --module-path jmods --add-modules java.desktop --output jre
  ```
  ## Maven环境:
  ``` 
  新建M2_HOME  D:\Game\Demo\apache-maven-3.6.3
  新建MAVEN_HOME  D:\Game\Demo\apache-maven-3.6.3
  Path中+	%M2_HOME%\bin
  Path中+ MAVEN_HOME\bin
  ```
---

# 三.C/C++环境:

  ``` 
  在Path中添加  D:\Game\Demo\Dev-Cpp\MinGW64\bin
  ```
---

# 四.Git环境:

  ``` 
  Path中+	D:\Game\Demo\Git\cmd
  ```
---

# 五.Python环境:
  ``` 
  Path中+	
    D:\Game\Demo\Python\
    D:\Game\Demo\Python\Scripts\
  ```
---

# 六.Powershell环境:
  ``` 
    Path里面+ D:\Game\Demo\PowerShell\7\
  ```
  ## 安装oh-my-posh && posh-git
  ``` 
    Install-Module posh-git
    Install-Module oh-my-posh
  ```
  ## 安装PoshFuck (不必在意格式,Ctrl+C/V就行)
  ``` 
    Set-ExecutionPolicy RemoteSigned
      iex ((new-object net.webclient).DownloadString('https://raw.githubusercontent.com/mattparkes/PoShFuck/master/Install-TheFucker.ps1'))
  ```
  ## 3. 启用主题及自动补全(五个全上)
  ``` 
    ~/文档/PowerShell/Microsoft.PowerShell_profile.ps1  +
      Import-Module oh-my-posh
      Import-Module posh-git
      Set-Theme Paradox

      ?Posh中Linux形式补全
        Set-PSReadlineKeyHandler -Key Tab -Function MenuComplete
      ?类似theFuck,用法:fuck  fuck!  WTF  Get-Fucked
        Import-Module PoShFuck
  ```
---

# 七.VScode快捷键
  ``` 
  向下/上复制一行:shift+alt+↓/↑
  把当前行上/下移 alt+↑/↓
  向左/右缩进 Ctrl+[ / ]
  删除行 alt+;
  行首 alt+n  行尾 alt+m
  换行alt+,  或 Ctrl+enter
  全折叠Ctrl+shift+[   全展开 Ctrl+shift+]
  打开LiveSever alt+[ + ]
  插入文件头 Ctrl+ alt + i
  格式化 shift + alt + f
  选中当前行 Ctrl + l
  插入标签Ctrl+alt+K
  ```
---

# 八.Node.JS环境
  ``` 
    Path中+	D:\Game\Demo\Node.js\
    
    npm包管理器换阿里源(阿里牛逼)
      npm install -g cnpm --registry=https://registry.npm.taobao.org
      换完之后npm install -> cnpm install
  ```
---

# 九.API接口收藏
  ## My URL前缀: Gitee && GitHub (旁人没啥用...)
  ### Gitee:
  * 图/文件:  `https://gitee.com/Weidows2984539695/Weidows/raw/master/Website/public`
  * 链接: `https://gitee.com/Weidows2984539695/Weidows/blob/master`
  * 博客: `http://weidows2984539695.gitee.io/weidows`
  ### GitHub:
  * 图: `https://raw.githubusercontent.com/Weidows/Weidows/master`
  * 链接: `https://github.com/Weidows/Weidows/tree/master`
    
  ## 随机图片API
  ### 横屏
  * 风景图 `api.ixiaowai.cn/gqapi/gqapi.php`
  * 二次元coser `https://uploadbeta.com/api/pictures/random/?key=二次元`
  * 跟上边差不多都是三次元妹子.. `https://uploadbeta.com/api/pictures/random/?key=动漫`
  * #小心身体-推女郎# `https://uploadbeta.com/api/pictures/random/?key=推女郎`
  * 必应 `https://bing.rthe.net/wallpaper`
  
  ### 竖屏
  
  ### 未知 && 暂时不会用~
  ```
    风景随机图：http://pic.tsmp4.net/api/fengjing/img.php
    女神随机图：http://pic.tsmp4.net/api/nvsheng/img.php
    影视随机图：http://pic.tsmp4.net/api/yingshi/img.php
    二次元随机图：http://pic.tsmp4.net/api/erciyuan/img.php
    二次元随机图:http://www.dmoe.cc/random.php
  ```
  ## 在线生成二维码API
  * 百度网盘(可使用https)
    `http://pan.baidu.com/share/qrcode?w=150&h=150&url=`
  * iClick接口 (无https) 
    `http://bshare.optimix.asia/barCode?site=weixin&url=`
  * JiaThis 接口(无https) 
    `http://s.jiathis.com/qrcode.php?url=`
  * 联图网(无https)
    `http://qr.liantu.com/api.php?text=`
  * K780数据网(支持https和http)
    `http://api.k780.com:88/?app=qr.get&data=`
  * QR Code Generator(https接口)
    `https://api.qrserver.com/v1/create-qr-code/?size=150x150&data=`
    
  ## 鼠标点击/跟随特效js
    * 小心心特效
    `https://cdn.jsdelivr.net/gh/Sanarous/files@1.151/js/clicklove.js`
    * 社会主义核心价值观
    `https://cdn.jsdelivr.net/gh/Sanarous/files@1.151/js/clicksocialvalue.js`
    * 花花特效
    `https://cdn.jsdelivr.net/gh/Sanarous/files@1.151/js/click.min.js`
    * 跟随特效
    `https://cdn.jsdelivr.net/gh/sviptzk/HexoStaticFile@latest/Hexo/js/mouse_snow.min.js`