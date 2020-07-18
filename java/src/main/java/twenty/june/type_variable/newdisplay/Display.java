/*
 * @Author: Weidows
 * @Date: 2020-06-20 18:18:06
 * @LastEditors: Weidows
 * @LastEditTime: 2020-07-18 16:51:47
 * @FilePath: \Weidows\Java\src\main\java\twenty\june\type_variable\newdisplay\Display.java
 */
package twenty.june.type_variable.newdisplay;
import twenty.june.type_variable.newclock.Clock;

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
        Clock.step += 1; /**类变量不用创建对象也可以直接访问
                         另外像是这种直接全称,不用import包也对 */
        Clock.f();    /**类函数直接调用,用不到对象,但是需要指明类名 */
    }
}
