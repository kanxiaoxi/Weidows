/*
 * @Author: Weidows
 * @Date: 2020-05-29 00:12:57
 * @LastEditors: Weidows
 * @LastEditTime: 2020-05-29 00:12:58
 * @FilePath: \demo\Notes\C\5.ָ���������ͨ���Ծ���(��̬�ڴ�����������ȷ������).c
 */ 
#include<stdio.h>
#include<stdlib.h>
int main(){
    int num, i;
    int *a;//ָ�������ͬ����԰�*a����Ϊ����
    printf("��������:");
    scanf("%d", &num);
    a = (int *)malloc(num * sizeof(int));/*����ָ���ڴ�ռ�ô�С
    malloc���صĽ����void*,��Ҫת������Ҫ������*/
    for (i = 0; i <num;i++){
        scanf("%d", &a[i]);
    }//�����鿴��ָ�벢��������Ԫ��
    for (i = num - 1; i >= 0;i--){//����ʱi<num,����ʱi>= 0
        printf("a[%d]=%d\n", i, a[i]);//����������Ԫ�����
    }
    free(a);//�ͷ�aռ�õ��ڴ�
    return 0;
}
