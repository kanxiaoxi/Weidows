/*
 * @Author: Weidows
 * @Date: 2020-06-20 18:18:06
 * @LastEditors: Weidows
 * @LastEditTime: 2020-07-01 10:40:42
 * @FilePath: \demo\src\twenty\june\d���󽻻�&��������&��\display\Display.java
 */
package display;    /**����,���ڵ�.java�ļ�����������ĸ��д,�������� */
import clock.Clock;     /**�����ʽ:����+�ļ���(����) */
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
    public static void main(String[] args) {/**������code runner��,���� */
        Scanner in = new Scanner(System.in);
        Clock clock = new Clock();  /**Clock()��Clock����Ĭ�ϴ��еĹ��캯�� */
        clock.start();
    }
}
