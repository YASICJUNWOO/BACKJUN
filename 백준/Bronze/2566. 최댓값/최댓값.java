import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) throws Exception{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st;

        ArrayList<Integer> list = new ArrayList<>();

        int row = 0;
        int col = 0;
        int max = -1;

        for (int i = 0; i < 9; i++) {
            st = new StringTokenizer(br.readLine());
            for (int j = 0; j < 9; j++) {
                int num = Integer.parseInt(st.nextToken());
                if (max < num) {
                    row = i+1;
                    col = j+1;
                    max = num;
                }
            }
        }

        bw.write(String.valueOf(max)+"\n"+String.valueOf(row)+" "+String.valueOf(col));
        bw.flush();
        bw.close();

    }
}

