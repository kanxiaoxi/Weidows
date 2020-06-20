/*
 * @Author: Weidows
 * @Date: 2020-06-02 01:03:55
 * @LastEditors: Weidows
 * @LastEditTime: 2020-06-20 18:04:31
 * @FilePath: \demo\JAVA\2_2020-6\3.����\Test.java
 */ 
import java.util.Scanner;

public class Test {
    public static boolean ifPrime(int i) {  //�����ĺ���
        boolean isPrime = true;
        for (int j = 2; j < i; j++) {
            if (j % j == 0) {
                isPrime = false;
                break;
            }
        }
        return isPrime;
    }
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        VendingMachine vm = new VendingMachine(); /*�½�vm�������(������)����
            VendingMachine vm1=vm; ����vm��vm1��ͬ����������
            ��ͬһ����new���������Թ���ͬ����*/
        vm.showPrompt();
        vm.showBalance();
        vm.insertMoney(100);
        vm.getFood();
        vm.showBalance();
    }
}

class VendingMachine {  //�ⲿ��:�������ۻ��������,����д��test�ڲ�,������ͬ
    int price = 80, balance, total;     /* �����ں�����Ľг�Ա����,�ڲ��Ľб��ر���
    ��Ա�����������Ƕ����������,�����������ڲ��ĳ�Ա����
    ����һ��Ҫע��Java�б��ر������û�г�ʼ����ֵ�Ǹ������ǲ���ʹ�õ�(����)
    ����������ĳ�Ա����Ĭ�ϳ�ʼֵ��0 */

    void showPrompt() {
        System.out.println("Welcome");
    }

    void insertMoney(int amount) {
        balance += amount;
    }

    void showBalance() {
        System.out.println(balance);
    }

    void test(int price) { //���Ժ���
        this.price = price; //�����this���Ƿ������ڲ�(�����ⲿ)�ı���
    }

    VendingMachine() { /*���캯��,���ܴ�����ֵ,���ֺ��������һ��
                        ��new����ʱ�Զ�ִ�д˺���*/
        total = 0;
    }

    VendingMachine(
            int price) { /*��������,���캯�������ж��,������������ͬ,new����ʱ������ݴ����жϵ����ĸ����캯��(��Ҫע������������Ͳ�ƥ��int�����Զ�ת����double,����double����ת����int)*/
        this(); //�����ĸ�û�����Ĺ��캯��,��ֻ���ڹ��캯����һ��д,��ֻ����һ��
        this.price = price;
    }

    void getFood() {
        if (balance >= price) {
            System.out.println("Here you are.");
            balance -= price;   
            total += price;
        }
    }
}