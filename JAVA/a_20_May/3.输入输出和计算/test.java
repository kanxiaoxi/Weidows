/*
 * @Author: Weidows
 * @Date: 2020-05-29 01:12:47
 * @LastEditors: Weidows
 * @LastEditTime: 2020-05-29 01:13:18
 * @FilePath: \demo\JAVA\1_2020-5\3.输入输出和计算\test.java
 */ 

//3.输入输出和计算
import java.util.Scanner; //引用Scanner构造器

public class test {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in); // 构造一个方法in
        int index = in.nextInt(); // 注意nextInt和nextLine不一样
        System.out.println(index);

        double foot = in.nextInt();
        double inch = in.nextDouble(); // int给double可以,double给int不行
        System.out.println((foot + inch / 12) * 0.3048);
        // 运算先后
        int result = 2;
        result = (result = result * 2) * 6 * (result = 3 + result);// 4*6*7
        System.out.println(result); // result=168
    }
}