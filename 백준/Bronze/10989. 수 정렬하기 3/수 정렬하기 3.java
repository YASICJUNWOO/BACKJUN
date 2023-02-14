import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) throws Exception{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st;

        int test = Integer.parseInt(br.readLine());

        int[] nums = new int[10000001];

        for (int i = 0; i < 10000001; i++) {
            nums[i] = 0;
        }

        for (int i = 0; i < test; i++) {
            int num = Integer.parseInt(br.readLine());
            nums[num]++;
        }

        for (int i = 0; i < 10000001; i++) {
            if(nums[i]>0){
                for (int j = 0; j < nums[i]; j++) {
                    bw.write(String.valueOf(i) + "\n");
                }
            }
        }

        bw.flush();
        bw.close();

    }
}

