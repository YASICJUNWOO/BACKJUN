import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) throws Exception{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st;

        int n = Integer.parseInt(br.readLine());

        st = new StringTokenizer(br.readLine());

        int[] list = new int[20000005];

        for (int i = 0; i < 20000002; i++) {
            list[i] = 0;
        }

        for (int i = 0; i < n; i++) {
            int num = Integer.parseInt(st.nextToken());
            list[num + 10000000]++;
        }

        n = Integer.parseInt(br.readLine());

        st = new StringTokenizer(br.readLine());

        for (int i = 0; i < n; i++) {
            int num = Integer.parseInt(st.nextToken());
            bw.write(String.valueOf(list[num+10000000])+" ");
        }
        bw.flush();
        bw.close();

    }
}

