/*
 * @Author: Weidows
 * @Date: 2020-05-29 00:34:52
 * @LastEditors: Weidows
 * @LastEditTime: 2020-05-29 00:35:10
 * @FilePath: \demo\C\10.printf��scanf��ʽ���Լ��ļ���д.c
 */ 
// printf��scanf��ʽ���Լ��ļ���д
#include<stdio.h>

int main(){
// printf & scanf ��ʽ��
    /*printf  %[flags][width][.prec][hlL]type
       scanf  %[flags]type    */

    //[flags]:"-"�����  "+"��ǰ���������   "space"��������   "0"��0����
        printf("%+09d\n", -123);
        printf("%-+09d\n", 123);

    //[width][.prec]: "num"���ռ��λ    ".num"С�����ռ��λ  "*"��".*"������
        printf("%+9.2f\n", 123.0);//����Ҳռλ
        int i = 5;         //i��������*��λ��
        int i1 = 5;       //i1��������.*��λ��
        printf("%*.*f\n", i, i1,123.4);//".*"�ɳ�Խ"*"��Լ���ַ���,�˴����9λ>i=5

    //[hlL]: "h"short   "l"long  "ll"long long  "L"long double
    
    //type %i��ʮ����,�ɸ����������ת��,��
        printf("%i-%i-%i\n", 1234, 056, 0x78);
    
    //scanf��ʽ����   "*"���Դ���     "[^,]"��","֮ǰ������
        scanf("%*[^,],%i", &i);       //��������GPRMC,4319
        printf("%i\n", i);                       //���          i=4319 

    //printf��scanf���з���ֵ,�ֱ���������ַ���,�������Ŀ��
        int a = printf("%d\n", 123);   //�˴�aӦΪ4,123���и�\nռһλ
        printf("%d\n", a);

        a = scanf("%d", &a);                //�˴�aӦΪ1
        printf("%d\n", a);

/*�ļ����������<��>���ض��� ,���ļ��ı�׼��ʽ����,��ʵFILE����typedef�����
�ṹ�ؼ���,fopen�����Ǹ��ṹ���͵�����
    FILE *fp = fopen("filename", "mode");      //�����Ƕ����˸�ָ�����͵Ľṹ
    if(fp){
        // fscanf(fp, ...);
        // fprintf(fp, ...);
        fclose(fp); //�򿪶�Ӧ�ر�
    }else{
        // ...
    } */

    /*mode����
        r       ��ֻ��
        r+      �򿪶�д,���ļ�ͷ��ʼ
        w       ��ֻ��,�粻�������½�,����������
        w+     �򿪶�д,�粻�������½�,���������� 
        a         ��׷��,�粻�������½�,���������ļ�β��ʼ
        ..x(��׺)ֻ�½�,��������ܴ�*/ 

    FILE *fp = fopen("123.c", "r");
    if(fp){
        int num = 0;
        fscanf(fp, "%d", &num);
        printf("%d\n", num);
        fclose(fp);
    }else{
        printf("�޷����ļ�\n");
    }

return 0;
}
