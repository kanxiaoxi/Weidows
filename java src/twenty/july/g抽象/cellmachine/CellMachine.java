/*
* @Author: Weidows
* @Date: 2020-07-12 11:52:59
 * @LastEditors: Weidows
 * @LastEditTime: 2020-07-13 22:06:18
 * @FilePath: \Weidows\src\twenty\july\g抽象\cellmachine\CellMachine.java
*/ 
package cellmachine;

import java.awt.Component;

import javax.swing.JFrame;
import javax.swing.text.View;
import cell.Cell;
import field.*;
// import field.View;

public class CellMachine {
    public static void main(String[] args) {
        // *新建一个棋盘
        Field field = new Field(30, 30);
        // *遍历棋盘,每个格子new Cell对象
        for (int row = 0; row < field.getHeight(); row++) {
            for (int col = 0; col < field.getWidth(); col++) {
                field.place(row, col, new Cell());
            }
        }
        for (int row = 0; row < field.getHeight(); row++) {
            for (int col = 0; col < field.getWidth(); col++) {
                // *接收上一步new的对象,并做判断执行
                Cell cell = field.get(row, col);
                if (Math.random() < 0.2) {
                    cell.reborn();
                }
            }
        }
        View view = new View(field);
        JFrame frame = new JFrame();// !图形化窗口
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);// *可关闭窗口
        frame.setResizable(false);  // *不可更改窗口大小
        frame.setTitle("Cells");    // *窗口标题
        frame.add(view);
        frame.pack();
        frame.setVisible(true);     // !可视化
        
        for ( int i=0; i<1000; i++ ) {
            for ( int row = 0; row<field.getHeight(); row++ ) {
                for ( int col = 0; col<field.getWidth(); col++ ) {
                    Cell cell = field.get(row, col);
                    Cell[] neighbour = field.getNeighbour(row, col);
                    int numOfLive = 0;
                    for ( Cell c : neighbour ) {
                        if ( c.isAlive() ) {
                            numOfLive++;
                        }
                    }
                    System.out.print("["+row+"]["+col+"]:");
                    System.out.print(cell.isAlive()?"live":"dead");
                    System.out.print(":"+numOfLive+"-->");
                    if ( cell.isAlive() ) {
                        if ( numOfLive <2 || numOfLive >3 ) {
                            cell.die();
                            System.out.print("die");
                        }
                    } else if ( numOfLive == 3 ) {
                        cell.reborn();
                        System.out.print("reborn");
                    }
                    System.out.println();
                }
            }
            System.out.println("UPDATE");
            frame.repaint();
            try {
                Thread.sleep(200);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
    }
}
