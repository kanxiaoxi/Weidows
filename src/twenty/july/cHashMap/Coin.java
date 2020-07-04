/*
 * @Author: Weidows
 * @Date: 2020-07-04 18:51:22
 * @LastEditors: Weidows
 * @LastEditTime: 2020-07-04 19:36:35
 * @FilePath: \Weidows\src\twenty\july\cHashMap\Coin.java
 */
import java.util.HashMap;
import java.util.Scanner;

public class Coin {
    private HashMap<Integer, String> coinName = new HashMap<Integer, String>();
    /**
     * Integer��int�İ�������,������ĸ��д���Կ������int�߼�,������int����
     */
    public Coin() {
        /**
         * ������������ͬ,HashMap���Ԫ�ص��õĺ���ԭ����put(key,string)
         */
        coinName.put(1, "penny");
        coinName.put(10, "dime");
        coinName.put(25, "quarter");
        coinName.put(50, "����Ԫ");
        coinName.put(50, "half-dollar");//
    }

    public String getName(int amount) {
        /**
         * HashMap����Ԫ��Ҳ��get(key),
         * û�ҵ�������·���ֵ��NULL(ÿ��HashԪ����һ������,û���Ǹ��������NULL)
         */
        if (coinName.containsKey(amount))
            return coinName.get(amount);
        else
            return "Not Found!";
    }

    public void printHashMap() {
        /**
         * HashMap�и���Ա����keySet(),�����ǰ�key��ϳ�һ��HashSet������
         * �����������:HashMap����coinName����keySet()����һ��HashSet,
         * ���HashSet�ٵ���size()���ش�С(Ҳ��ͬ��HashMapԪ������)
         * 
         * HashMapҲ����ֱ��print,��ArrayList��HashSet������HashMap��{}
         */
        System.out.println(coinName.keySet().size() + "\t" + coinName);
    }

    public void printHashMap_1() {/* ����HashMap���� */
        for (Integer i : coinName.keySet()) {
            System.out.println(i + "\t" + coinName.get(i));
        }
    }
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        Coin coin = new Coin();
        coin.printHashMap();
        // coin.printHashMap_1();
        
        // int amount = in.nextInt();
        // System.out.println(coin.getName(amount));
        
    }
}