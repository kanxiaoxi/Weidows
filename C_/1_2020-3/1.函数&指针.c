/*
 * @Author: Weidows
 * @Date: 2020-05-29 00:07:40
 * @LastEditors: Weidows
 * @LastEditTime: 2020-05-29 00:08:19
 * @FilePath: \demo\Notes\C\1\1.����&ָ��.c
 * 
 * C�����к����ж������һ����ָ�����,����������ֵϰ��
 * ����0&1��������ɹ�,����1,���򷵻�0(������if�����ж�)
 */
#include<stdio.h>
int divide(int a, int b, int *result);
int main(void){
    int a = 4;
    int b = 2;
    int result; 
    
    if(divide(a,b,&result)){    //���ﺯ���ķ���ֵ����������Ϊif���ж�����
        printf("%d/%d=%d\n", a, b, result);
    }

    return 0;
}
int divide(int a,int b,int *result){
    int ret = 1;
    if(b==0){
        ret = 0;
    }
    else{
        *result = a / b;
    }
    return ret;
}//0��1�ֱ��Ӧ���������,��Ϊ��������ֵ����
