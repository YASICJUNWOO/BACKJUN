import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        String str = br.readLine();
        int len = str.length();

        boolean is = true;

        int maxidx;
        //짝수
        if(len%2==0){
            maxidx = len / 2;
        }
        //홀수
        else{
            maxidx = (len - 1) / 2;
        }

        for (int i = 0; i < maxidx; i++) {
            if (str.charAt(i)!=str.charAt(len-1-i)){
                is = false;
                break;
            }
        }

        if (is){
            System.out.println(1);
        }
        else{
            System.out.println(0);

        }



    }
}

