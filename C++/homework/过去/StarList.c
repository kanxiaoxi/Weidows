//           Copyleft@Weidows   2020-5-21

#include <stdio.h>
#include<math.h>
#define star__max_num  7    //����е�������
#define line_differ (star__max_num + 1) / 2

int main()
{
    for (int line = 1; line <=star__max_num;line++){    //ѭ����

        for (int i = 0, space = abs(line_differ - line); i < space; i++){
            printf(" ");
        }   //ѭ���ո�

        for (int i = 0, star = 2 * (line_differ - abs(line_differ - line)) - 1; i < star; i++){
            printf("*");
        }   //ѭ������

        printf("\n");   //����
    }
    return 0;
}