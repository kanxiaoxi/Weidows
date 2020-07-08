
/*
 * @Author: Weidows
 * @Date: 2020-05-03 01:18:34
 * @LastEditors: Weidows
 * @LastEditTime: 2020-07-08 10:52:42
 * @FilePath: \Weidows\src\twenty\june\b数组\Test.java
 * 数组
 */
import java.util.Scanner;

public class Test {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int num = 10;
        int[] numbers = new int[num];
        int[] scores = { 1, 2, 3, 4, 5, 6, 7 };
        /**
         * 创建数组格式,也可写成 int numbers[] = new int[num]; 
         *用new创建数组java默认元素赋0值或NULL(重要),
         * 不同于C语言,定义数组前num有确定整数就行,即使不是final类型; 
         * numbers[10] = 0; 报错,java会在运行时检查是否越界使用(C语言不检查)
         */
        char name = '刘';   //java中char可以是汉字(Unicode编码集支持)
        System.out.println(scores.length + "  " + name);
        /**
         * .lengrh是数组大小(自带)
         * 如果直接写成System.out.println(scores.length +name)会输出21023
         * 原因是把char'刘'当做int使用进行加法运算了
         */


        String[] str = { "a123", "b456" };
        String[] str2 = new String[10];
        System.out.println("字符串长度" + str.length + "\t" + str2.length);
        /**
         * 两种创建字符串数组方式
         * 第一种方式一步到位,无法指定数组大小
         * 第二种方式无法一步到位直接传数据,但可以指定大小
         * 本质上都是String类创建出来的对象(每个元素是一个对象,str和str2是这群对象的管理者)
         * 需要注意通过第二种方法new出来的String数组初始都为NULL,也就是还没有对象,比如调用String类的成员函数比如str2[0].length会出错(无指定对象)
         * 注意str2.length是String类的成员变量,new对象时自带,而str2[0].length()是字符串长度,需要调用成员函数length()算
         */
    }
}
