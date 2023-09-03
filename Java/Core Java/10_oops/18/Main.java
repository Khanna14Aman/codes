class NegativeRadius extends Exception{
    public String toString(){
        return "Cannot take negative radius";
    }
    public String getMessage(){
        return "Cannot take negative radius";
    }
}
public class Main {
    public static double area(int r)throws NegativeRadius{
        if(r<0){
            throw new NegativeRadius();
        }
        return Math.PI*r*r;

    }
    public static int divide(int a,int b) throws ArithmeticException{
        return a/b;
    }
    public static void main(String[] args) {
        try {
            int c = divide(12,10);
            System.out.println(c);
        } catch (Exception e) {
            System.out.println(e);
        }
        try{

            double ans = area(-1);
            System.out.println(ans);
        } catch(Exception e){
            System.out.println(e);
        }
    }    
}
