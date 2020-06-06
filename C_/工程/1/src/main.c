#include <stdio.h>//  <>是指定去找编译器目录
#include"max.h" //  ""是先找当前项目目录,后找编译器目录
// #include"max.c"这种是直接找到那个文件插入,不建议使用

static int min(int a, int b);//不对外公开的函数,只能在本文件使用
static int a = 0;            //同上,叫静态本地变量

int min(int a, int b){  //虽然声明时说了是int型的函数,但定义时int也必须写
	return a < b ? a : b;
}

int main(int argc, char *argv[]) {
    int a = 5;
    int b = 6;
    printf("max=%d    ", max(a, b));
    printf("min=%d\n", min(a, b));
    printf("max.c中全局变量i=%d\n", i);
    return (0);
}
