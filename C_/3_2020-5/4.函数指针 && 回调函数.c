/*
 * @Author: Weidows
 * @Date: 2020-05-29 00:40:17
 * @LastEditors: Weidows
 * @LastEditTime: 2020-05-29 00:40:17
 * @FilePath: \demo\C\5.����ָ�� && �ص�����.c
 */ 
//����ָ�� && �ص�����

#include <stdio.h>
#include<stdlib.h>

int max(int x,int y){
    return x > y ? x : y;
}

int getNextRandomValue(void){
    return rand();
}

void populate_array(int array[],size_t arraySize,int (*p)(void)){
    for (size_t i = 0; i < arraySize;i++){
        array[i] = p();
    }
}


int main()
{
    //����ָ��
        // int (*p)(int, int) = &max;  //����һ������ָ��
        // int a, b, c, d;
        // printf("����������:");
        // scanf("%d%d%d", &a, &b, &c);
        // d = p(p(a, b), c);
        // printf("�������:%d", d);
    //�ص�����
        int myArray[10];
        populate_array(myArray, 10, getNextRandomValue);//get..���ܴ�����,���ǵ���
        for (int i = 0; i < 10; i++) {
            printf("%d\t", myArray[i]);
        }
    return 0;
}
