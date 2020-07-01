
/*
 * @Author: Weidows
 * @Date: 2020-05-29 01:13:53
 * @LastEditors: Weidows
 * @LastEditTime: 2020-07-01 16:21:18
 * @FilePath: \demo\src\twenty\May\4.浮点数 && 比较\Test.java
 * 浮点数 && 比较
 */ 
import java.util.Scanner;

public class Test {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        double a = 1.0;
        double b = 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1;
        System.out.println(a == b); // 浮点数存在误差
        System.err.println("a==b?" + ((a - b) < 0.00001));
        // 可以用精确度来判断,对于这种字符串+运算的输出方式,如碰到'+'误判,套一层()就行
    }
}