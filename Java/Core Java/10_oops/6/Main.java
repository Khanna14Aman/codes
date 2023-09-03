class Base{
    public void  meth(){
        System.out.println("this is base class");
    }
}
class Derive extends Base{
    @Override
    public void meth(){
        System.out.println("this is derive class");
    }
    public void meth1(){
        System.out.println("This is second function of derive class");
    }
}

public class Main {
    public static void main(String[] args) {
        Derive d  = new Derive();
        d.meth();
    }    
}
