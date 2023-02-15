import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) throws Exception{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st;

        st = new StringTokenizer(br.readLine());

        int n = Integer.parseInt(st.nextToken());
        int m = Integer.parseInt(st.nextToken());

        List<String> list = new ArrayList<>();

        for (int i = 0; i < n; i++) {
            String str = br.readLine();
            list.add(str);
        }

        int cnt = 0;

        for (int i = 0; i < m; i++) {
            String check = br.readLine();
            if(list.contains(check)) cnt++;
        }

        bw.write(String.valueOf(cnt));

        bw.flush();
        bw.close();

    }
}

