/*
 * @Author: Weidows
 * @Date: 2020-05-15 19:43:32
 * @LastEditors: Weidows
 * @LastEditTime: 2020-06-04 17:26:33
 * @FilePath: \demo\C_\homework\��ȥ\ָ����������·�.c
 */
//��
#include <stdio.h>
//���� && struct && typedef

int main()
{
    char *month[12] = {
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
    }; //����ָ���������·�(ÿ��Ԫ����һ��ָ��,ָ���Ӧ�Ǹ��ַ�������)

    int month_num = 0;
    while (month_num < 1 || month_num > 12)
    { //����ѭ��
        printf("Input month number:");
        scanf("%d", &month_num);
    }

    printf("%dth month is %s", month_num, month[month_num - 1]);
    //printf�в��ü�*,���Զ���ַ
    return 0;
}
