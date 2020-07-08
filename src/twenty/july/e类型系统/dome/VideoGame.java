/*
 * @Author: Weidows
 * @Date: 2020-07-06 22:01:18
 * @LastEditors: Weidows
 * @LastEditTime: 2020-07-06 22:07:56
 * @FilePath: \Weidows\src\twenty\july\eç±»åž‹ç³»ç»Ÿ\dome\VideoGame.java
 */ 
package dome;
public class VideoGame extends Item {
    private int numOfPlayers;

    public VideoGame(String title, int playingTime, boolean gotIt, String comment, int number) {
        super(title, playingTime, gotIt, comment);
        this.numOfPlayers = number;
    }

    @Override
    public void print() {
        super.print();
        System.out.println(
            "numOfPlayers" + numOfPlayers + "\t");
    }
    public static void main(String[] args) {
        
    }
}