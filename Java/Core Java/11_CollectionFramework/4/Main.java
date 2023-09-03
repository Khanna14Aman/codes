import java.util.Date;

public class Main {
    public static void main(String[] args) {
        System.out.println((System.currentTimeMillis()/1000/3600/24/365));
        System.out.println(Long.MAX_VALUE/1000/3600/24/365);
        Date a = new Date();
        System.out.println(a);
        System.out.println(a.getTime());
        Date b = new Date();
        System.out.println(a);
        System.out.println(b);
        System.out.println(a.after(b));
        System.out.println(a.equals(b));
    }
}
