import java.util.ArrayDeque;

public class Main {
    public static void main(String[] args) {
        ArrayDeque<Integer>dp = new ArrayDeque<>();
        System.out.println(dp.size());
        System.out.println(dp.isEmpty());
        dp.offer(23);
        dp.offerFirst(12);
        dp.offerLast(44);
        dp.offer(33);
        System.out.println(dp);

        System.out.println(dp.peek());
        System.out.println(dp.peekFirst());
        System.out.println(dp.peekLast());

        dp.poll();
        System.out.println(dp);
        dp.pollFirst();
        System.out.println(dp);
        dp.pollLast();
        System.out.println(dp);
    }    
}
