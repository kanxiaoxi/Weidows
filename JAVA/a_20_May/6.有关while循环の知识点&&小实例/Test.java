/*
 * @Author: Weidows
 * @Date: 2020-05-29 01:15:59
 * @LastEditors: Weidows
 * @LastEditTime: 2020-05-29 01:17:38
 * @FilePath: \demo\JAVA\1_2020-5\6.�й�whileѭ����֪ʶ��&&Сʵ��\Test.java
 */ 
//6.�й�whileѭ����֪ʶ��&&Сʵ��
import java.util.Scanner;

public class Test {
    public static void main(String[] args) {
        // do-whileѭ��(ֱ�ӽ�ѭ����,ִ��һ����ж�����)
        // do{
        // xxx;
        // }while(xxx); ע������ǰ���и�do,while���зֺ�";"
        // whileѭ��
        // while (xxx) {
        // xxx;
        // }
        Scanner in = new Scanner(System.in);
        int number = 0;
        int sum = 0;
        int cont = 0;
        number = in.nextInt();
        while (number != -1) {
            sum += number;
            cont++;
            number = in.nextInt();
        }
        System.out.println("ƽ����=" + (double) sum / cont);
    }
}
