/*
 * @Author: Weidows
 * @Date: 2020-05-29 00:26:45
 * @LastEditors: Weidows
 * @LastEditTime: 2020-05-29 00:28:31
 * @FilePath: \demo\C\2_2020-4\4.ʵ����test�����иı�str��ָ��ָ���ַ.c
 */
#include <stdio.h>
char *test(char *string)
{ //����1.����ֵ����
    string = "hello world";
    /*�״�,���str����hello world,����null,ԭ��:test���Ǹı�ָ��
��Ŀ��null,������ָ��ָ����һ��Ŀ��hello world,��ָ��ַ�ı�
��testû�з��ؽ��,����return string;��ok��*/
    return string;
}
void test2(char **string)
{ //����2.�ö�άָ��,���˷����������ں����ж�άָ�������޸�
// �޸�һάָ������, ֻ����for��������*string = "hello world"
}
int main()
{
    char *str = NULL;
    char *str2 = NULL;
    str = test(str); //����ֵ���ú����������ĳ��������ֵ,�踳ֵ
    test2(&str2);
    printf("str=%s\n", str);
    printf("str=%s\n", str2);
    return 0;
}
