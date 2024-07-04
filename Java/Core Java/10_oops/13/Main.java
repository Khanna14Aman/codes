class Base1 extends Thread{
    public void run(){
        int i=0;
        while(i<200){
            System.out.println("Thread 1");
            i++;
        }
    }
}
class Base2 extends Thread{
    public void run(){
        int i=0;;
        while(i<200){
            System.out.println("Thread 2");
            i++;
        }
    }
}
public class Main {
    public static void main(String[] args) {
        Base1 obj1 = new Base1();
        Base2 obj2 = new Base2();
        obj1.start();
        obj2.start();
    }    
 }
