import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.Arrays;
import java.util.HashSet;
import java.util.StringTokenizer;

public class Main {

    public static boolean BS(int[] arr, int n){

        int left = 0;
        int right = arr.length - 1;
        int mid;

        while (left <= right) {
            mid = (left + right) / 2;
            if (arr[mid] < n) {
                left = mid + 1;
            } else if (arr[mid] > n) {
                right = mid - 1;
            }
            else {
                return true;
            }
        }
        return false;
    }

    public static void main(String[] args) throws Exception{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st;


        HashSet<Integer> set = new HashSet<>();

        String str;

        int nums = Integer.parseInt(br.readLine());

        int[] numList = new int[nums];

        st = new StringTokenizer(br.readLine()," ");

        for (int i = 0; i < nums; i++) {
            int num = Integer.parseInt(st.nextToken());
            numList[i] = num;
        }

        nums = Integer.parseInt(br.readLine());

        Arrays.sort(numList);

        st = new StringTokenizer(br.readLine());
        for (int i = 0; i < nums; i++) {
            int n = Integer.parseInt(st.nextToken());
            if (BS(numList, n)){
                bw.write("1 ");
            }
            else{
                bw.write("0 ");
            }
        }
        
        bw.flush();
        bw.close();

    }
}

