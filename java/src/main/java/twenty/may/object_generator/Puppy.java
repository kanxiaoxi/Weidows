package twenty.may.object_generator;

/*
 * @Author: Weidows
 * @Date: 2020-05-29 01:11:22
 * @LastEditors: Weidows
 * @LastEditTime: 2020-07-18 17:03:40
 * @FilePath: \Weidows\Java\src\main\java\twenty\may\object_generator\Puppy.java
 */ 
public class Puppy {
    private String puppyName = "";

    public Puppy(String name) {//对象构造器
        this.puppyName = name;
        System.out.println("构造器内:小狗的名字是:" + puppyName);
    }

    public void putName() {
        System.out.println("Puppy成员函数内:小狗的名字是:"+puppyName);
    }

    public static void main(final String[] args) {
        Puppy myPuppy = new Puppy("tonny");
        /* 前一个Puppy是类名,后一个是调用构造函数 */
        myPuppy.putName();
    }
}