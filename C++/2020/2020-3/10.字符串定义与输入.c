/*
 * @Author: Weidows
 * @Date: 2020-05-29 00:15:18
 * @LastEditors: Weidows
 * @LastEditTime: 2020-05-29 00:15:18
 * @FilePath: \demo\Notes\C\10.�ַ�������������.c
 */ 
#include<stdio.h>
int main(){
    char string[8];
    scanf("%7s", string);/*scanf�����ո�/Tab/�س�ʱ����
    %7s��ʾ����ȡ7λ�ַ�,7+'\0'=8(�����С),����7��û��,
    �������ַ�����ȡ,�����һ��Ҳ��scanf,�򴫸���*/
    printf("%s\n", string);

    //#��������#
    char *string2;
    /*1.����ָ��û��ʼ��=0;
        2.������ʽ��ָ��û��ָ���ڴ��ַ,���ܴ���������*/
    scanf("%s", string2);

    char buffer[100] = "";//���ַ���,[]�ڲ���Ϊ��,����������ַ���
    //��������buffer[0] == '\0';
    
    return 0;
}
