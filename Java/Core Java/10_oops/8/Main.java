abstract class Base{
    abstract public void meth();
}
class Derive extends Base{
    public void meth(){
        System.out.println("This is override function of abstract base class");
    }
}
class Derive2 extends Derive{
    public void fun(){
        System.out.println("this is fun function of Derive2 class");
    }
}
public class Main{
    public static void main(String[] args) {
        Derive2 obj = new Derive2();
        obj.fun();
    }
}