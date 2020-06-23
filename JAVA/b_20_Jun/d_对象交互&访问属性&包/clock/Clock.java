/*
 * @Author: Weidows
 * @Date: 2020-06-23 19:58:42
 * @LastEditors: Weidows
 * @LastEditTime: 2020-06-23 23:16:55
 * @FilePath: \demo\JAVA\b_20_Jun\d_���󽻻�\clock\Clock.java
 */ 
package clock;

/**��ĳ�����µ�����.javaԴ�ļ���Ҫ����package ����(����Դ�ļ�����ʡ��
 * �Ұ�������ĸ����Сд,����ĸ����������,����java��Ŀ�ļ�·��ֻ�����»���) */

import display.Display;

public class Clock {
    private Display hour = new Display(24);
    private Display minute = new Display(60);

    /** �����Զ���Ϊ��Ա��������Ҫnew
     * privateֻ�������������Ա�����ͳ�Ա����,������ʹ�����������޷�����
     * ������clock.hour���޷����ʵ�,�෴public���Է��ʺ�ʹ��;
     * ���û��дpublic����private,�����;���friendly,��ֻ����ͬһ����
     * (�������Ϊһ���ļ���Ŀ¼��)����Է���ʹ��
     * ���⻹��һ��protected,�ڼ̳��лὲ��
     */
    
    public void start() {
        while (true) { // ע���������д��while(1),����
            minute.increase();
            if (minute.getvalue() == 0) {
                hour.increase();
            }
            System.out.printf("%02d:%02d\n", hour.getvalue(), minute.getvalue());/** �����tm��C����һ�� */
        }
    }
}