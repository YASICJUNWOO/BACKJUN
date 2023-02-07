import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        int a = Integer.parseInt(br.readLine());
        int b = Integer.parseInt(br.readLine());
        int result = a * b;

        for (int i = 0; i < 3; i++) {
            int check = b % 10;
            bw.write(String.valueOf(check*a)+"\n");
            b /= 10;
        }
        bw.write(String.valueOf(result));
        bw.flush();
        bw.close();

    }
}

