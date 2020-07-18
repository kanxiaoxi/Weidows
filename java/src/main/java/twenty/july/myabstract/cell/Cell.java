/*
 * @Author: Weidows
 * @Date: 2020-07-12 15:17:05
 * @LastEditors: Weidows
 * @LastEditTime: 2020-07-18 15:08:19
 * @FilePath: \Weidows\Java\src\main\java\twenty\july\myabstract\cell\Cell.java
 */ 

package twenty.july.myabstract.cell;
import java.awt.Graphics;

public class Cell {
    private boolean alive = false;
    
    public void die() { alive = false; }
    public void reborn() { alive = true; }
    public boolean isAlive() { return alive; }
    
    public void draw(Graphics g, int x, int y, int size) {
        g.drawRect(x, y, size, size);
        if ( alive ) {
            g.fillRect(x, y, size, size);
        }
    }
}
