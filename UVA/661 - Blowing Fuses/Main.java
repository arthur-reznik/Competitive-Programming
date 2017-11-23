import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int qt_ap,qt_switch,lim,seq, swt_act,pw_max,pw_act;
        boolean status[],flag;
        int pot[];
        seq = 1;

        qt_ap = sc.nextInt();
        qt_switch = sc.nextInt();
        lim = sc.nextInt();

        while( qt_ap != 0 ){
            status = new boolean[qt_ap+1];
            pot = new int[qt_ap+1];
            pw_act = 0;
            flag = true;
            pw_max = 0;

            for (int i = 1; i <= qt_ap; i++) {
                pot[i] = sc.nextInt();
            }
            for (int i = 1; i <= qt_switch; i++) {
                swt_act = sc.nextInt();
                if(status[swt_act])
                    pw_act -=pot[swt_act];
                else{
                    pw_act +=pot[swt_act];

                    if(pw_act > lim)
                        flag = false;
                    else if (pw_act > pw_max)
                        pw_max = pw_act;
                }
                status[swt_act] = !status[swt_act];
            }

            System.out.printf("Sequence %d\n",seq);
            System.out.printf("Fuse was %s\n", (flag ? "not blown.":"blown.\n"));
            if(flag)
                System.out.printf("Maximal power consumption was %d amperes.\n\n",pw_max);
            seq++;


            qt_ap = sc.nextInt();
            qt_switch = sc.nextInt();
            lim = sc.nextInt();
        }

    }
}
