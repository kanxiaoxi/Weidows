/*
 * @Author: Weidows
 * @Date: 2020-06-01 00:04:03
 * @LastEditors: Weidows
 * @LastEditTime: 2020-06-20 18:16:38
 * @FilePath: \demo\JAVA\2_2020-6\2.�ַ���&��������\Test.java
 */ 
import java.util.Scanner;

public class Test {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        /** java��math������������C���� */
        System.out.println("һ:"+Math.abs(-12) +" \t" + Math.round(10.645) + "\t" + Math.random() * 100 + "\t" + Math.pow(2, 3));
        
        String s = "Hello World";
        String s_1 = new String("Hello World"); //���ִ�����ʽ
        System.out.println("��:"+s+"\t"+s_1);
        /**�ַ����Ĵ���,String����ĸ��д������ʵһ����,����һ�� String��Ķ���s,
         * ����s���������Hello World�Ĺ����߶���������
         * String����������+����,��:"Hello"+"World"="HelloWorld"
         * ����,java���ַ���������ͬ��C�����е�ָ��,�䱾����һ����ַ����s==s_1����false
         * ��Ҫ�����ݱ�����в���ʱ��Ҫ�ö���ķ��� */

        //�ַ�����һЩ����
            //equals�ж������Ƿ���ͬ,�ַ�����length�����鲻ͬ,��Ҫ�ں���Ӹ�����
                System.out.println("��:"+s.equals(s_1) + "\t" + s.length());
            //�ַ���ȡ_1    charAt( int index)
                System.out.print("��:");
                for (int i = 0; i < s.length(); i++)
                    System.out.print(s.charAt(i));    //ע���Ǵ�0~(n-1)
                System.out.println();
                
            //�ַ���ȡ_2    substring(int beginIndex,int endIndex )
                System.out.print("substring:  "+s.substring(2) + "\t");
                System.out.println(s.substring(2, 4)); //ע���Ǵ�2��ʼ��4֮ǰ->23

            //�����ַ���    indexOf()
                System.out.print(s.indexOf('e') +"\t"); //�ҵ����ַ�,�Ҳ�������-1
                System.out.print(s.indexOf("llo") + "\t"); //�ַ������������ĸλ��
                
                //Сʵ��:�ҵ����޳��ַ�����ĳ���ַ�����λ�ò����
                    char findChar='o';
                    int loc=s.indexOf(findChar);
                    while (loc != -1) {
                        System.out.print(loc + "\t");
                        loc = s.indexOf(findChar,loc+1); //��loc+1��λ���ٿ�ʼ��
                    }
        /* ��������
            int a = in.nextInt();
            double b = in.nextDouble();
            String c = in.next();   //����һ������,ֱ��(�ո�,Tab,����)
            String c_1 = in.nextLine(); //����һ���� */
    }
}