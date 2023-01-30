import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int a, b, c;
        Scanner sc = new Scanner(System.in);

        a = sc.nextInt();
        b = sc.nextInt();
        c = sc.nextInt();

        int prop = c - b;
        if(prop<=0){
            System.out.println(-1);
        }
        else{
            System.out.println((a / prop)+1);
        }
    }
}

