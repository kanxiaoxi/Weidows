/*
 * @Author: Weidows
 * @Date: 2020-06-02 11:02:20
 * @LastEditors: Weidows
 * @LastEditTime: 2020-06-04 18:58:37
 * @FilePath: \demo\C_\Test.c
 * 
 * n����Χ��һȦ,��1~3����,����3���˳�,�����ʣ��ԭ���ĵڼ���
 */
//��
#include <stdio.h>
//���� && struct && typedef

int main()
{
    const int n;
    printf("Input n :");
    scanf("%d", &n);
    int people[n];
    for (int i = 0; i < n;i++){
        people[i] = 1;
    }
    while(1){
        static int num = 1, people_quit = 0;
        for (int i = 0; i < n; i++){
            if(people[i]==1){
                if(people_quit=n-1){
                    printf("��%d��",i+1);
                    return 0;
                }
                if(num%3==0){
                    people[i] = 0;
                    people_quit++;
                }       //����3���˳�
                num++;
            }
        }           //һ��
    }       //����
}
