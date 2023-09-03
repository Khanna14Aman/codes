import java.util.Scanner;

class Base extends Exception{
    public String toString(){
        return "This is to String";
    }
    public String getMessage(){
        return "This is getMessage";
    }
}
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        if(a<9){
            try{
                // throw new Base();
                throw new ArithmeticException("This is arithmetic");
            }catch(Exception e){
                e.printStackTrace();
                System.out.println(e.getMessage());
                System.out.println(e.toString());
                System.out.println(e);

            }
        }
        sc.close();
    }    
}
