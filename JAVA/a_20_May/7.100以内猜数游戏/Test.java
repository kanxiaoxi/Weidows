/*
 * @Author: Weidows
 * @Date: 2020-05-29 01:15:59
 * @LastEditors: Weidows
 * @LastEditTime: 2020-05-29 01:18:17
 * @FilePath: \demo\JAVA\1_2020-5\7.100���ڲ�����Ϸ\Test.java
 */ 
//7.100���ڲ�����Ϸ
import java.util.Scanner;

public class Test {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int number = (int) (Math.random() * 100 + 1); // random����[0,1)
        int a = 0;
        int cont = 0;
        System.out.println("��ʼ");
        do {
            a = in.nextInt();
            cont++;
            if (a > number)
                System.out.println("ƫ��");
            else
                System.out.println("ƫС");
        } while (a != number);
        System.out.println("�¶���,����" + cont + "��");
    }
}
