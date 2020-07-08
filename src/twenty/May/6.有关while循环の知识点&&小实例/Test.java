/*
 * @Author: Weidows
 * @Date: 2020-05-29 01:15:59
 * @LastEditors: Weidows
 * @LastEditTime: 2020-07-08 10:51:31
 * @FilePath: \Weidows\src\twenty\May\6.有关while循环の知识点&&小实例\Test.java
 * 有关while循环の知识点&&小实例
 */ 
import java.util.Scanner;

public class Test {
    public static void main(String[] args) {
        /* do-while循环(直接进循环体,执行一遍后判断条件)
        do{
            xxx;
        }while(xxx); 注意这种前面有个do,while后有分号";"
        
        while循环
        while (xxx) {
            xxx;
        } 
        总体跟C语言一样*/

        Scanner in = new Scanner(System.in);
        int number = 0;
        int sum = 0;
        int cont = 0;
        number = in.nextInt();
        while (number != -1) {
            sum += number;
            cont++;
            number = in.nextInt();
        }
        System.out.println("平均数=" + (double) sum / cont);
    }
}
