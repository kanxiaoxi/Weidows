---
title: Data:关于各类语言及技术栈的安装 && 使用
---
<!--
 * @Author: Weidows
 * @Date: 2020-08-19 00:38:26
 * @LastEditors: Weidows
 * @LastEditTime: 2020-08-19 17:36:04
 * @FilePath: \Weidows-Gardend:\Game\Demo\Github\Weidows\source\_posts\Data.md
-->


# 一.命令行（管理员模式）代码：
  ``` 
  reg add "HKEY_LOCAL_MACHINE\SYSTEM\CurrentControlSet\Control\Session Manager\Kernel" /v DisableTsx /t REG_DWORD /d 0 /f
  ```


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


# 三.C/C++环境:

  ``` 
  在Path中添加  D:\Game\Demo\Dev-Cpp\MinGW64\bin
  ```


# 四.Git环境:

  ``` 
  Path中+	D:\Game\Demo\Git\cmd
  ```



# 五.Python环境:
  ``` 
  Path中+	
    D:\Game\Demo\Python\
    D:\Game\Demo\Python\Scripts\
  ```


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
  ## 启用主题及自动补全(五个全上)
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


# 八.GitHub 图片 URL
  ## 竖屏:
  ``` 
      "https://raw.githubusercontent.com/Weidows/Weidows/master/.vscode/images/Honkai3/1(1).jpg",
      "https://raw.githubusercontent.com/Weidows/Weidows/master/.vscode/images/Honkai3/QQ%E5%9B%BE%E7%89%8720200601181038.jpg",
      "https://raw.githubusercontent.com/Weidows/Weidows/master/.vscode/images/Honkai3/QQ%E5%9B%BE%E7%89%8720200601181604.png",
      "https://raw.githubusercontent.com/Weidows/Weidows/master/.vscode/images/Honkai3/QQ%E5%9B%BE%E7%89%8720200601181610.png",
      "https://raw.githubusercontent.com/Weidows/Weidows/master/.vscode/images/Honkai3/QQ%E5%9B%BE%E7%89%8720200601181614.png",
      "https://raw.githubusercontent.com/Weidows/Weidows/master/.vscode/images/Honkai3/QQ%E5%9B%BE%E7%89%8720200601181619.png",
      "https://raw.githubusercontent.com/Weidows/Weidows/master/.vscode/images/Honkai3/QQ%E5%9B%BE%E7%89%8720200601181623.png",
      "https://raw.githubusercontent.com/Weidows/Weidows/master/.vscode/images/Honkai3/QQ%E5%9B%BE%E7%89%8720200601181627.png",
      "https://raw.githubusercontent.com/Weidows/Weidows/master/.vscode/images/Honkai3/QQ%E5%9B%BE%E7%89%8720200601181631.png",
      "https://raw.githubusercontent.com/Weidows/Weidows/master/.vscode/images/Honkai3/QQ%E5%9B%BE%E7%89%8720200601181637.png",
      "https://raw.githubusercontent.com/Weidows/Weidows/master/.vscode/images/Honkai3/QQ%E5%9B%BE%E7%89%8720200601181642.png",
      "https://raw.githubusercontent.com/Weidows/Weidows/master/.vscode/images/Honkai3/QQ%E5%9B%BE%E7%89%8720200601181650.png",
      "https://raw.githubusercontent.com/Weidows/Weidows/master/.vscode/images/Honkai3/QQ%E5%9B%BE%E7%89%8720200601181657.png",
      "https://raw.githubusercontent.com/Weidows/Weidows/master/.vscode/images/Honkai3/QQ%E5%9B%BE%E7%89%8720200601181702.png",
      "https://raw.githubusercontent.com/Weidows/Weidows/master/.vscode/images/Honkai3/%5BAB%5D75243073(1).jpg",
      "https://raw.githubusercontent.com/Weidows/Weidows/master/.vscode/images/Honkai3/%5BAlset%5D78382279.jpg",
      "https://raw.githubusercontent.com/Weidows/Weidows/master/.vscode/images/Honkai3/%5BNitrouzs%5D82409651.jpg",
      "https://raw.githubusercontent.com/Weidows/Weidows/master/.vscode/images/Honkai3/%5BZuu_Ziii%5D73828182.jpg",
      "https://raw.githubusercontent.com/Weidows/Weidows/master/.vscode/images/Honkai3/%5B%E5%8D%83%E9%9F%B5%5D79705001.jpg",
      "https://raw.githubusercontent.com/Weidows/Weidows/master/.vscode/images/Honkai3/%5B%E6%97%A9%E6%99%A8%E7%9A%84%E7%8B%AE%E5%AD%90%5D76471319.jpg",
      "https://raw.githubusercontent.com/Weidows/Weidows/master/.vscode/images/Warframe/-28678b86bf55d418.jpg",
      "https://raw.githubusercontent.com/Weidows/Weidows/master/.vscode/images/Warframe/1556168563616.jpg",
      "https://raw.githubusercontent.com/Weidows/Weidows/master/.vscode/images/Warframe/1578615153561.jpg",
      "https://raw.githubusercontent.com/Weidows/Weidows/master/.vscode/images/Warframe/1580438941071.jpg",
      "https://raw.githubusercontent.com/Weidows/Weidows/master/.vscode/images/Warframe/Screenshot_2019-10-29-14-16-29-84(1).jpg",
      "https://raw.githubusercontent.com/Weidows/Weidows/master/.vscode/images/Warframe/Screenshot_2019-10-29-14-16-37-93(1).jpg",
      "https://raw.githubusercontent.com/Weidows/Weidows/master/.vscode/images/Warframe/Screenshot_2019-10-29-14-16-45-98(1).jpg",
      "https://raw.githubusercontent.com/Weidows/Weidows/master/.vscode/images/Warframe/Screenshot_2019-10-29-14-16-56-46(1).jpg",
      "https://raw.githubusercontent.com/Weidows/Weidows/master/.vscode/images/Warframe/Screenshot_2019-10-29-14-17-03-16(1).jpg",
      "https://raw.githubusercontent.com/Weidows/Weidows/master/.vscode/images/Warframe/Screenshot_2019-10-29-14-17-12-57(1).jpg",
      "https://raw.githubusercontent.com/Weidows/Weidows/master/.vscode/images/Warframe/Screenshot_2019-10-29-14-17-20-58(1).jpg",
      "https://raw.githubusercontent.com/Weidows/Weidows/master/.vscode/images/Warframe/Screenshot_2019-10-29-14-17-41-32(1).jpg",
      "https://raw.githubusercontent.com/Weidows/Weidows/master/.vscode/images/Warframe/Screenshot_2019-10-29-14-17-50-59(1).jpg",
      "https://raw.githubusercontent.com/Weidows/Weidows/master/.vscode/images/Warframe/Screenshot_2019-10-29-14-18-07-85(1).jpg",
      "https://raw.githubusercontent.com/Weidows/Weidows/master/.vscode/images/Honkai3/QQ%E5%9B%BE%E7%89%8720200620235146.jpg",
      "https://raw.githubusercontent.com/Weidows/Weidows/master/.vscode/images/Kurumi/22-161002235Q5b5.jpg",
      "https://raw.githubusercontent.com/Weidows/Weidows/master/.vscode/images/Onepiece/QQ%E5%9B%BE%E7%89%8720190624124419.jpg",
      "https://raw.githubusercontent.com/Weidows/Weidows/master/.vscode/images/unknown/QQ%E5%9B%BE%E7%89%8720200624160634.jpg"
  ```
  ## 横屏:
  ``` 
      "https://raw.githubusercontent.com/2984539695/Weidows/master/.vscode/images/PrettyGreen/Nu9goR.jpg",
      "https://raw.githubusercontent.com/2984539695/Weidows/master/.vscode/images/PrettyGreen/Nu9RF1.jpg",
      "https://raw.githubusercontent.com/2984539695/Weidows/master/.vscode/images/PrettyGreen/NuP226.jpg",
      "https://raw.githubusercontent.com/2984539695/Weidows/master/.vscode/images/PrettyGreen/NuPcP1.jpg",
      "https://raw.githubusercontent.com/2984539695/Weidows/master/.vscode/images/PrettyGreen/NuPfKO.jpg",
      "https://raw.githubusercontent.com/2984539695/Weidows/master/.vscode/images/PrettyGreen/NuPg8x.jpg",
      "https://raw.githubusercontent.com/2984539695/Weidows/master/.vscode/images/PrettyGreen/NuPhrD.jpg",
      "https://raw.githubusercontent.com/2984539695/Weidows/master/.vscode/images/PrettyGreen/NuPrVJ.jpg",
      "https://raw.githubusercontent.com/2984539695/Weidows/master/.vscode/images/PrettyGreen/NuPRxK.jpg",
      "https://raw.githubusercontent.com/2984539695/Weidows/master/.vscode/images/PrettyGreen/NuPsa9.jpg",
      "https://raw.githubusercontent.com/2984539695/Weidows/master/.vscode/images/PrettyGreen/NuPy5R.jpg",
  ```


