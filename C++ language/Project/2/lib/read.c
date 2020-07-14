//��
    #include<stdio.h>
    #include<math.h>
    #include"student.h"

//����
    void read(FILE *fp, int index);

int main()
{
    FILE *fp = fopen("student.data", "r");
    if(fp){
        fseek(fp, 0L, SEEK_END);        //���ļ�β��ʼ����0
        long size = ftell(fp);          //��ͷ�ƶ���fseekλ��,Ҳ���������ļ���С
        int number = size / sizeof(Student);
        int index = 0;

        printf("��%d������,���ڼ���:", number);
        scanf("%d", &index);  
        read(fp, index - 1);
        fclose(fp);
    }
    return 0;
}

void read(FILE *fp,int index)
{
    fseek(fp, index * sizeof(Student), SEEK_SET);   //�Ҷ�Ӧ�Ų���λ������
    Student stu;                                         //���ڶ������ݴ�ŵĽṹ
    if(fread(&stu,sizeof(Student),1,fp)==1){  //��fp����һ��sizeof��С�����ݽ���stu
        printf("��%d��ѧ��:", index + 1);
        printf("\t����:%s\n", stu.name);
        printf("\t�Ա�:");
        switch(stu.gender){
            case 0: printf("��\n");break;
            case 1: printf("Ů\n");break;
            case 2: printf("����\n");break;
        }
        printf("\t����:%d\n", stu.age);
    }
}
