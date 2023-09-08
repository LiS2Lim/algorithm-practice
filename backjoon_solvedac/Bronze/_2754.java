/**
 * 문제
 * 어떤 사람의 C언어 성적이 주어졌을 때, 평점은 몇 점인지 출력하는 프로그램을 작성하시오.
 * 
 * A+: 4.3, A0: 4.0, A-: 3.7
 * B+: 3.3, B0: 3.0, B-: 2.7
 * C+: 2.3, C0: 2.0, C-: 1.7
 * D+: 1.3, D0: 1.0, D-: 0.7
 * F: 0.0
 * 
 * 입력
 * 첫째 줄에 C언어 성적이 주어진다. 성적은 문제에서 설명한 13가지 중 하나이다.
 * 
 * 출력
 * 첫째 줄에 C언어 평점을 출력한다.
 */
package backjoon_solvedac.Bronze;

import java.io.*;
import java.util.*;

public class _2754 {
  public static void main(String[] args) {
    try(BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {

      Map<String, Double> map = new HashMap<>() {{
        put("A+", 4.3); put("A0", 4.0); put("A-", 3.7);
        put("B+", 3.3); put("B0", 3.0); put("B-", 2.7);
        put("C+", 2.3); put("C0", 2.0); put("C-", 1.7);
        put("D+", 1.3); put("D0", 1.0); put("D-", 0.7);
        put("F", 0.0);
      }};

      System.out.println(map.get(br.readLine()));

    } catch (Exception e) {}
  }
}