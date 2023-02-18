import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) throws Exception{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st;

        int n = Integer.parseInt(br.readLine());
        ArrayList<Integer> nums = new ArrayList<>();

       while(n>10){
           nums.add(n % 10);
           n /= 10;
       }
        nums.add(n);


        Collections.sort(nums);
        Collections.reverse(nums);

        for (Integer num : nums) {
            bw.write(String.valueOf(num));
        }

        bw.flush();
        bw.close();

    }
}

