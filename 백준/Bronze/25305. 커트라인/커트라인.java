import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st;

        st = new StringTokenizer(br.readLine());
        int total = Integer.parseInt(st.nextToken());
        int rank = Integer.parseInt(st.nextToken());

        ArrayList<Integer> nums = new ArrayList<>();

        st = new StringTokenizer(br.readLine());
        for (int i = 0; i < total; i++) {
            int num = Integer.parseInt(st.nextToken());
            nums.add(num);
        }

        Collections.sort(nums, Collections.reverseOrder());

        bw.write(String.valueOf(nums.get(rank-1)));
        bw.flush();
        bw.close();

    }
}

