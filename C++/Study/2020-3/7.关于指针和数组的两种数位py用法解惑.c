/*
 * @Author: Weidows
 * @Date: 2020-05-29 00:13:59
 * @LastEditors: Weidows
 * @LastEditTime: 2020-05-29 00:13:59
 * @FilePath: \demo\Notes\C\7.����ָ��������������λpy�÷����.c
 */ 
#include<stdio.h>
int main(){
    int a[5] = {1,2,3,4,5,};
    int *p = a;//p->a[0]
    int *q = &a[5];/*��������÷�,��ʹ����ʱû�����λҲ����
    ָ��ָ�����λ��*/
    printf("%d\n", (int)p);
    printf("%d\n", (int)q);
    printf("%d", q - p);/*��tmһ�������÷�,a[0]��a[5]������20
    λ,ָ����������5(��Ϊ��ȥһ��sizeof(int)4λ)*/
    printf("%d",a);//ֱ�������������a[0]�ĵ�ַ
    return 0;
}
