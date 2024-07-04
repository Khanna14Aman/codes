// class Base{
//     public int x;
//     public void setX(int n){
//         System.out.println("this is base class called");
//         x = n;
//     }
//     public void getX(){
//         System.out.println(x);
//     }
// } 
// class derived extends Base{
//     public int y;
//     public void setY(int n){
//         System.out.println("this is derive class called");
//         y = n;
//     }
//     public void getY(){
//         System.out.println(y);;
//     }
// }


class Base{
    public Base(){
        System.out.println("This is base class constructor");
    }
    public Base(int a){
        System.out.println("This is base class argumented constructor");
    }
}
class Derive extends Base{
    public Derive(){
        // Above in base class parameterized constructor is define so jvm will need manually define default constructor in base class.
        // super(2); //if you use this super keyword then you can call the constructor of base calss with arguments
        System.out.println("This is derive class constructor");
    }
}
public class Main {
    public static void main(String[] args) {
        // derived objx = new derived();
        // objx.setX(2);
        // objx.getX();
        // objx.setY(32);
        // objx.getY();
        // Base b = new Base();

        Derive d = new Derive();

    }    
}
