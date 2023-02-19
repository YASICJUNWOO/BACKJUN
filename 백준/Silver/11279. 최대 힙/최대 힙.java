import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) throws Exception{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st;

        PriorityQueue<Integer> list = new PriorityQueue<>(Collections.reverseOrder());
        int test = Integer.parseInt(br.readLine());

        for (int i = 0; i < test; i++) {
            int input = Integer.parseInt(br.readLine());
            if(input==0){
                if(list.isEmpty()){
                    bw.write("0\n");
                }
                else{
                    bw.write(String.valueOf(list.peek()+"\n"));
                    list.remove();
                }
            }
            else{
                list.add(input);
            }

        }

        bw.flush();
        bw.close();

    }
}

