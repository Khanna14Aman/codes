interface Demo{
    void fun1(int a);
}
public class Main {
    public static void main(String[] args) {
        Demo obj = (a)->{
            System.out.println("this is fun1 "+a);
        };
        obj.fun1(3);

    }    
}
