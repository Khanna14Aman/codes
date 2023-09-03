interface Demo{
    void fun1();
    void fun2();
}
class Base implements Demo{
    public void fun1(){
        System.out.println("This is fun1");
    }
    public void fun2(){
        System.out.println("This is fun2");
    }
}
public class Main {
    public static void main(String[] args) {
        // Demo obj = new Base();
        // obj.fun1();

        Demo obj = new Demo() {
            public void fun1(){
                System.out.println("This is fun1");
            }
           public void fun2(){
                System.out.println("This is fun2");
            }
        };
        obj.fun1();
    }    
}