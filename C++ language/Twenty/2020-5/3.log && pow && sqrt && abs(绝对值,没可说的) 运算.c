/*
 * @Author: Weidows
 * @Date: 2020-05-29 00:38:50
 * @LastEditors: Weidows
 * @LastEditTime: 2020-05-29 00:39:15
 * @FilePath: \demo\C\3.log && pow && sqrt && abs(����ֵ,û��˵��) ����.c
 */
// log && pow && sqrt && abs(����ֵ,û��˵��) ����
//��
#include <math.h>
#include <stdio.h>
//main
int main()
{
    //���׹�ʽ log a B = log c B / log c A
    printf("һ%f\n", log10(8) / log10(2)); //�൱��log2 (8)
    printf("%f\n", log(8) / log(2));       //��д����Ĭ����eΪ��

    //�����ͳ˷�
    printf("��%f\n", pow(10, 8));
    printf("%d\n", pow(10, 8)); //pow()����ֵ�Ǹ�����,�����%d���,�������
    printf("%d\n", (int)pow(10, 8));
    //����:�˷�0.5ʱ���ǿ���sqrt
    printf("��%f\n", pow(100, 0.5));
    printf("%f\n", sqrt(100));
    return 0;
}
