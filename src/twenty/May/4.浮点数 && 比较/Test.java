
/*
 * @Author: Weidows
 * @Date: 2020-05-29 01:13:53
 * @LastEditors: Weidows
 * @LastEditTime: 2020-07-01 16:21:18
 * @FilePath: \demo\src\twenty\May\4.������ && �Ƚ�\Test.java
 * ������ && �Ƚ�
 */ 
import java.util.Scanner;

public class Test {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        double a = 1.0;
        double b = 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1;
        System.out.println(a == b); // �������������
        System.err.println("a==b?" + ((a - b) < 0.00001));
        // �����þ�ȷ�����ж�,���������ַ���+����������ʽ,������'+'����,��һ��()����
    }
}