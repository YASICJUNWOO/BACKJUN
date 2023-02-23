import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) throws Exception{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st;

        double sum = 0;
        double cnt = 0;

        Map<String, Double> grades = new HashMap<>();
        grades.put("A+", 4.5);
        grades.put("A0", 4.0);
        grades.put("B+", 3.5);
        grades.put("B0", 3.0);
        grades.put("C+", 2.5);
        grades.put("C0", 2.0);
        grades.put("D+", 1.5);
        grades.put("D0", 1.0);
        grades.put("F", 0.0);
        grades.put("P", 0.0);

        for (int i = 0; i < 20; i++) {
            st = new StringTokenizer(br.readLine());
            String str = st.nextToken();
            String n = st.nextToken();
            double hak = 0;
            hak += (n.charAt(0)-'0');
            if (n.charAt(2)=='5'){
                hak += 0.5;
            }

            String grade = st.nextToken();

            if (!grade.equals("P")) cnt+=hak;
            sum += grades.get(grade) * hak;
        }
        String result = String.format("%.6f",sum / cnt);
        bw.write(result);
        bw.flush();
        bw.close();

    }
}

