import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st;

        int a = Integer.parseInt(br.readLine());

        for (int i = 0; i < a; i++) {
            st = new StringTokenizer(br.readLine());
            int n = Integer.parseInt(st.nextToken());
            ArrayList<Integer> nums = new ArrayList<>();
            int sum = 0;
            for (int j = 0; j < n; j++) {
                int num = Integer.parseInt(st.nextToken());
                sum += num;
                nums.add(num);
            }

            double aver = sum / n;

            int cnt = 0;

            for (int j = 0; j < n; j++) {
                if (nums.get(j)>aver) cnt+=1;
            }

            double rate = cnt / (double)n * 100;

            bw.write(String.format("%.3f",rate)+"%\n");
        }
        bw.flush();
        bw.close();

    }
}

