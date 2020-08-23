---
title: 关于安装系统硬盘&引导那些事
categories: experience
tags: 计算机系统
---
<!--
 * @Author: Weidows
 * @Date: 2020-08-23 20:49:52
 * @LastEditors: Weidows
 * @LastEditTime: 2020-08-23 20:52:55
 * @FilePath: \Weidows\Website\source\_posts\about_system.md
-->
# 0x.前言:

    此文不太适合纯小白,对电脑系统方面一无所知的请及时退出
    最好准备好充足时间来看这篇文章,此篇文章会给你带来重启电脑至少100次的经验;

# 1.准备工作:

    硬件设备:电脑,一个U盘(8G完全够用,也可以用读卡器+SD卡替代)
    软件:1.rufus(制作启动盘用,这个win和linux都支持)
            2.分区助手或diskgenius(分盘符用)
            3.自己准备安装的系统的镜像文件(ISO格式,其他格式的需要
                特定的安装器安装,自行百度,在此不一一赘述)

# 2.备份工作

    把自己所有盘里的重要资料尽量备份,一定要做好背水一战的觉悟

# 3.(重点)讲解两种启动方式:

***1.传统Bios启动(legacy启动):***

硬盘分区简单明确,只要分出来足够大的分区(如C盘,D盘...),用安装器把系统安装进去,基本就完成安装了,安装时会自动在这个硬盘的某个[神秘]的地方添加一条引导记录(如果记录被改或删的话,就算系统完好也不会启动)
/*如果MBR硬盘下的Windows系统无法启动,且不想重装系统,用NTBOOTautofix 
另外,对于Windows,网上有UEFI+Bios引导修复工具,可以通用*/

***2.UEFI模式启动(EFI启动):***

当前"高新"电脑普遍使用的模式,特点是开机时按某个键(不同电脑不一样)进入bios界面很好看(从2012年以后的主板都支持UEFI了,只不过这种"高新"的默认就是UEFI);
当前来说主板都支持UEFI,可以通过Bios界面Boot>>Launch  CSM的开关来改变启动方式
这里不懂的可以百度关键词"Bios修改启动模式"
这CSM设置为enable就是开启的意思,兼容传统Bios启动和UEFI启动(你硬盘里是什么方式的他就用什么);设为disable就是关闭,只用UEFI模式启动(此模式下硬盘必须是GPT,系统的启动模式必须是UEFI,否则无法启动)

在此附上开机时进入bios的按键![在这里插入图片描述](https://img-blog.csdnimg.cn/20200307195931138.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3FxXzM5ODIzMjk1,size_16,color_FFFFFF,t_70)
# 4.(也是重点)硬盘格式讲解:

 - **1.硬盘格式与分区格式(NTFS,FAT32...)是两回事**,硬盘格式主要影响引导方式,其查看和更改可以借助两个常用的硬盘工具"分区助手"和"DiskGenius"来查看和更改,更改格式(不出意外的话)不会格式化,但从MBR格式变为GPT格式会从硬盘的某个分区中抽出一小部分(300MB左右)作为EFI(ESP)引导分区
   	
   	**此段选择性观看**:值得一说的是如果在Windows已经安装的情况下安装linux(Boot/efi挂载点是那个小的ESP分区),那么进入Windows系统时无论ESP分区还是linux系统分区都无法检测出来(分区助手显示他俩是未分配空间),虽然不影响使用,但是如果你想让它出来可以使用"恢复分区"命令,让ESP分区可以查看和修改(但会破坏ESP分区的挂载状态,使用UEfix挂载那个ESP分区,一定要!!!,不然全部空大,凉凉..)
   	
    **2.GPT 格式**:以后的主流格式,目前2020年还在两种格式的过渡期,此格式硬盘特点是有一块小分区(ESP引导区)用来存放系统启动的文件,此分区绝对不要动(除非有自信弄懂了,不然有可能所有系统都无法启动);
   	此格式硬盘只能用来引导UEFI模式启动的系统(不要担心,如果原来是MBR+传统BIOS启动,在硬盘格式从MBR到GPT转换时Windows的启动模式也会自动从bios变为UEFI;但对于linux系统,其过于复杂涉及挂载点和GRUB2代码更改,难以操作,最简便的方法是重装系统)
   	
   	**3.MBR格式**:只能用来引导传统bios(legacy启动),目前还常见的格式,特点是在系统分区根目录里会有一个Boot文件夹(如C:\Boot但有可能是隐藏的,看不到);
   	电脑商的最爱,对于Windows适配好,但是最大的问题是对于linux和黑苹果的兼容问题(某些无法安装);
   	虽然GPT是最新的格式,但是MBR不会差太多(只有开机时速度有丝毫差别)
   	上一张无关紧要的图来点层次感,GPT和MBR同级,我懂你懂你懂我233![在这里插入图片描述](https://img-blog.csdnimg.cn/2020030719535046.jpg?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3FxXzM5ODIzMjk1,size_16,color_FFFFFF,t_70)
OK上机操作
![在这里插入图片描述](https://img-blog.csdnimg.cn/20200307201943243.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3FxXzM5ODIzMjk1,size_16,color_FFFFFF,t_70)
``
# N.闲杂问题

 ***1.装好系统后系统的睡眠模式无法使用(装睡问题)***
   有可能是bios里的启动方式不兼容问题,如果是EFI启动可以尝试打开CSM
   另一种可能是引导出问题了(仅限EFI模式),去EFI引导盘查看并尝试修复

   ***2.当前版本的manjaro安装完成后如果只能进入一次系统,再次进黑屏无响应问题***
   尝试更换下启动模式,从UEFI换为传统bios启动,就是把Launch   CSM开启
   目前只能推测是独立显卡驱动兼容问题,系统可以引导但是进不去桌面,
   对此只能在第一次进入桌面时配置好显卡驱动,对此尚无统一的解决方案.
   ![在这里插入图片描述](https://img-blog.csdnimg.cn/20200307200147476.jpg?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3FxXzM5ODIzMjk1,size_16,color_FFFFFF,t_70)

# N+1.在此感谢我看过的文章的写者,帮了我很多,谢谢!
**可怕的不是我啥也不会,而是没想过反哺社会**
*于是,写了一下午*,欢迎大佬们来探讨和纠正错误,技术性问题就不要问我了(老脸一红,我是萌新)
玩系统不是玩系统,是在玩态度,希望此篇文章能给您搭键之手些许慰藉