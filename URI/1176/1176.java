import java.io.IOException;
import java.util.Scanner;

/**
 * IMPORTANT:
 *      O nome da classe deve ser "Main" para que a sua solução execute
 *      Class name must be "Main" for your solution to execute
 *      El nombre de la clase debe ser "Main" para que su solución ejecutar
 */
public class Main {

    public static void main(String[] args) throws IOException {
        fibo f = new fibo();
        java.util.Scanner sc = new java.util.Scanner(System.in);
        int n = sc.nextInt();
        int x;
            for (int i = 0; i < n; i++) {
            x = sc.nextInt();
            System.out.print("Fib("+x+") = "+f.fib2(x)+"\n");
            }
    }
}

class fibo{
       public long fib2(int n){
        long a=1,b=1,c=a+b;
        if (n <1) {
            return 0;
        }
        if(n < 3){return 1;}
        for (int i = 3; i < n; i++) {
            a = b;
            b = c;
            c = a+b;
        }
            return c;
    }
}
