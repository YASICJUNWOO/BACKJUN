import java.io.*;
import java.util.*;

public class Main {

    static int cal(int a, int b, int cnt, int level){
        if(cnt==level) return a+b;
        else {
            cnt++;
            return cal(b, a + b,cnt , level);
        }
    }

    public static void main(String[] args) throws Exception{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st;

        int level = Integer.parseInt(br.readLine());
        int result = 0;

        if (level==0) System.out.println(0);
        else if (level==1) System.out.println(1);
        else {
            result = cal(0, 1, 2, level);
            bw.write(String.valueOf(result));
            bw.flush();
            bw.close();
        }

    }
}

