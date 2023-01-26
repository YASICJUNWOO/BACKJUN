import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int t;
        int num;

        Scanner scanner = new Scanner(System.in);
        Map<Integer, Integer> map = new HashMap<>();
        t = scanner.nextInt();

        for (int i=0;i<t;i++){
            num = scanner.nextInt();
            if (!map.containsKey(num)) {
                map.put(num, 1);
            }
            else{
                map.put(num,map.get(num)+1);
            }
        }

        t = scanner.nextInt();
        if (map.get(t)==null){
            System.out.println(0);
        }
        else{
            System.out.println(map.get(t));
        }
            }
}
