import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        String str = br.readLine();
        String [] checks = new String[]{"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};

        for (String check:checks){
            str = str.replace(check, "1");
        }


        bw.write(String.valueOf(str.length()));
        bw.flush();
        bw.close();

    }
}

