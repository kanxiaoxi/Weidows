/*
 * @Author: Weidows
 * @Date: 2020-05-29 00:26:09
 * @LastEditors: Weidows
 * @LastEditTime: 2020-06-02 15:37:04
 * @FilePath: \demo\C_\2_2020-4\3.����x,����e^x=1+x+x^2\2!+x^3\3!+....x^n\n!.c
 */ 
#include<math.h>
#include<stdio.h>
int main(){
    int x, n = 1;
    int n1 = 1;//n1��n!
    double ex = 1.0;//ex��e^x��˫��������
    printf("����xֵ:");
    scanf("%d", &x);//����x
    while(pow( x , n )/ n1 > 0.000001){
        for (int i = 1; i <= n; i++){n1 *= i;}
        ex += pow(x, n) / n1;
        n++;
    }
    printf("%.6f", ex);
    return 0;
}