# 九.Node.JS环境
  ``` 
  Path中+	D:\Game\Demo\Node.js\
  ```
  ## npm包管理器换阿里源(阿里牛逼)
  ``` 
  npm install -g cnpm --registry=https://registry.npm.taobao.org
  换完之后npm install -> cnpm install
  ```
  ## 常用的Hexo 命令
  ``` 
  npm install hexo -g #安装Hexo
  npm update hexo -g #升级
  hexo init 博客名 #初始化博客
  npm uninstall hexo-xxx  #删除插件
  Hexo new page page名 #新建页面
  ```
  ## 安装deployer(这个不能用阿里源) && 编译部署
  ``` 
  npm install hexo-deployer-git --save

  hexo clean
  hexo g
  hexo d
  ```
  ## 注意事项
  ``` 
  注意如果repo命名时没加.github.io的后缀,那么只能deploy到gh-pages分支(否则出错)

  workflow作用只是把public/ deploy到gh-pages分支上,generate出public/仍需要在本地进行
  
  如果打开Hexo Server后报错(extends includes/layout.pug block content #recent-posts.recent-posts include includes/recent-posts.pug include includes/pagination.pug)
    npm install hexo-renderer-pug hexo-renderer-stylus --save
  ```
  ## 安装Live2D (不能用cnpm 这俩二选一)
  ``` 
  yarn add hexo-helper-live2d
  npm install --save hexo-helper-live2d

  导入模型: (导入后在node_modules里找相应文件夹,移动到/live2d_models/ 注意不能用npm)
    白猫:cnpm install live2d-widget-model-tororo
    黑猫:cnpm install live2d-widget-model-hijiki

  启用模型:
    在/_config.yml里找到model.use改成想用的模型文件夹名
  ```
  ## 启用comment && search
  ``` 
  npm install valine --save
  npm install hexo-generator-search --save
  然后把主题里的_config.yml改改
  ```