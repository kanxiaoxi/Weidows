/*
 * @Author: Weidows
 * @Date: 2020-05-29 00:13:27
 * @LastEditors: Weidows
 * @LastEditTime: 2020-05-29 00:13:39
 * @FilePath: \demo\Notes\C\6.��ַ�������ж�ʱ��΢СӦ��&malloc���������ڴ��ַ.c
 */ 
#include<stdio.h>
#include<stdlib.h>
int main(){
    void *p = 0, *q = 0; //��������malloc��ַ,ϰ���Ե��ڶ���ָ��ʱ��ʼΪ0
    int cnt = 0;//��������
    while(  (p=malloc(100*1024*1024)) ){//�����ڴ��ַ,�ڴ治��ʱ����0/NULL
        cnt++; //malloc���ص��ǵ�ַ����ֵ,ֻ����ָ��(*p)����
    }
    printf("������%d00MB�Ŀռ�", cnt);

    q=malloc(100 * 1024 * 1024);//����100MB���ڴ��ַ��q
    free(q);/*��malloc���,����֮���ͷ��ڴ�,�����ָ��q���κ��޸�
    ����ָ��q�ĵ�ַ����malloc��������,��ô�޷�free�ڴ�*/
    free(NULL); //��ͬ��free(0);����,���ᱨ��.�չ�ָ���ʼ��Ϊ0��δ�õ����
    return 0;
}
