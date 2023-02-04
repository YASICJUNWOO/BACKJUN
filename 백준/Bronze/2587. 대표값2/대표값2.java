import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        int[] nums = new int[5];
        int sum = 0;

        for (int i = 0; i < 5; i++) {
            int num = Integer.parseInt(br.readLine());
            nums[i] = num;
            sum += num;
        }

        Arrays.sort(nums);

        bw.write(sum/5+"\n"+nums[2]);
        bw.flush();
        bw.close();

    }
}

