class Base extends Thread{
    public Base(String name){
        super(name);
    }
    public void run(){
        while(true){
            System.out.println(this.getName());
        }
    }
}
public class Main {
    public static void main(String[] args) {
        Base obj1 = new Base("1");
        Base obj2 = new Base("2");
        Base obj3 = new Base("3");
        Base obj4 = new Base("4");
        Base obj5 = new Base("5");
        obj5.setPriority(Thread.MAX_PRIORITY);
        obj1.setPriority(Thread.MIN_PRIORITY);
        obj2.setPriority(Thread.MIN_PRIORITY);
        obj3.setPriority(Thread.MIN_PRIORITY);
        obj4.setPriority(Thread.MIN_PRIORITY);
        obj1.start();
        obj2.start();;
        obj3.start();
        obj4.start();
        obj5.start();
        // System.out.println("Id of this thread is "+obj1.threadId());
        // System.out.println("Name of this thread is "+obj1.getName());
        // System.out.println("Id of second thread is "+obj2.threadId());
        // System.out.println("Name of second thread is "+obj2.getName());
    }
}
