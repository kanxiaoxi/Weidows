/*
 * @Author: Weidows
 * @Date: 2020-05-29 01:11:22
 * @LastEditors: Weidows
 * @LastEditTime: 2020-07-01 15:56:35
 * @FilePath: \demo\src\twenty\May\2.对象和构造器\Puppy.java
 */ 
public class Puppy {
    public Puppy(String name) {
        System.out.println("小狗的名字是:" + name);
    }

    public static void main(final String[] args) {
        Puppy myPuppy = new Puppy("tonny");
        /* 前一个Puppy是类名,后一个是调用构造函数 */
    }
}