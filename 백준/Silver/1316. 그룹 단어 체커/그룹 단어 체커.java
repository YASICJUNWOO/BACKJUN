import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        int s = Integer.parseInt(br.readLine());

        int cnt = 0;

        while (s>0){
            int[] ch = new int[27];
            Arrays.fill(ch, 0);

            boolean group = true;

            String str = br.readLine();
            char prev = ' ';
            for (int i = 0; i < str.length(); i++) {
                if (prev != str.charAt(i)){
                    int idx = (int) (str.charAt(i)) -97;
                    if(ch[idx] == 0 ){
                        ch[idx] = 1;}
                    else{
                        group = false;
                        break;
                    }

                }
                prev = str.charAt(i);
            }
            if(group) cnt++;
            s--;
        }
        System.out.println(cnt);
    }
}

