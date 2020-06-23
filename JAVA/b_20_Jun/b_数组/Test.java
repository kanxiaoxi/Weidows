
/*
 * @Author: Weidows
 * @Date: 2020-05-03 01:18:34
 * @LastEditors: Weidows
 * @LastEditTime: 2020-06-01 00:03:02
 * @FilePath: \demo\JAVA\2_2020-6\1.数组\Test.java
 */
//1.数组
import java.util.Scanner;

public class Test {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int num = 10;
        int[] numbers = new int[num];
        /*
         * 创建数组格式,也可写成 int numbers[] = new int[num]; 
         *用new创建数组java默认元素赋0值
         * 不同于C语言,定义数组前num有确定整数就行,即使不是final类型; 
         * numbers[10] = 0; 报错,java会在运行时检查是否越界使用(C语言不检查)
         */
        int[] scores = { 1, 2, 3, 4, 5, 6, 7 };
        char name = '刘';   //java中char可以是汉字(Unicode编码集支持)
        System.out.println(scores.length + "  " + name);
        /**
         * .lengrh是数组大小(自带)
         * 如果直接写成System.out.println(scores.length +name)会输出21023
         * 原因是把char'刘'当做int使用进行加法运算了
         */
    }
}
