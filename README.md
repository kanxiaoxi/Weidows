<!--
 *                        _oo0oo_
 *                       o8888888o
 *                       88" . "88
 *                       (| -_- |)
 *                       0\  =  /0
 *                     ___/`---'\___
 *                   .' \\|     |// '.
 *                  / \\|||  :  |||// \
 *                 / _||||| -:- |||||- \
 *                |   | \\\  - /// |   |
 *                | \_|  ''\---/''  |_/ |
 *                \  .-\__  '-'  ___/-. /
 *              ___'. .'  /--.--\  `. .'___
 *           ."" '<  `.___\_<|>_/___.' >' "".
 *          | | :  `- \`.;`\ _ /`;.`/ - ` : | |
 *          \  \ `_.   \_ __\ /__ _/   .-` /  /
 *      =====`-.____`.___ \_____/___.-`___.-'=====
 *                        `=---='
 *
 *
 *      ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 *
 *            佛祖保佑       永不宕机     永无BUG
 *
 *        佛曰:
 *                写字楼里写字间，写字间里程序员；
 *                程序人员写程序，又拿程序换酒钱。
 *                酒醒只在网上坐，酒醉还来网下眠；
 *                酒醉酒醒日复日，网上网下年复年。
 *                但愿老死电脑间，不愿鞠躬老板前；
 *                奔驰宝马贵者趣，公交自行程序员。
 *                别人笑我忒疯癫，我笑自己命太贱；
 *                不见满街漂亮妹，哪个归得程序员？
 *
 * @Author: Weidows
 * @Date: 2020-06-06 23:12:42
 * @LastEditors: Weidows
 * @LastEditTime: 2020-08-11 11:08:10
 * @FilePath: \Weidows\README.md
 -->

<h1 align="center">

  [*个人网页(Individual website)*](https://Weidows.github.io/Weidows/)

  ![不安](./.vscode/images/ComicExpression/5fa9b8812822cbb106e68986c0799b7d44f5da23.jpg) ⭐️ Weidow's 🌈の Garden ⭐️ ![酸了](./.vscode/images/ComicExpression/2909d2b0795b59041abfbc00d49d6048d646cbe2.jpg)
</h1>

# 一.简介よ (Brief Intro)
    这仓库就是一学习笔记,没啥可看的,看名字就能明白,需要找啥自取就行
  ## 🌈资源提示よ :)

<!-- !.vscode -->
  ## .vscode
  * [.vscode](./.vscode/)目录里有我的VScode设置文件,已经搭建好:
  C/C++ , Python , Java , Node.js , HTML5(与配置文件非相关) 开发环境...
    * [.vscode/backup](./.vscode/backup)里面有开发环境所需要的配置文件,安装包,压缩包和介绍等...  

    * [.vscode/images](./.vscode/images/)里面有横/竖屏 **涩图** (狗头,用来做VScode超越鼓励师URL图),目前整理有:  
    绿色植物(PrettyGreen) , 崩坏三(Honkai3) , 星际战甲(Warframe) , 狂三(Kurumi) , 海贼王(Onepiece) , 表情包 , unknown 等等...

    * [.vscode/Data](./.vscode/Data)里面有Vscode相关配置文件
      * [javaRunner](./.vscode/Data/javaRunner.cmd)由于CodeRunner只能运行单文件java程序,于是本人改编CodeRunner,使其勉强可以编译一个package(如果存在import包外的package会编译失败)  
      下面是"code-runner.executorMap"的关于java的设置,如需要使用的话需要修改下面的javaRunner路径  
      友情提醒:目前本人在用Maven + debugger for java来编译运行,此法更加舒适.

            "java": "javac -encoding UTF-8 -cp ../ $fileName && cd.. && cmd /c D:\\Game\\Demo\\Weidows\\.vscode\\Data\\javaRunner.cmd $dirWithoutTrailingSlash,$fileNameWithoutExt"


<!-- !Java -->
  ## Java
  * [Java](./Java/src/main/java/)里面是根据浙大翁凯老师的课程做的源代码笔记等等...  
  里面每个demo是一个独立package而非project,如果需要导入IDEA需要改一下  
    * 1.[狐狸与兔子源码](./Java/src/main/java/twenty/july/my_interface/)/[图片](./Java/src/main/java/twenty/july/my_interface/接口,狐狸与兔子/Cells173751.png)  
    这个是翁凯老师课程6.3(狐狸与兔子)的源代码内容,中国大学MOOC上没有给出,老师的讲解也不全面,网上的资源都...甚至还有10RMB出售的(大醉),此处给出送给有缘人:)  
    另外,还有[细胞自动机源码](./Java/src/main/java/twenty/july/data_depart_behave/) / [下一章7.x的狐狸与兔子源码](./Java/src/main/java/twenty/july/control_inversion/)  
    小小诚意,不求Star了,一起共勉!
    
    * 2.[贪吃蛇小程序-README](./Java/src/main/java/demos/snake_game/README.md)  
    别人做的小程序,在此学习一下Java基础


<!-- !HTML -->
  ## HTML
  * [HTML](./HTML/)关于H5的学习笔记和一些小web  
    * [群友给的MC的小web](./HTML/mc.geek.net/)


<!-- !CSS -->
  ## CSS
  * [CSS](./CSS/)关于CSS的学习笔记和一些小web  
    * 1.[class命名规范以及常用命名](./CSS/Study/ClassKeyWords.md)


<!-- !Python -->
  ## Python
  * [Python](./Python/)  
    * 1.目录里面有个520表白(Claim Love.py)的单文件源码,作者是别人(开源了),在此给路人行个方便...


<!-- !C++ -->
  ## C++
  * [C++](./C++/)内有一些简单算法和数据结构题和作业,都有注释,需要的话自取
    * 1.[链表](./C++/Data_struct/LinkedList/) 分有123,3里面是带界面的最终版本
  
    * 2.[四种方法求最大公约数](./C++/Arithmetic/求最大公约数/methods_of_calculating_Max_common_divisor.c)

    * 3.[算法题-求雨滴积累数(本人用的递归)](C++/Arithmetic/递归-求雨滴积累数/1.c)  
    ![题目](C++/Arithmetic/递归-求雨滴积累数/2bb975f41bd09c67.png)


<!-- !Others -->
  ## Others
  * [Others](./Others/)目录有一些其他语言的花里胡哨...以及Markdown等文件(各种随笔 & 他人项目)  
    * 1.[VScode插件推荐](./Others/MarkDown/Vscode.md)  

    * 2.[2016年世界编程大赛状元作品(这可不是我的啊!!!)](./Others/hg_fermi-paradox-20161105)
        ![展示图](./Others/hg_fermi-paradox-20161105/screenshot.png)


<!-- !暂无 -->
## 暂无
  * 暂无其他  loading...


# 二.鄙人项目推荐よ (To Be Star != 2B Star:)

  * [VScode彩虹屁-相声语音包](https://github.com/Weidows/Crosstalk-rainbow-fart)

  * [GitHub隐藏功能:自定义profile显示内容 & Github Page](https://github.com/Weidows/Weidows)

  * 尚未立项:
    * [VScode插件推荐](./Others/MarkDown/Vscode.md)
    *
  * 暂无其他  loading...

# N.[反馈 & 出处 (Aboue me & Click me)](./Others/MarkDown/AboutMe.md)

  *如果哪里有纰漏请在评论指正,欢迎讨论*

  ![HonkaiPrincess](./.vscode/images/Honkai3/[Nitrouzs]82409651.jpg)