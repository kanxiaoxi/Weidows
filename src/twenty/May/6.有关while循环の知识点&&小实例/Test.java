/*
 * @Author: Weidows
 * @Date: 2020-05-29 01:15:59
 * @LastEditors: Weidows
 * @LastEditTime: 2020-07-01 16:18:47
 * @FilePath: \demo\src\twenty\May\6.�й�whileѭ����֪ʶ��&&Сʵ��\Test.java
 * �й�whileѭ����֪ʶ��&&Сʵ��
 */ 
import java.util.Scanner;

public class Test {
    public static void main(String[] args) {
        /* do-whileѭ��(ֱ�ӽ�ѭ����,ִ��һ����ж�����)
        do{
            xxx;
        }while(xxx); ע������ǰ���и�do,while���зֺ�";"
        
        whileѭ��
        while (xxx) {
            xxx;
        } 
        �����C����һ��*/

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
