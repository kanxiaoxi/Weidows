/*
 * @Author: Weidows
 * @Date: 2020-05-29 00:14:31
 * @LastEditors: Weidows
 * @LastEditTime: 2020-05-29 00:14:31
 * @FilePath: \demo\Notes\C\8.��ʶ�ַ���(����),ָ����Ԫ��λ��������.c
 */
#include <stdio.h>
#include <string.h> //�ַ��������ͷ�ļ�
int main()
{
    char a[5] = {'H', 'e', 'l', 'l', 'o', '\0'}; //ĩβ��\0���Բ�����һλ
    //��׼��ʽ,�����Ų�����,������ASCII��ֵint����
    printf("%s\n", a);    /*ֱ���������ĩβ\0��char��������Ҳ��
    ����һ��hello,���ǽ�β������,printf�ڵ�\nҲ��Ч*/
    printf("%d\n", a[0]); /*���"H"��ASCII��ֵ72,��Ԫ��������
    �ڲ����ַ�%c��ʽ����,�޷���%s�ַ�����ʽ���(����)*/

    char *str = "Hello";     //��char����ָ����ĳ��ַ��д��Hello(��ַ����)
    char word[] = "Hello";   //��һ�ֶ����ַ�������ķ���(ͬ��)
    char line[5] = "Hello";  //����������,����char����,����д��
    printf("%d\n", str[0]);  //74
    printf("%d\n", word[0]); //74
    printf("%d\n", sizeof(word) / sizeof(word[0]));
    printf("%d\n", sizeof(line) / sizeof(line[0]));
    //�ɴ˿���'\0'ȷʵ��Ҫռ��һλԪ��,Ĭ��������Զ�д��(����ûλ)
    return 0;
}
