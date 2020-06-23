/*
 * @Author: Weidows
 * @Date: 2020-06-23 19:58:42
 * @LastEditors: Weidows
 * @LastEditTime: 2020-06-24 00:03:00
 * @FilePath: \demo\JAVA\b_20_Jun\e_类变量\clock\Clock.java
 */ 
package clock;
import display.Display;

public class Clock {
    private Display hour = new Display(24);
    private Display minute = new Display(60);
    public static int step = 0;/**类变量,其本身属于类,可以创建不同对象共同管理 */

    public static void f() {    /**static类函数,同上,另外此函数内只能用static的成员变量,比如step,其他的不能用.另外类函数没有this,this是特指本对象,类函数是类的 */
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