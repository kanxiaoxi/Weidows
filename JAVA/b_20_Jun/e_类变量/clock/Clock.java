/*
 * @Author: Weidows
 * @Date: 2020-06-23 19:58:42
 * @LastEditors: Weidows
 * @LastEditTime: 2020-06-24 00:03:00
 * @FilePath: \demo\JAVA\b_20_Jun\e_�����\clock\Clock.java
 */ 
package clock;
import display.Display;

public class Clock {
    private Display hour = new Display(24);
    private Display minute = new Display(60);
    public static int step = 0;/**�����,�䱾��������,���Դ�����ͬ����ͬ���� */

    public static void f() {    /**static�ຯ��,ͬ��,����˺�����ֻ����static�ĳ�Ա����,����step,�����Ĳ�����.�����ຯ��û��this,this����ָ������,�ຯ������� */
        step++;
    }
    public void start() {
        while (true) { 
            minute.increase();
            if (minute.getvalue() == 0) {
                hour.increase();
            }
            System.out.printf("%02d:%02d\n",hour.getvalue(), minute.getvalue());
        }
    }
}