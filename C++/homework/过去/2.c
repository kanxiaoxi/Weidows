//
//��
    #include<stdio.h>
//����

//main
int main()
{
    char ch1, ch2, ch;
    unsigned char c;
    int a;

    ch1 = 80;
    ch2 = 60;
    ch = ch1 + ch2;
    c = ch1 + ch2;
    a = ch1 + ch2;

    printf("ch1+ch2=%d\n", ch1 + ch2);      //ch1+ch2=140
    printf("ch=%d\n", ch);                //ch=-116  ԭ��:char(-128~127)Խ��
    printf("c=%d\n", c);                    //c=140    �޷���charδԽ��
    printf("a=%d\n", a);                    //a=140   int�ͷ�Χ�����,����Խ��

    //�޸�:�ڶ��������Ϊ printf("ch=%d\n", 256+ch);
    return 0;
}
