import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int a, b, c;

        Scanner sc = new Scanner(System.in);
        a = sc.nextInt();
        b = sc.nextInt();
        c = sc.nextInt();

        int gop = a * b * c;
        int[] cnt = {0,0,0,0,0,0,0,0,0,0};
        while(gop>10){
            cnt[gop % 10]++;
            gop /= 10;
        }
        cnt[gop]++;

        for (int i=0;i<10;i++){
            System.out.println(cnt[i]);
        }
    }
}

