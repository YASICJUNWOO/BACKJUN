import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) throws Exception{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st;

        int num = Integer.parseInt(br.readLine());
        int num2 = Integer.parseInt(br.readLine());

        int[] so = new int[10002];

        for (int i = 0; i < 10002; i++) {
            so[i] = 1;
        }

        so[1] = 0;

        for (int i = 2; i <= 100; i++) {
            int check = 2;
            while(i*check<=10000){
                if(so[i*check]==1) so[i * check] = 0;
                check++;
            }
        }

        int min = 10000;
        int sum = 0;
        for (int i = num; i <= num2; i++) {
            if(so[i]==1) {
                if(min>i) min = i;
                sum += i;
            }

        }
        if(sum==0) bw.write("-1");
        else bw.write(String.valueOf(sum)+"\n"+String.valueOf(min));
        bw.flush();
        bw.close();

    }
}

