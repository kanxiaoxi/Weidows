
/*
 * @Author: Weidows
 * @Date: 2020-05-03 01:18:34
 * @LastEditors: Weidows
 * @LastEditTime: 2020-06-01 00:03:02
 * @FilePath: \demo\JAVA\2_2020-6\1.����\Test.java
 */
//1.����
import java.util.Scanner;

public class Test {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int num = 10;
        int[] numbers = new int[num];
        /*
         * ���������ʽ,Ҳ��д�� int numbers[] = new int[num]; 
         *��new��������javaĬ��Ԫ�ظ�0ֵ
         * ��ͬ��C����,��������ǰnum��ȷ����������,��ʹ����final����; 
         * numbers[10] = 0; ����,java��������ʱ����Ƿ�Խ��ʹ��(C���Բ����)
         */
        int[] scores = { 1, 2, 3, 4, 5, 6, 7 };
        char name = '��';   //java��char�����Ǻ���(Unicode���뼯֧��)
        System.out.println(scores.length + "  " + name);
        /**
         * .lengrh�������С(�Դ�)
         * ���ֱ��д��System.out.println(scores.length +name)�����21023
         * ԭ���ǰ�char'��'����intʹ�ý��мӷ�������
         */
    }
}
