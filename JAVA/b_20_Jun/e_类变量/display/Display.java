/*
 * @Author: Weidows
 * @Date: 2020-06-20 18:18:06
 * @LastEditors: Weidows
 * @LastEditTime: 2020-06-24 00:05:30
 * @FilePath: \demo\JAVA\b_20_Jun\e_�����\display\Display.java
 */
package display;    
import clock.Clock;   
import java.util.Scanner;

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
        f();    /**�ຯ��ֱ�ӵ���,�ò������� */
    }
}
