/*
 * @Author: Weidows
 * @Date: 2020-06-20 18:18:06
 * @LastEditors: Weidows
 * @LastEditTime: 2020-06-24 00:05:30
 * @FilePath: \demo\JAVA\b_20_Jun\e_类变量\display\Display.java
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
    public static void main(String[] args) {    /**main也是类函数 */
        Scanner in = new Scanner(System.in);
        Clock.step += 1; /**类变量不用创建对象也可以直接访问
                         另外像是这种直接全称,不用import包也对 */
        f();    /**类函数直接调用,用不到对象 */
    }
}
