/*
 * @Author: Weidows
 * @Date: 2020-05-29 00:30:54
 * @LastEditors: Weidows
 * @LastEditTime: 2020-05-29 00:31:17
 * @FilePath: \demo\C\2_2020-4\6.ö��(��)&�ṹ(ү).c
 */ 
//ö��(��)&�ṹ(ү)  ��  <<ö�᳤̽>>
//��
    #include<stdio.h>
    #include<stdbool.h>
//ö�ٺͽṹ
    enum color{RED,YELLOW,GREEN,NumColors};
    //��0->n��int��,ö������int��,��֮����(��Ҫ������),ö���൱����϶���int

    struct point{
        /*�����˽ṹ��ͬʱ����p1,p2����point���͵Ľṹ��
        p1,p2������x��y��ֵ*/
        int x;
        char y;
    } p1, p2; //���ⶨ���ʽstruct point p3;��������ⶨ�����ȥ���ṹ��

    struct date{
        int month;
        int day;
        int year;
    };

    bool isLeap(struct date d);//bool�����ж��Ƿ�������ĺ���
    int NumberOfDays(struct date d);

int main(int argc,const char *argv[]){
    //���ֽṹ�Ķ���ͳ�ʼ������
        struct date today1={07,31,2014};
        struct date thismonth={.month=7,.year=2014,};
        printf("today %d-%d-%d    ", today1.year, today1.month, today1.day);
        printf("thismonth %d-%d-%d    ", thismonth.year, thismonth.month, thismonth.day); //Ϊ�����Ϊ0
        
        today1 = thismonth;//ͬ��date���ͽṹ����Ժ���ֵ
        printf("today %d-%d-%d\n", today1.year, today1.month, today1.day);

        struct point p3;//����point���͵Ľṹ
        p3 = (struct point){1, 'y'};//����������,�ṹ���������{}��ʼ��
        printf("%d-%c\n", p3.x, p3.y);
        struct date *p = &today1;//�ṹ��p��Ԫ����ָ��today��ӦԪ�ص�ָ��
    //���������ݽṹ���ʵ��
        struct date today, tomorrow;

        printf("Enter today's date(yyyy mm dd:");
        scanf("%d %d %d", &today.year, &today.month, &today.day);

        if(today.day!=NumberOfDays(today)){//today����ĩ
            tomorrow.day = today.day + 1;
            tomorrow.month = today.month;
            tomorrow.year = today.year;
        }else if(today.month==12){//today����ĩ����12��
            tomorrow.day = 1;
            tomorrow.month = 1;
            tomorrow.year = today.year + 1;
        }else{//today����ĩ
            tomorrow.day = 1;
            tomorrow.month = today.month + 1;
            tomorrow.year = today.year;
        }
        printf("tomorrow's date is %d-%d-%d\n",
               tomorrow.year, tomorrow.month, tomorrow.day);
        
    return 0;
}

int NumberOfDays(struct date d){
    int days;

    const int daysPerMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if(d.month==2 && isLeap(d))
        days = 29; //ע��if�ļ���д��,ֻ��дһ�����,����{}
    else
        days = daysPerMonth[d.month-1];

    return days;
}//�ж�ÿ���µ���ĩ������

bool isLeap(struct date d){
    bool leap = false;//ע��bool��ֵ��ʽ,����Ҫ��<stdbool.h>��ͷ�ļ�

    if((d.year %4 ==0  &&  d.year %100 !=0)||(d.year %400 == 0))
        leap = true;

    return leap;
}//bool���ͺ���,�ж��Ƿ�Ϊ����
