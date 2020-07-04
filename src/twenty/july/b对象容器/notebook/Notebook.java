/*
 * @Author: Weidows
 * @Date: 2020-07-03 10:09:58
 * @LastEditors: Weidows
 * @LastEditTime: 2020-07-04 18:36:55
 * @FilePath: \Weidows\src\twenty\june\f��������\notebook\Notebook.java
 */ 
package notebook;/* ��package����Ҫdebugger������ */

import java.util.ArrayList;
import java.util.HashSet;

public class Notebook {
    // ����������Notebook���ڴ���һ��private��Ա����notes
    private ArrayList<String> notes = new ArrayList<String>();
    /* ����ArrayList all String ,����������(������)
     * ����������������:���������� && Ԫ�ص�����
     * 1.ArrayList��������������(��������������)
     * 2.<>����ľ����������notesΨһ�洢������(Ԫ�ص�����)
     * 3.���ȥ��<String>������������������������,����ArrayList list=new ArrrayList()*/
    private HashSet<String> notes_1 = new HashSet<String>();
    
    /**
     * HashSet���������ArrayList����,��ͬ���䲻���ظ�װ��ͬ����,����������
     * ��Ȼ���������,��ô���޷�ʹ��index��λ����
     */
    
    public void add(String s) {
        notes.add(s);
        notes_1.add(s);
        // notes.add(10); Java��������int�Ͳ���,���ܽ�������
    }

    public void add(String s, int location) {
        notes.add(location, s);
        /* ��һ���Լ������Ա�������õ���add�����������notes�� */
    }

    public int getSize() {
        return notes.size();/* ����ĳ�Ա���� */
    }

    public String getNote(int index) {
        return notes.get(index);
    }

    public void removeNote(int index) {
        notes.remove(index);
    }

    public String[] list() {/* �����������ݱ�����鲢���� */
        String[] a = new String[notes.size()];
        /*
        for (int i = 0; i < notes.size(); i++) {
            a[i] = notes.get(i);
        }  ���������ݸ��ַ�������a
        */
        notes.toArray(a);/* ʹ�ÿ�ķ���,ֱ���ܰ��������ݸ�array */
        return a;
    }

    public void printString() {
        /* ����������[A,B]����ʽֱ�����,print����ʶ��(��Ҫ)
        ���ǲ���ֱ���������,print��ʶ��,�����������+public����(�ļ���)+@xxxx�Ķ���
         */
        System.out.print("\nArrayList:"+this.notes+"\t");
        System.out.println("HashSet:"+this.notes_1);
    }

    public String toString() {
        /**
         * public String toString()�����Ա�������ǿ����������ʱ������
         * ����������ͻ������ô������,����print����ֱ���������
         * ���ƺ������صķ���ֵ,������������ʱprintĬ��ȥ�ҵĺ���
         * û���Զ����������new�����Ķ������ʱ���ᱨ���������ֵĽ��
         */
        return "HelloWorld!";
    }
    public static void main(String[] args) {
        Notebook nb = new Notebook();/* new����nb,�ں�һ�������� */
        nb.add("first");
        nb.add("second");
        nb.add("second");/* װ�ظ�����HashSet���ᱨ�� */
        System.out.println(nb.getSize()+"\t"+nb.getNote(1));
        
        String[] a = nb.list();/* ���������ݸ��ַ������� */
        for (String s : a) {
            System.out.print(s+"\t");
        }
        nb.printString();/* ��������������� */
        System.out.println(nb);
    }
}