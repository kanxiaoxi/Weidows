/*
 * @Author: Weidows
 * @Date: 2020-05-29 00:38:16
 * @LastEditors: Weidows
 * @LastEditTime: 2020-05-29 00:38:30
 * @FilePath: \demo\C\2.λ��.c
 */ 
//λ��
//��
    #include<stdio.h>
//����
    void Bin(unsigned int Num);
    typedef struct {    //3+1+1+27=32,���λ�νṹռ��һ��int��С(�����Ⱥ󲻶�������)
        unsigned int leading : 3;   //������ʽ��leadingռ�ö���λ
        unsigned int Flag1 : 1;
        unsigned int Flag2 : 1;
        int trailing : 27;
    } U0;
//main
int main()
{
    U0 uu = {2, 0, 1, 0};   //typedef�м��ϸ�ֵ������
    printf("sizeof(uu)=%lu\n", sizeof(uu));
    Bin(*(int *)&uu);   //ȡuu�ṹ��ַǿת��int*,�ٽ��з���

    return 0;
}

void Bin(unsigned int Num){
    unsigned int mask = 1u << 31;   //�޷���int��ֵ1,����31λ,Ҳ�������λΪ1,����Ϊ0
    for (; mask ; mask >>=1){   //����Ҫ��ʼ���������ɿ���,mask!=0Ϊ����
        printf("%d", Num & mask ? 1 : 0);
    }
}
