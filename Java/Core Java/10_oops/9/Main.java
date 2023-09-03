interface Example{
    public void decrement(int n);
    public void increment(int n);
}
class Derive implements Example{
    int speed = 7;
    public void decrement(int n){
        speed-=n;
    }
    public void increment(int n){
        speed+=n;
    }
}
public class Main {
    public static void main(String[] args) {
        Derive obj = new Derive();
        obj.decrement(2);
        System.out.println(obj.speed);
        obj.increment(23);
        System.out.println(obj.speed);
    }    
}
