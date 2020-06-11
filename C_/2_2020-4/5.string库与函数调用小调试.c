/*
 * @Author: Weidows
 * @Date: 2020-05-29 00:29:29
 * @LastEditors: Weidows
 * @LastEditTime: 2020-06-10 22:54:31
 * @FilePath: \demo\C_\2_2020-4\5.string库与函数调用小调试.c
 */ 
//库
    #include<stdio.h>
    #include<stdlib.h>//malloc
    #include <string.h>

//strlen; strcmp; strcpy; strcat; strchr; strstr;讲解
    /*为防止越界(用n限制)有安全版本的strncpy & strncat & strncmp
        char *strncpy(char *restrict dst,const char *restrict src,size_t n);
        char *strncat(char *restrict s1,const char *restrict s2,size_t n);
        int strncmp(const char *s1,const char *s2,size_t n);*/
    int strlen_test_like(const char *test,const char *like){
        printf("sizeof=%d  ", sizeof(test)); //数组大小
        printf("strlen=%d  ", strlen(test)); //字符长度

        int cnt = 0;//计数君常用名字
        int idx = 0;//就是常用的i
        while (like[idx]!='\0'){
            cnt++;
            idx++;
        } //此循环cnt多余可以删去,下面return idx;也是对的
        return cnt;
    } //仿制的strlen(),字符串和数组都能用*s表示,统一写成*s

    int strcmp_like(const char *a,const char *b){
        //方法一,正常套路(数组)
            // int idx = 0;
            // while (a[idx] == b[idx] && a[idx] != '\0'){idx++;}
            // //此处注意不能写成a == b != c这种三连式
            // return a[idx] - b[idx];

        //方法二,运用指针的奇淫妙计
            while(*a == *b && *a != '\0'){*a++;*b++;}
            return *a - *b;

    }//仿制的strcmp()

    char* strcpy_test_like(const char *src,char *dstlike){
        char *dst = (char*)malloc(strlen(src) + 1);
        printf("复制前a= %s", dst);//f未初始化,内容随机
        printf("  复制后a= %s  ", strcpy(dst, src)); //把b复制给a,并且返回a
        /*strcpy是用于复制,配合上方malloc使用,尽量不要用于字符串
        转置(dst<-src),常由于内存地址可能连续导致不必要报错,*/
        free(dst);//务必记住free释放内存
        
        //like_1数组
            // int idx = 0;
            // while(src[idx]!= '\0'){
            //     dstlike[idx] = src[idx];
            //     idx++;}
            // dst[idx] = '\0';
            // return dstlike;
        //like_2指针
            char *ret = dstlike;/*由于++操作使dstlike跑偏,故需ret
            代替(像是复制指针),涉及移动指针时很可能用到!!!!!!*/
            while(*dstlike++ = *src++);/*先*dstlike=*src,然后++,
            赋值表达式的值就是*src的值,等效于*src != '\0'*/
            *dstlike = '\0';
            return ret;//这里提示不提倡多出口,此处无奈
    } //需要注意传入strcpy的两个参数不能有重叠地址(*restrict)

    void strcat_test(char *restrict s1,char *s3,char *restrict s2){
        s1 = (char *)malloc(strlen(s1) + strlen(s2) + 2);//s1原字符串失效
        //s1 = "Hello";这样又会把s1限制会原大小,故需第三方*s
        strcpy(s1, s3);//恢复s1字符串
        printf("s1+s2=%s\n",strcat(s1, s2));//把s2接到s1后面,并返回s1(够大)
        free(s1);
    }
    void strchr_test(char *s,char c,int n){
        //正序找
            printf("地址:%d  ", strchr(s, c));
            printf("字符:%c  ", *strchr(s, c));
        //倒序找
            printf("地址:%d  ", strrchr(s, c));
            printf("字符:%c  ", *strrchr(s,c));
            printf("其后字符串:%s\n",strrchr(s, c));
        //找第n个char c
            char *p = s;//涉及移动指针前复制指针
            p = strchr(p, c);//先定位第一个
            int i = 1;
            while(i<n){
                p = strchr(p + 1, c);
                i++;}
            printf("第%d个%c地址:%d , 其后字符:%s\n",n,c, p,p);
        //输出char c前的字符串
            // char *s1 = strchr(s, c);
            // *s1 = '\0';
            // printf("%c之前的字符串:%s\n", c, s);
            // *s1 = c; 以上想得通但行不通(无法直接修改s)

            char *s1 = (char *)malloc(strlen(s) + 1);
            strcpy(s1, s);
            char *s2 = strchr(s1, c);
            *s2 = '\0';
            printf("%c之前的字符串:%s\n", c, s1);
            free(s1);//在申请来的内存中对复制来的s1动刀
    }

int main(int argc,char const *argv[]){
    int a = 0;
    //putchar() & getchar() & gets()
        // a = getchar();//记好接收方式
        // putchar(a);
        // /*函数原型int getchar((int) char) 只单单接收一个字符
        //                 int putchar(void)*/
        // char *b;//这样定义可以当做字符串数组用
        // gets(b);//字符串中有空格时,scanf就鸡肋了,gets专业读取字符串
        // printf("%s\n",b);
    
    char *c = "Hello"; char *d = "Hello";
    char *e = "World";
    //test here!
        //strlen_test & strlen_like开始
            printf("strlen_like=%d\n", strlen_test_like(c,c));

        //
        //strcmp  test,返回值:0 c=d, 正c>d, 负c<d
            printf("strcmp(c,d)=%d  ", strcmp(c, d));
            printf("strcmp_like(c, d)=%d  ", strcmp_like(c, d));
            printf("strcmp_like(c, e)=%d\n", strcmp_like(c, e));

        //
        //strcpy  test & like开始操作
            char *f = (char *)malloc(strlen(e) + 1);
            printf("复制前f=%s  ", f);
            printf("复制后f=%s\n", strcpy_test_like(e,f));

        //
        //strcat开始
            strcat_test(c, d, e);
            
        //
        //strchr(const char *,int)返回值类型为int的指针,没找到(NULL)
            strchr_test(c,'l',2);
            printf("\'el\'后的字符串%s\n", strstr(d, "el"));//找字符串

    return 0;
}
