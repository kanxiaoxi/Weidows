/*
 * @Author: Weidows
 * @Date: 2020-06-02 01:03:55
 * @LastEditors: Weidows
 * @LastEditTime: 2020-06-06 16:29:36
 * @FilePath: \demo\JAVA\2_2020-6\3.º¯Êý\Test.java
 */ 
import java.util.Scanner;

public class Test {
    public static boolean ifPrime(int i) {
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
        
    }
}