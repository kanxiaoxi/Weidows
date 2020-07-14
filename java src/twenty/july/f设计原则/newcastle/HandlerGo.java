/*
 * @Author: Weidows
 * @Date: 2020-07-08 19:00:21
 * @LastEditors: Weidows
 * @LastEditTime: 2020-07-08 23:34:19
 * @FilePath: \Weidows\src\twenty\july\f设计原则\newcastle\HandlerGo.java
 */ 
package newcastle;

public class HandlerGo extends Handler {
    public HandlerGo(Game game) {
        super(game);
    }

    public void doCmd(String word) {
        game.goRoom(word);
    }
}
