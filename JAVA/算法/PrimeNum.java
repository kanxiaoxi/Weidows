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
            for (integer i : list) {    //ǰ���Ѿ������������,Ҳ��������ȡ���N����С������,�����ж�N�Ƿ�������
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