/*
 * @Author: Weidows
 * @Date: 2020-05-29 01:12:47
 * @LastEditors: Weidows
 * @LastEditTime: 2020-05-29 01:13:18
 * @FilePath: \demo\JAVA\1_2020-5\3.��������ͼ���\test.java
 */ 

//3.��������ͼ���
import java.util.Scanner; //����Scanner������

public class test {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in); // ����һ������in
        int index = in.nextInt(); // ע��nextInt��nextLine��һ��
        System.out.println(index);

        double foot = in.nextInt();
        double inch = in.nextDouble(); // int��double����,double��int����
        System.out.println((foot + inch / 12) * 0.3048);
        // �����Ⱥ�
        int result = 2;
        result = (result = result * 2) * 6 * (result = 3 + result);// 4*6*7
        System.out.println(result); // result=168
    }
}