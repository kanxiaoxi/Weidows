/*
 * @Author: Weidows
 * @Date: 2020-05-29 01:15:59
 * @LastEditors: Weidows
 * @LastEditTime: 2020-05-29 01:21:16
 * @FilePath: \demo\JAVA\1_2020-5\9.计算最大公约数的方法methods_of_calculating_Max_common_divisor\Test.java
 */ 
//9.计算最大公约数的方法methods_of_calculating_Max_common_divisor
import java.util.Scanner;

public class Test {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        {// 一:辗转相除法(欧几里德法)
            int a = in.nextInt();
            int b = in.nextInt();
            int temp = 0;
            if (a > b) { // 确保a大b小,二中有另一种方法
                int c = a;
                a = b;
                b = c;
            }
            temp = a % b;
            while (temp != 0) {
                a = b;
                b = temp;
                temp = a % b;
            }
            System.out.println("最大公约数是:" + b);
        }

        {// 二:穷举法
            int a = in.nextInt();
            int b = in.nextInt();
            int result = 0;
            int max = a > b ? a : b; // 第三方抽出去max
            b = a > b ? b : a; // 最小给b
            a = max; // max给a
            for (int i = b; i > 0; i--) {
                if (a % i == 0 && b % i == 0) {
                    result = i; // 不能直接定义int result=i这样使用,会报错(原因未知)
                    break;
                }
            }
            System.out.println("最大公约数是:" + result);
        }
    }
}
