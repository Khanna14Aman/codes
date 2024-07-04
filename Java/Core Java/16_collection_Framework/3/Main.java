import java.util.LinkedList;
import java.util.Queue;

public class Main{
    public static void main(String[] args) {
        Queue<Integer>q = new LinkedList<>();
        q.offer(2342);
        q.offer(32434);
        q.offer(3222);
        System.out.println(q);
        System.out.println(q.peek());
        System.out.println(q.isEmpty());
        q.poll();
        System.out.println(q);
        System.out.println(q.peek());
        System.out.println(q.size());
        System.out.println(q.isEmpty());
        q.clear();;
        System.out.println(q);
    }
}