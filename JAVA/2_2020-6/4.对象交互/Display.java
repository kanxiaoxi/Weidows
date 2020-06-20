/*
 * @Author: Weidows
 * @Date: 2020-06-20 18:18:06
 * @LastEditors: Weidows
 * @LastEditTime: 2020-06-21 00:07:18
 * @FilePath: \demo\JAVA\2_2020-6\4.对象交互\Display.java
 */ 
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
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        Clock clock = new Clock();  /**Clock()是Clock类中默认带有的构造函数 */
        clock.start();
    }

}

class Clock { // 命名法:类的首字母大写(习惯性)
    private Display hour = new Display(24);
    private Display minute = new Display(60);

    /** 这种以对象为成员变量的需要new */
    public void start() {
        while (true) { // 注意这个不能写成while(1),不对
            minute.increase();
            if (minute.getvalue() == 0) {
                hour.increase();
            }
            System.out.printf("%02d:%02d\n", hour.getvalue(), minute.getvalue());/** 这个神tm跟C语言一样 */
        }
    }
}