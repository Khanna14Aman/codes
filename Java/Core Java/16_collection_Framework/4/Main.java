import java.util.Comparator;
import java.util.PriorityQueue;

public class Main {
    public static void main(String[] args) {
        // PriorityQueue<Integer>pq = new PriorityQueue<>();// Min Priority Queue
        PriorityQueue<Integer>pq = new PriorityQueue<>(Comparator.reverseOrder());// Max Priority Queue
        pq.offer(23);
        pq.offer(22);
        pq.offer(2);
        pq.offer(12);
        System.out.println(pq);
        System.out.println(pq.peek());
        pq.poll();
        System.out.println(pq);
        System.out.println(pq.peek());
        System.out.println(pq.isEmpty());
        pq.clear();
        System.out.println(pq.size());
    }    
}
