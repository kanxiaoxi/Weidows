/*
 * @Author: Weidows
 * @Date: 2020-05-29 01:15:59
 * @LastEditors: Weidows
 * @LastEditTime: 2020-07-08 10:51:39
 * @FilePath: \Weidows\src\twenty\May\7.100以内猜数游戏\Test.java
 * 100以内猜数游戏
 */ 
import java.util.Scanner;

public class Test {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int number = (int) (Math.random() * 100 + 1); // random生成[0,1)
        int a = 0;
        int cont = 0;
        System.out.println("开始");
        do {
            System.out.print("请输入:");
            a = in.nextInt();
            cont++;
            if (a > number)
                System.out.println("偏大");
            else
                System.out.println("偏小");
        } while (a != number);
        System.out.println("猜对了,猜了" + cont + "次");
    }
}
