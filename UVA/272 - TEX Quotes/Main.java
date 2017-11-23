public class Main {

    public static void main(String[] args) {
        java.util.Scanner sc = new java.util.Scanner(System.in).useDelimiter("");
        String linha;
        boolean status = false;
        while(sc.hasNext()){
            linha = sc.next();
            if(!linha.equals("\"")){
                System.out.print(linha);
            }
            else{
                if(!status)
                    System.out.print("``");
                else
                    System.out.print("''");
                status = !status;
            }
        }
    }
}
