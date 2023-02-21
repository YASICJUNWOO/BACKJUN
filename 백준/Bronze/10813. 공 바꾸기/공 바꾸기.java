import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) throws Exception{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st;

        st = new StringTokenizer(br.readLine());

        int n = Integer.parseInt(st.nextToken());
        int m = Integer.parseInt(st.nextToken());

        int[] bask = new int[n+1];
        for (int i = 1; i < n+1; i++) {
            bask[i] = i;
        }

        for (int i = 0; i < m; i++) {
            st = new StringTokenizer(br.readLine());

            int num1 = Integer.parseInt(st.nextToken());
            int num2 = Integer.parseInt(st.nextToken());

            int temp = bask[num1];
            bask[num1] = bask[num2];
            bask[num2] = temp;
        }

        for (int i = 1; i < n+1; i++) {
            bw.write(bask[i]+" ");
        }
        bw.flush();
        bw.close();

    }
}

