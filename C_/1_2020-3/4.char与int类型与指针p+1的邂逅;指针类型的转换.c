/*
 * @Author: Weidows
 * @Date: 2020-05-29 00:12:20
 * @LastEditors: Weidows
 * @LastEditTime: 2020-05-29 00:12:36
 * @FilePath: \demo\Notes\C\1\4.char��int������ָ��p+1������;ָ�����͵�ת��.c
 */ 
#include<stdio.h>
int main(void){
    char ac[]={0,1,2,3,4,5,6,7,8,9,};//char������С��Χ�����򵥸��ַ�
    int ab[]={1,2,3,4,};
    char *p = ac;
    int *q = ab;
    printf("p��ַ=%p\n", p);
    printf("p+1��ַ=%p\n", p+1);//*p+1=ac[1]
    printf("q��ַ=%p\n", q);
    printf("q+1��ַ=%p\n", q + 1);//*(q+1)=ab[1],������a[0]�еĵڶ�λ
    //ָ��+1������ĵ�ַ�Ǽ����Ǹ����͵�sizeof��char��+1��int��+4
    
    int *p1 = &ac;
    void *q1 = (void*)p1;/*void��δ�����͵�ָ��,��ͬ���͵�ָ�벻�ܸ�ֵ��
    ��*q1 = *p1;���ǿ���ǿ������ת��(����)*/
    return 0;
}
