class Base{
    public void on(){
        System.out.println("this is base class");
    }
    public void greet(){
        System.out.println("hello base");
    }
}
class Derive extends Base{
    public void on(){
        System.out.println("this is derive class");
    }
    public void greeting(){
        System.out.println("hello derive");
    }
}
public class Main {
    public static void main(String[] args) {
        Base obj = new Derive();
        // Derive obj1 = new Base();
        obj.on();
        obj.greet();
        // obj.greeting(); not allowed 

        
    }    
}
