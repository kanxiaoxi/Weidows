/*
 * @Author: Weidows
 * @Date: 2020-07-08 18:58:48
 * @LastEditors: Weidows
 * @LastEditTime: 2020-07-08 23:33:20
 * @FilePath: \Weidows\src\twenty\july\f设计原则\newcastle\Handler.java
 */ 
package newcastle;

public class Handler {
    protected Game game;

    public Handler(Game game) {
        this.game = game;
    }
    public void doCmd(String word) {}

	public boolean isBye() {
		return false;
	}
}