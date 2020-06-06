//库文件,用于存放函数的原型声明,如不声明编译器是猜参数的类型会造成错误

//标准头文件结构,避免出现重名函数或变量
#ifndef _MAX_H_     //如果include本.h的.c未定义以下函数
// 另外还有#ifdef
#define _MAX_H_     //那么在.c中引用以下声明

    int max(int a, int b);
    // int min(int a, int b);主文件说明了min是static

    extern int i; //声明全局变量,在.h中不能直接定义赋值,会报错

#endif
