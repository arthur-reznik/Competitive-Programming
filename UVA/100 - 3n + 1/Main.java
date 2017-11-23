
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
                Scanner sc = new Scanner(System.in);
        int maior,temp;
        long n;
        int i,j;
        while(sc.hasNext()) {
            maior = 0;
            i = sc.nextInt();
            j = sc.nextInt();
            System.out.print(i + " "+j+" ");
            if( i > j){
                int a = i;
                i = j;
                j = a;
            }

            for(int k = i; k < j; k++){
                n = i;
                temp = 1;
                while (n != 1) {
                    if (n % 2 == 1) {
                        n = 3 * n + 1;
                        n /=2;
                        temp+=2;
                    }
                    else {
                        n = n / 2;
                        temp++;
                    }
                }

                if (temp > maior) {
                    maior = temp;
                }
            }
            System.out.println(maior);
        }
    }
}
