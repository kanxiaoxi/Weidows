/*
 * @Author: Weidows
 * @Date: 2020-07-04 10:39:19
 * @LastEditors: Weidows
 * @LastEditTime: 2020-07-04 17:38:23
 * @FilePath: \Weidows\src\twenty\june\gForeachѭ��\foreach.java
 * for-eachѭ��(��ǿ��forѭ��) && Object����
 */

import java.util.ArrayList;

public class foreach {
    static String[] strs = { "aaa", "bbb", "ccc" };
    public static void main(String[] args) {
        ArrayList list = new ArrayList();// ����ArrayList����
        list.add(10086);// ��ü��������Ԫ��
        list.add("���");
        list.add('a');
        list.add("bbbb");
        /**
         * ��ǿforѭ��(for-eachѭ��)
         * ����list��ÿ��object���в���,���ǶԴ����,��Object����String,�����������ֻ��String,���ǻᱨ��,��Ϊ�������Ͳ�ͬ(Object�Ƿ���)
         */
        for (Object obj : list) {// ʹ����ǿforѭ����������
            System.out.print(obj + "\t");// ȡ������ӡ�����е�Ԫ��
        }
        
        
    /**����2.for-each��(α)ֻ��ѭ��,�����޸�����.
     * ԭ������ֻ�ǽ���ʱ����str�ض�����,δ�޸������.
     * ��Ȼ�޷�������ʱ����ֱ���޸�����,���ǿ���ͨ����ʱ�������ú���֮��Ĳ�������޸�
     * �������strs����str��"����"��ϵ,����str��ĳ����Ĺ�����ʱ�����޸Ķ��������
    */
        for (String str : strs) {
            str = "ddd";
        }
        System.out.println("foreachѭ���޸ĺ������:" + strs[0] + "," + strs[1] + "," + strs[2]);
        // forѭ����������
        for (int i = 0; i < strs.length; i++) {
            strs[i] = "ddd";
        }
        System.out.println("forѭ���޸ĺ������:" + strs[0] + "," + strs[1] + "," + strs[2]);
    }
}