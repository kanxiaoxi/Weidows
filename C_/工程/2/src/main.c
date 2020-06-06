//��
    #include<stdio.h>
    #include "student.h"
//��������
    void getList(Student aStu[], int number);
    int       save(Student aStu[], int number);

int main()
{
    int number = 0;
    printf("����ѧ������:");
    scanf("%d", &number);
    Student aStu[number];   //����student���͵Ľṹ����,����ΪaStu,��С��number
    //��������
        getList(aStu, number);      //��ȡ����
        if(save(aStu,number)){      //д������
            printf("����ɹ�\n");
        }else{
            printf("����ʧ��\n");
        }

    return 0;
}


void getList(Student aStu[], int number)
{
    char format[STR_LEN];   //���ڸ�ʽ���Ƶ��ַ����ַ�����(�ַ���)
    sprintf(format, "%%%ds", STR_LEN - 1);  //��format(�ַ���)�������ʽ���Ʒ�
    //�˴�formatӦ��=="%19s",���������ʽ����

    int i;
    for (i = 0; i < number;i++){
        printf("��%d��ѧ��:\n", i+1);
        printf("\t����:");
        scanf(format, &aStu[i].name);
        printf("\t�Ա�(0-��,1-Ů,2-����):");
        scanf("%d", &aStu[i].gender);
        printf("\t����:");
        scanf("%d", &aStu[i].age);
    }
}

int save(Student aStu[], int number)
{
    int ret = -1;
    FILE *fp = fopen("student.data", "w+");
    if(fp){      //������ļ��ɹ�,��д��ṹ����aStu[]��fp�ļ�,ÿ���ṹ��sizeof��С,��number�����ִ�С�Ľṹ,
        ret = fwrite(aStu, sizeof(Student), number, fp);
                //fwrite����ֵ�ǳɹ�д�����
        fclose(fp);
    }
    return ret == number;   //�ж�д�����Ƿ�==number
}
