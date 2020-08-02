/*
 * @Author: Weidows
 * @Date: 2020-08-01 13:42:21
 * @LastEditors: Weidows
 * @LastEditTime: 2020-08-01 15:19:01
 * @FilePath: \Weidows\Java\src\main\java\twenty\august\text_io_stream\textStream.java
 */
package twenty.august.text_io_stream;

import java.io.BufferedWriter;
import java.io.FileOutputStream;
import java.io.OutputStreamWriter;
import java.io.PrintWriter;
import java.util.Scanner;

/**
 * *二进制用的是Stream,处理文本io采用Reader/Writer(处理Unicode字符集)
 * ?
 */
public class textStream {
  public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
    // String string = new String(in.next());
    // String string_1 = new String("我是233");
    try {
      /**
       * * 由于编码问题很多文件无法直接用Reader/Writer处理,需要在中间借用Stream
       * ? OutputStream是Stream与Writer之间的桥梁
       */
      PrintWriter out = new PrintWriter(new BufferedWriter(
          new OutputStreamWriter(new FileOutputStream("./Java/src/main/java/twenty/august/text_io_stream/a.txt"))));
      out.println(new String(in.next()));
      in.close();
      out.close();
    } catch (Exception e) {
    }
  }
}
