/*
 * @Author: Weidows
 * @Date: 2020-06-20 18:18:06
 * @LastEditors: Weidows
 * @LastEditTime: 2020-07-01 11:26:49
 * @FilePath: \demo\src\twenty\june\e�����\newdisplay\Display.java
 */
package newdisplay;
import java.util.Scanner;
import newclock.Clock;

public class Display {
    private int value = 0;
    private int limit = 0;

    public Display(int limit) {  
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
    public static void main(String[] args) {    /**mainҲ���ຯ�� */
        Scanner in = new Scanner(System.in);
        Clock.step += 1; /**��������ô�������Ҳ����ֱ�ӷ���
                         ������������ֱ��ȫ��,����import��Ҳ�� */
        Clock.f();    /**�ຯ��ֱ�ӵ���,�ò�������,������Ҫָ������ */
    }
}
