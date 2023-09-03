import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.List;

public class Main {
    public static void main(String[] args) {
        List<Integer>list = new ArrayList<>();
        list.add(2);
        list.add(4);
        list.add(2);
        list.add(66);
        list.add(221);
        System.out.println(list);
        Collections.sort(list);
        System.out.println(list);
        Collections.sort(list,Comparator.reverseOrder());
        System.out.println(list);
        System.out.println(Collections.frequency(list,23));
    }    
}
