/*
 * @Author: Weidows
 * @Date: 2020-05-29 01:15:59
 * @LastEditors: Weidows
 * @LastEditTime: 2020-05-29 01:19:03
 * @FilePath: \demo\JAVA\1_2020-5\8.���num֮ǰ������ && ��Ǯ��������\Test.java
 */ 

//8.���num֮ǰ������ && ��Ǯ��������
import java.util.Scanner;

public class Test {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        // ����
        int num = in.nextInt();
        for (int n = 2; n < num; n++) {
            boolean isPrime = true;
            for (int i = 2; i < n; i++) {
                if (n % i == 0) {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime == true)
                System.out.print(n + "\t"); // println����������ln����,\t�Ʊ��
        }
        // ��Ǯ��������(СǮ����,��Ǯ����)
        System.out.println(); // ����
        int amount = in.nextInt();
        OUT: // ���,����ת��ͬ
        for (int one = 0; one <= amount; one++) {
            for (int five = 0; five <= amount / 5; five++) {
                for (int ten = 0; ten <= amount / 10; ten++) {
                    for (int twenty = 0; twenty <= amount / 20; twenty++) {
                        if (one + five * 5 + ten * 10 + twenty * 20 == amount) {
                            System.out.println(
                                    one + "��һԪ," + five + "����Ԫ," + ten + "��ʮԪ," + twenty + "�Ŷ�ʮԪ  ->" + amount + "Ԫ.");
                            break OUT; // ��OUT��ǵ�ѭ�������
                        }
                    }
                }
            }
        }
    }
}
