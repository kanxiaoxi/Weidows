/*
 * @Author: Weidows
 * @Date: 2020-06-14 08:58:12
 * @LastEditors: Weidows
 * @LastEditTime: 2020-06-14 08:58:33
 * @FilePath: \demo\C_\homework\��ȥ\���ݵ��.c
 */ 
//��
    #include <stdio.h>

int main()
{
    double Kwh, price;      //һ��ע��double��scanf��%lf,float��%f,д������
    printf("Input Kwh:");
    scanf("%lf", &Kwh);
    if(Kwh<=150 && Kwh>0){
        price = Kwh * 0.52;
    }else if(Kwh>150 && Kwh<=280){
        price = 150 * 0.52 + (Kwh - 150) * 0.57;
    }else if(Kwh>280){
        price = 150 * 0.52 + 130 * 0.57 + (Kwh - 280) * 0.82;
    }
    printf("%.2f", price);
    return 0;
}
