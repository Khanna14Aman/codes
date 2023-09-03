import java.util.ArrayDeque;

public class Main {
    public static void main(String[] args) {
        ArrayDeque<Integer>arr = new ArrayDeque<>(20);
        System.out.println(arr.size());
        arr.add(1);
        arr.add(2);
        arr.add(3);
        arr.add(53);
        arr.addFirst(2342); 
        System.out.println(arr);
        arr.descendingIterator();
        System.out.println(arr);
        System.out.println(arr.getFirst());
        System.out.println(arr.getLast());
        System.out.println(arr.isEmpty());
    }    
}
