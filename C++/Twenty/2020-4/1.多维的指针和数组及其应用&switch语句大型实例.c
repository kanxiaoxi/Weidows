/*
 * @Author: Weidows
 * @Date: 2020-05-29 00:18:56
 * @LastEditors: Weidows
 * @LastEditTime: 2020-05-29 00:18:56
 * @FilePath: \demo\C\2_2020-4\1.��ά��ָ������鼰��Ӧ��&switch������ʵ��.c
 */ 
#include<stdio.h>
#include<stdlib.h>//����malloc�����Ŀ�
#include<string.h>//û�õ�,���ڴ�������
int Test_point(int i){//ָ��,�������ֿ��Ժ��ⲿ�ı�������ͬ
    int *p = &i;
    int **a = &p; //a��ָ��,ָ����һ��ָ��
    printf("%p\n", &i);
    printf("%p\n", p); //һ����ͬ
    printf("%p\n", a); //**a�ĵ�ַ��ͬ

    char b[10][10] = {
        //��ά�ַ�������
        "Hello", //�൱��->char [10]
        "World", //��ʮ��,������'\0'��
        "2",
        "3",
        "4   ", //�����ڿո�Ҳ���ַ�
        "....",
        "999999999",   //b[9],�������Ҳ��9��,��Ҫǿ��ռ�õ�ʮλ
    };                 //���ֶ�ά��������д�ÿ�
    printf("%s\n", b); //�����ά��b->���b[0]
}
int Month(int month){//���Ӣ���·ݵĺ���
    int ret = 0;//���庯������ֵ(�����ж��Ƿ���������)
    switch (month){
    case 1:
        printf("January\n");//������ʽ
        break;
    case 2:
        printf("February\n");
        break;
    case 3:printf("March\n");break;//������ʽ,����������ÿ�
    case 4:printf("April\n");break;
    case 5:printf("May\n");break;
    case 6:printf("June\n");break;
    case 7:printf("July\n");break;
    case 8:printf("August\n");break;
    case 9:printf("September\n");break;
    case 10:printf("October\n");break;
    case 11:printf("November\n");break;
    case 12:printf("December\n");break;
    default://Ĭ�����(û��caseƥ��ʱ)
        ret = 1;    //ret=1ʱ˵��û��������ȷ��
        printf("???\n");
        break;
    }
    return ret;//����retֵ�������������ж�
}
int Month2(int argc,char *argv[]){
    int ret = 0;
    while (argc > 12 || argc < 1){
        printf("�������·�\n:");
        scanf("%2d", &argc);
    }/*while��do-while����Щ
    ���ǵ�Ŀ& | ~ �߼�&& || !  */
    printf("%s\n", argv[argc - 1]);
    ret++;
    return ret;
}
int main(int argc,char const *argv[]){//mainʵ�ʰ����Ĳ���
    int i = 0;
    int month = 0;
    Test_point(i);
    char *c[12] = {
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December",
    }; /*ָ������,ÿ��Ԫ����һ��ָ��char *,����
    ͬʱ�ܳ�ʼ��(ʵ����ֻ��c[0]=0,����û��ֵ��Ĭ��Ϊ0,����ͨ�÷���)*/

    //ָ�����������Ӧ��,month��ʼ��
        label_1:{//��ת���,ʹ����ɶ��Խ���,��������ʹ��
            printf("�������·�\n");
            scanf("%2d", &month);//�û������·�
            if(Month(month)){   //����ͬʱ���ú���Ϊif���ж�����
                goto label_1;
            }}//Month����
    //month2��ʼ
        if (Month2(month,c)){printf("Function runs successfully\n");}
    return 0;
}//��ʽ����!!!
