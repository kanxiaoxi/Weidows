/*
 * @Author: Weidows
 * @Date: 2020-05-29 00:32:37
 * @LastEditors: Weidows
 * @LastEditTime: 2020-05-29 00:33:14
 * @FilePath: \demo\C\2_2020-4\7.����ָ��ṹ�뺯������Ϥ�����.c
 */
//���� ->�ṹ�뺯������Ϥ�����
#include <stdio.h>

struct point{
    int x;
    int y;//ע��ṹ��Ԫ�÷ֺŸ������Ƕ���
} getStruct_1(), *getStruct_2(), a[10]; //����&����Ҳ������ĳ�ṹ����

//һ
    struct point getStruct_1(void){
        struct point p;
        scanf("%d %d", &p.x, &p.y);
        return p;
    }//getStruct���������point�ṹ����

//��
    struct point *getStruct_2(struct point *p){//����ָ�����͵ĺ���û��Ҫ
        scanf("%d %d", &p->x, &p->y);//p->x��ͬ��(*p).x,ָ��ר��
        return p;//û��Ҫ�ķ���,ֻ��Ϊ��չʾЧ��
    }

void output(struct point p){//�ṹ���뺯���Ǵ�ֵ(������Ҫ�ڹ��ṹ,Ч�ʵ���)
    printf("x=%d y=%d\n", p.x, p.y);
}

int main(int argc,char const *argv[]){
    //�������ؽṹ:һ    ����ṹreturn
        struct point  y_1 = {0, 0};
        y_1 = getStruct_1();
        //�޷�ͨ��return���ؽṹ��ֵ�ı仯,���ǿ��Դ��������ṹ����һ���ṹ
        output(y_1);
    
    //�������ؽṹ:��   ָ��(���Ӹ�Ч����)
        struct point y_2 = {0, 0};
        getStruct_2(&y_2);
        output(y_2);
        output(*getStruct_2(&y_2));//��ִ��getStruct_2,��ִ��output
    
    //�ṹ��������&&�ṹ���ͽṹ(Ƕ�׽ṹ)
        struct point a[3]={{1,2},{3,4},{5,6},};//����Ԫ���ǽṹ

        struct DateAndTime{
            struct Date{
                int year;
                int month;
                int day;
            };
            struct Time{
                int hour;
                int minute;
                int second;
            };
        };//����DAT[]���������ֶ���,��ò�Ҫ��ǰ����(���ܱ���)

        struct DateAndTime DAT[2] = {
            {{2020,4,5}, {10,38,01}},//DAT[0]
            {{2020,4,5}, {10,38,01}},//DAT[1]
        };

    return 0;
}
