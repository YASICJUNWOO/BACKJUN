import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) throws Exception{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st;

        int num = Integer.parseInt(br.readLine());
        if (num<10) num *= 10;

        int check = num;

        int first = num / 10;
        int second = num % 10;

        int result = first + second;
        if (result>=10) result %= 10;

        num = (second * 10) + result;

        int cnt = 1;

        while (num != check) {
            first = num / 10;
            second = num % 10;
            result = first + second;
            if (result>=10) result %= 10;
            num = (second * 10) + result;
            cnt++;
        }

        bw.write(String.valueOf(cnt));
        bw.flush();
        bw.close();

    }
}

