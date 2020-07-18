/*
 * @Author: Weidows
 * @Date: 2020-06-20 18:18:06
 * @LastEditors: Weidows
 * @LastEditTime: 2020-07-18 12:09:00
 * @FilePath: \Weidows\JAVA\src\twenty\june\d对象交互and访问属性and包\display\Display.java
 */
package display;    /**包名,包内的.java文件名可以首字母大写,名字随意 */
import clock.Clock;     /**导入格式:包名+文件名(类名) */
import java.util.Scanner;

public class Display {
    private int value = 0;
    private int limit = 0;

    public Display(int limit) {    //构造函数,不能带返回值,可以写public或private
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
    public static void main(String[] args) {/**不能用code runner跑,出错 */
        Scanner in = new Scanner(System.in);
        Clock clock = new Clock();  /**Clock()是Clock类中默认带有的构造函数 */
        clock.start();
    }
}
