/*���д���� ��ShiYanLou�� ������룬��ԭ������ĸ�����һ����ĸ���ԭ������ĸ��
���� A ����ĵڶ�����ĸ�� B����� ��ShiYanLou�� Ӧ����� ��TijZboMpv����
���ұ�дһ�������ø���ֵ�ķ���ʹ c1��c2��c3��c4��c5��c6��c7��c8��c9 
�� 9 ������ֵ��Ϊ 'S'��'h'��'i��'��'Y'��'a'��'n'��'L'��'o'��'u'�������� 9 �������ֱ��Ϊ'T'�� 'i'��'j'��'Z'��'b'��'o'��'M'��'p'��'v'���ֱ��� putchar ������ printf ��������� 9 ���ַ���*/

// ��ShiYanLou�� �������
//��
    #include<stdio.h>
    #define Str_len 9 
//���� && struct && typedef

//main
int main()
{
    char encryption[Str_len+1] = "ShiYanLou";   //��ʼ��
    printf("putchar���:");
    for (int i = 0; i < Str_len;i++){           //����ת����putchar���
        encryption[i] = (char)((int)encryption[i] + 1);
        putchar(encryption[i]);
    }
    printf("\n");   //����
    printf("printf���:%s\n", encryption);  //printf���
    return 0;
}
