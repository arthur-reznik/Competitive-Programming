import java.io.IOException;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.List;

public class Main {

    public static void main(String[] args) throws  IOException {
        BufferedReader sc = new BufferedReader(new InputStreamReader(System.in));
        crivo c = new crivo(100000);
        c.calcular();
        String limite;
        while ((limite = sc.readLine()) != null) {
              c.preCalc(Integer.parseInt(limite));
        }
    }
}

class crivo{

    private boolean[] primo;
    private final int limite = 20000000;
    private List<Integer> primos;
    private List<Pair> pares;
    private int target;
    private int max_target;

    public crivo(int target){
        this.target = target;
        max_target = target;
        primo = new boolean[limite];
        primos = new ArrayList<>();
        pares = new ArrayList<>();
    }

    private void imprimir(int st,int nd){
        System.out.println("("+st+", "+nd+")");
    }

    public void calcular(){
        int ant=0;
        for (int i = 3; i < limite; i+=2) {
            //se ja tiver sido incrementado é pq é multiplo de um numero anterior
            if(primo[i])
                continue;
            primo[i] =true;
            if(!primos.isEmpty()){
                acharPar(ant,i);
                if(target==0){
                    primos.add(i);
                    return;
                }
            }
            primos.add(i);
            ant = i;
            for (int j = i; j < limite; j+=i) {
                //incrementa de i em i para marcar todos os multiplos de i
                int aux =j;
                while(aux %i==0){
                    primo[j] = true;
                    aux/=i;
                }
            }
        }

        for (int i = 2; i < limite; i++) {
            primo[i] = primo[i-1];
        }
    }

    public void acharPar(int st,int nd) {
        if (st == nd-2) {
            pares.add(new Pair(st,nd));
            target--;
        }
    }

    public void preCalc(int i){
        if(i <= max_target) {
            imprimir(pares.get(i-1).getSt(),pares.get(i-1).getNd());
        }
        else{
            target = i-max_target;
            max_target = i;
            calcular();
        }

    }


}

class Pair{
    private int st;
    private int nd;


    public Pair(int st,int nd){
        this.st = st;
        this.nd = nd;
    }

    public int getSt(){
        return st;
    }

    public int getNd(){
        return nd;
    }
}

