class Base1 extends Thread{
    public void run(){
        int i=0;
        while(i++<20000){
            try {
                Thread.sleep(1000, 0);

            } catch (Exception e) {
                System.out.println(e);
            }
            System.out.println(1);
        }
    }
}
class Base2 extends Thread{
    public void run(){
        int i=0;
        while(i++<20000){
            
            try {
                Thread.sleep(1000, 0);

            } catch (Exception e) {
                System.out.println(e);
            }
            System.out.println(2);
        }
    }
}
public class Main {
    public static void main(String[] args) {
        Base1 obj1 = new Base1();
        Base2 obj2 = new Base2();
        obj1.start();
        try {
            // obj1.join(1000);
        } catch (Exception e) {
            System.out.println(e);
        }
        obj2.start();;
    }    
}
