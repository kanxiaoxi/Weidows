package dome;
/*
 * @Author: Weidows
 * @Date: 2020-07-05 22:16:23
 * @LastEditors: Weidows
 * @LastEditTime: 2020-07-08 10:54:44
 * @FilePath: \Weidows\src\twenty\july\d继承与多态\dome\CD.java
 */ 
public class CD extends Item {
    // private String title;
    private String artist;
    private int numOfTracks;
    // private int playingTime;
    // private boolean gotIt;
    // private String comment;

    public CD(String title, String artist, int numOfTracks, int playingTime,Boolean gotIt, String comment) {
        /**
         * 自定义一个构造器,在new对象时可以输入对应参数直接初始化
         * 在子类的构造函数第一行可以用super()调用父类的构造函数,只能调用一次且只能在第一行
         */
        super(title,playingTime,gotIt,comment);   //调用父类的构造函数(传参)
        // this.title = title;
        this.artist = artist;
        this.numOfTracks = numOfTracks;
        // this.playingTime = playingTime;
        // this.comment = comment;
    }

    public void print() {
        super.print();
        System.out.println(
            "artist:"+artist+"\t"+
            "numOfTracks:"+numOfTracks+"\t");
    }
    public static void main(String[] args) {
        
    }
}