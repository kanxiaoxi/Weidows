/*
 * @Author: Weidows
 * @Date: 2020-05-29 00:09:40
 * @LastEditors: Weidows
 * @LastEditTime: 2020-05-29 00:10:52
 * @FilePath: \demo\Notes\C\1\2.ָ����const�Ĺ�ϵ.c
 */
#include <stdio.h>
int main()
{
    int a = 0;
    int *p1;
    p1 = &a;                             //����д��*p1=&a;
    *p1 += 1;                            //a+1����һ��д��(*p)++;
    *p1++;                               //*(p1ָ��ĵ�ַ+1),++��*�������ȼ���
    printf("a=%d\np1��ַ=0x%d", a, *p1); //printf���������ָ��*p1��p1���ǵ�ַ

    /* int i = 0; //�ж��ĸ���const�˵ı�־��const��*ǰ���Ǻ�
    const int *p2 = &i;
    *p2 += 1;
    printf("һ,i=%d", i);
    int const *p3 = &i;     //ǰ������ͬ,��ָ����ָ��ʵ�����ܸı�
    *p3 += 1;
    printf("��,i=%d", i);
    int *const p3 = &i;     //������ָ�뱾��(�����ַ)���ܸı�
    *p4 += 1;
    printf("��,i=%d", i); */
    //����,ԭ��:����*p2ʱͬ����i��Ϊconst,������˲����޸Ķ�����
    return 0;
}
