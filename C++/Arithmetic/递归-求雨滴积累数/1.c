/*
 * @Author: Weidows
 * @Date: 2020-06-19 20:52:43
 * @LastEditors: Weidows
 * @LastEditTime: 2020-06-19 20:53:18
 * @FilePath: \demo\C_\�㷨\�ݹ�-����λ�����\1.c
 * ����δ����
 */
//��
#include <stdio.h>
#define length 12
//���� && struct && typedef
    int deal(const int *s);
int main()
{
    int s[length]={0,1,0,2,1,0,1,3,2,1,2,1,};
    printf("%d", deal(s));  //���ò����
    return 0;
}

int deal(const int *s){     //���������
    static int height = 1, meter = 0;
    int log_array[length], log = 0;
    
    for (int i = 0; i < length;i++){    //��¼ͬ�߶ȵĺڿ�
        if(s[i]>=height){   //��ͬ�߶��кڿ���Ǽ��м�¼������log_array
            log_array[log] = i;
            log++;
        }
    }

    for(int i = 0; i < log; i++){       //��¼���ڿ������������
        // printf("%d\n", log_array[i]);    //����,����.
        if((log_array[i+1]-log_array[i])>1){    //���ٿճ�һ����
            meter += log_array[i + 1] - log_array[i] - 1;
            // printf("%d\n", meter);   //����
        }
    }

    if (log == 0) //������߶��޺ڿ�(��ͷ��)
        return meter;
    else{
        height++;
        meter = deal(s); //�ݹ�
    }
}