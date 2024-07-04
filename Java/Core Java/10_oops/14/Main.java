class Base1 implements Runnable{
    public void run(){
        int i=0;
        while(i++<200){
            System.out.println("1");
            
        }
    }
}
class Base2 implements Runnable{
    public void run(){
        int i=0;;
        while(i++<200){
            System.out.println("2");
        }
    }
}
public class Main {
    public static void main(String[] args) {
        Base1 obj1 = new Base1();
        Base2 obj2 = new Base2();
        Thread t1 = new Thread(obj1);
        Thread t2 = new Thread(obj2);
        t1.start();
        t2.start();
    }    
}
