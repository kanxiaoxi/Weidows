/*
 * @Author: Weidows
 * @Date: 2020-05-29 01:04:16
 * @LastEditors: Weidows
 * @LastEditTime: 2020-07-01 15:45:22
 * @FilePath: \demo\src\twenty\May\1.����java��Ľ���\MultiClass.java
 */ 
/* 1.����java��Ľ���
 * һ��.javaԴ�ļ��п����ж�����𣿣��ڲ�����⣩��ʲô������ 
 * ���Ե�   
 *����ֻ����һ��public��, ���������public��Ļ�������ļ�������Ҫ������������һ����
 *�����û��public�࣬���ֿ��Բ��������һ����
 */

public class MultiClass {
    int i = 0;
}

class B {
    String str = "b";
}

class C {
    String str = "c";
}
/*
 * Դ�ļ�javac�����class�ļ�����!����ô����? 
 * 1. ����һ���ļ��ﶨ���˼������ʱ�򣬻����������������� 
 * public class A {} class B {} class C {} ����ÿ�� class ����һ�� .class �ļ�
 * 2. �㶨�����ڲ����ʱ����������������� public class A { class B { } } ���������� class �ļ�
 * 3. ʹ�����������ʱ������������������ public class A { void xxx() {
 * button.addActionLisener(new ActionListener() {...}); } } ��Ҳ�������� class��һ��A.class��һ�� A$1.class }
 */
