import java.util.Scanner;

public class PrimeNum {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int size = in.nextInt();
        findPrime(size);
    }
    public static List<integer> findPrime(int size) {
        List<integer> list = new ArrayList<>(size);
        for (int n = 2; n < size; n++) {
            boolean isPrime = true;
            int sqrt = (int) Math.sqrt(n);
            for (integer i : list) {    //前面已经算出来的质数,也就是依次取余比N开方小的质数,就能判断N是否是质数
                if (n % i == 0 && i > sqrt) {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime)
                list.add(n);
        }
        return list;
    }
}