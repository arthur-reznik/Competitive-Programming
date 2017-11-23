import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int h, m, s, c;
        String linha;
        while(sc.hasNext()) {
            linha = sc.nextLine();
            h = Integer.parseInt(linha.substring(0,2));
            m = Integer.parseInt(linha.substring(2,4));
            s = Integer.parseInt(linha.substring(4,6));
            c = Integer.parseInt(linha.substring(6,8));
            long sum;
            sum = c*10+s*1000L+m*60000L+h*3600000L;
            h = (int) sum/8640000;
            sum %= 8640000;
            m = (int) sum/86400;
            sum %= 86400;
            s = (int) sum/864;
            sum %= 864;
            c = (int) sum*100/864;
            System.out.printf("%d%02d%02d%02d\n", h, m, s, c);
        }

    }
}
