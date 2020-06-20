/*
 * @Author: Weidows
 * @Date: 2020-06-20 18:18:06
 * @LastEditors: Weidows
 * @LastEditTime: 2020-06-21 00:07:18
 * @FilePath: \demo\JAVA\2_2020-6\4.���󽻻�\Display.java
 */ 
import java.util.Scanner;

public class Display {
    private int value = 0;
    private int limit = 0;
    

    public Display(int limit) {    //���캯��,���ܴ�����ֵ,����дpublic��private
        this.limit = limit;
    }

    public void increase() {
        value++;
        if (value == limit) {
            value = 0;
        }
    }

    public int getvalue() {
        return value;
}
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        Clock clock = new Clock();  /**Clock()��Clock����Ĭ�ϴ��еĹ��캯�� */
        clock.start();
    }

}

class Clock { // ������:�������ĸ��д(ϰ����)
    private Display hour = new Display(24);
    private Display minute = new Display(60);

    /** �����Զ���Ϊ��Ա��������Ҫnew */
    public void start() {
        while (true) { // ע���������д��while(1),����
            minute.increase();
            if (minute.getvalue() == 0) {
                hour.increase();
            }
            System.out.printf("%02d:%02d\n", hour.getvalue(), minute.getvalue());/** �����tm��C����һ�� */
        }
    }
}