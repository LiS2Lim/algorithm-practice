/**
 * 문제
 * 첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번째 줄에는 별 N개를 찍는 문제
 * 
 * 입력
 * 첫째 줄에 N(1 ≤ N ≤ 100)이 주어진다.
 * 
 * 출력
 * 첫째 줄부터 N번째 줄까지 차례대로 별을 출력한다.
 */
package backjoon_solvedac.Bronze;

import java.io.BufferedReader;
import java.io.InputStreamReader;

public class _2438 {

    public static void main(String[] args) {

        try (BufferedReader br = new BufferedReader(new InputStreamReader(System.in));) {

            int repeat = Integer.parseInt(br.readLine());
            String result = printStart(repeat, repeat).toString();

            System.out.println(result);

        } catch (Exception e) {}

    }

    public static StringBuilder printStart(int repeat, int count) {
        
        StringBuilder sb = new StringBuilder();
        if(count > 1) sb.append(_2438.printStart(repeat, count-1));
        for (int i = 1; i <= count; i++) {
            sb.append("*");
        }

        return sb.append("\n");
    }
}
