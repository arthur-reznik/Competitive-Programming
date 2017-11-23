public class Main {

    public static void main(String[] args) {
        java.util.Scanner sc = new java.util.Scanner(System.in);
        String linha;
        String[] v;
        char[] x;
        while(sc.hasNext()){
            linha = sc.nextLine();
            v = linha.split(" ");
            for (int i = 0; i < v.length; i++) {
                x = v[i].toCharArray();
                for (int j = x.length-1; j >= 0; j--) {
                    System.out.print(x[j]);
                }
                if(i != v.length-1)
                    System.out.print(" ");
            }
            System.out.println();
        }
    }
}
