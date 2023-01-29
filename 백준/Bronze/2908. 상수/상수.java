import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        String a, b;
        Scanner sc = new Scanner(System.in);

        a = sc.next();
        b = sc.next();

        for (int i=2;i>=0;i--){
            if (a.charAt(i) > b.charAt(i)){
                for (int k = 2;k >= 0;k--){
                    System.out.print(a.charAt(k));
                }
                break;
            } else if (a.charAt(i) < b.charAt(i)) {
                for (int k = 2;k >= 0;k--){
                    System.out.print(b.charAt(k));
                }
                break;
            }
        }
    }
}

