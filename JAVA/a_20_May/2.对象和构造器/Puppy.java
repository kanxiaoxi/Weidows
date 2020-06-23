/*
 * @Author: Weidows
 * @Date: 2020-05-29 01:11:22
 * @LastEditors: Weidows
 * @LastEditTime: 2020-05-29 01:11:55
 * @FilePath: \demo\JAVA\1_2020-5\2.对象和构造器\Puppy.java
 */ 
public class Puppy {
    public Puppy(String name) {
        System.out.println("小狗的名字是:" + name);
    }

    public static void main(String[] args) {
        Puppy myPuppy = new Puppy("tonny");
    }
}