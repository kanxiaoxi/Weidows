/*
 * @Author: Weidows
 * @Date: 2020-05-29 00:33:41
 * @LastEditors: Weidows
 * @LastEditTime: 2020-05-29 00:33:54
 * @FilePath: \demo\C\8.typedef��д && ����union(д�ļ�ʱ����).c
 */ 
//typedef��д && ����union(д�ļ�ʱ����)
#include <stdio.h>

typedef long int64_t;
typedef struct ADate{
    int year;
    int month;
    int day;
} Date;//Date���;���Adate���ͽṹ����д

typedef union {
    int i;
    char ch[sizeof(int)];
} CHI;//��һ��������������ΪCHI


int main(){
    int64_t i1 = 1000000000;
    Date d = {2020, 4, 5};

    CHI chi;//��������chi
    chi.i = 1234;
    int i;
    for (i = 0; i < sizeof(int);i++){
        printf("%02hhX", chi.ch[i]);
    }//����Ԫ�ع����ڴ�,���������ch�ķ�ʽ��ȡi���ڴ��еĴ洢��ʽ

    return 0;
}
