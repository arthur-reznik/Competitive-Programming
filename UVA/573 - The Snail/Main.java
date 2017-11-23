import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int height,slide,dia;
        double height_atual,climb,stamina;
        height = sc.nextInt();
        climb = sc.nextDouble();
        slide = sc.nextInt();
        stamina = sc.nextDouble();

        while(height > 0){

            height_atual = 0;
            stamina = climb * (stamina/100);
            dia = 0;
            while(height_atual >= 0 && height > height_atual){
                height_atual += climb;
                climb -=stamina;
                if(climb < 0)
                    climb = 0;

                if(height_atual <=height)
                    height_atual-=slide;

                dia++;
            }
            System.out.printf("%s on day %d\n", height_atual >  0 ? "success" : "failure", dia);

            height = sc.nextInt();
            climb = sc.nextDouble();
            slide = sc.nextInt();
            stamina = sc.nextDouble();
        }
    }
}
