
/*
 * @Author: Weidows
 * @Date: 2020-05-03 01:18:34
 * @LastEditors: Weidows
 * @LastEditTime: 2020-07-04 17:12:29
 * @FilePath: \Weidows\src\twenty\june\b����\Test.java
 * ����
 */
import java.util.Scanner;

public class Test {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int num = 10;
        int[] numbers = new int[num];
        int[] scores = { 1, 2, 3, 4, 5, 6, 7 };
        /**
         * ���������ʽ,Ҳ��д�� int numbers[] = new int[num]; 
         *��new��������javaĬ��Ԫ�ظ�0ֵ��NULL(��Ҫ),
         * ��ͬ��C����,��������ǰnum��ȷ����������,��ʹ����final����; 
         * numbers[10] = 0; ����,java��������ʱ����Ƿ�Խ��ʹ��(C���Բ����)
         */
        char name = '��';   //java��char�����Ǻ���(Unicode���뼯֧��)
        System.out.println(scores.length + "  " + name);
        /**
         * .lengrh�������С(�Դ�)
         * ���ֱ��д��System.out.println(scores.length +name)�����21023
         * ԭ���ǰ�char'��'����intʹ�ý��мӷ�������
         */


        String[] str = { "a123", "b456" };
        String[] str2 = new String[10];
        System.out.println("�ַ�������" + str.length + "\t" + str2.length);
        /**
         * ���ִ����ַ������鷽ʽ
         * ��һ�ַ�ʽһ����λ,�޷�ָ�������С
         * �ڶ��ַ�ʽ�޷�һ����λֱ�Ӵ�����,������ָ����С
         * �����϶���String�ഴ�������Ķ���(ÿ��Ԫ����һ������,str��str2����Ⱥ����Ĺ�����)
         * ��Ҫע��ͨ���ڶ��ַ���new������String�����ʼ��ΪNULL,Ҳ���ǻ�û�ж���,�������String��ĳ�Ա��������str2[0].length�����(��ָ������)
         * ע��str2.length��String��ĳ�Ա����,new����ʱ�Դ�,��str2[0].length()���ַ�������,��Ҫ���ó�Ա����length()��
         */
    }
}
