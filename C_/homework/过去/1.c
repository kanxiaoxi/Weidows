//
//��
    #include<stdio.h>
//����

//main
int main()
{
    printf("�����뵥���ַ�:");
    char input = getchar();

    int line = 0;
    printf("����������������:");
    scanf("%d:", &line);

    int x;
    int y;
    for (y=0; y < line ; y++){
        for (x=0; x <= y ; x++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
