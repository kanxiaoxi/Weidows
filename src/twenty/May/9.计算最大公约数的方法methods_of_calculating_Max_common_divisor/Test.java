/*
 * @Author: Weidows
 * @Date: 2020-05-29 01:15:59
 * @LastEditors: Weidows
 * @LastEditTime: 2020-07-01 16:39:48
 * @FilePath: \demo\src\twenty\May\9.�������Լ���ķ���methods_of_calculating_Max_common_divisor\Test.java
 * �������Լ���ķ���methods_of_calculating_Max_common_divisor
 */ 
import java.util.Scanner;

public class Test {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        {// һ:շת�����(ŷ����·�,�����㷨)
            int a = in.nextInt();
            int b = in.nextInt();
            int temp = 0;
            if (a > b) { // ȷ��a��bС,��������һ�ַ���
                int c = a;
                a = b;
                b = c;
            }
            temp = a % b;
            while (temp != 0) {
                a = b;
                b = temp;
                temp = a % b;
            }
            System.out.println("���Լ����:" + b);
        }

        {// ��:��ٷ�(forѭ����С��������,��������)
            int a = in.nextInt();
            int b = in.nextInt();
            int result = 0; //javaǿ��ʼ��,��ǰ�����ʼ��
            int max = a > b ? a : b; // ���������ȥmax
            b = a > b ? b : a; // ��С��b
            a = max; // max��a
            for (int i = b; i > 0; i--) {
                if (a % i == 0 && b % i == 0) {
                    result = i; // ����ֱ�Ӷ���int result=i����ʹ��,�ᱨ��(C���Կ���)
                    break;
                }
            }
            System.out.println("���Լ����:" + result);
        }
    }
}
