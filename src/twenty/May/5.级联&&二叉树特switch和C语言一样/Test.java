/*
 * @Author: Weidows
 * @Date: 2020-05-29 01:15:59
 * @LastEditors: Weidows
 * @LastEditTime: 2020-07-01 16:12:44
 * @FilePath: \demo\src\twenty\May\5.����&&��������switch��C����һ��\Test.java
 * ���� && ������   ����:switch��C����һ��
 */ 
import java.util.Scanner;

public class Test {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.println("�ֱ�����x,y,z");
        int x = in.nextInt();
        int y = in.nextInt();
        int z = in.nextInt();
        int max = 0;
        // ����������
        if (x > y) {
            if (x > z) // ���δ��{},��ôifֻ��if��һ��,��ʹ�����е�������ͬ
                max = x;
            else // else�������ifƥ��,��ʹ������ͬ
                max = z;
        } else { // ������ñ�д��else if,Ӱ�����ɶ���
            if (y > z)
                max = y;
            else
                max = z;
        }
        System.out.println("max=" + max);
    }
}
