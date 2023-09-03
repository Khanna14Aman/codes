import java.util.HashSet;
import java.util.LinkedHashSet;
import java.util.Set;
import java.util.TreeSet;

public class Main {
    public static void main(String[] args) {
        // Set<Integer>st = new HashSet<>(); // order not maintained value appears randomly  // all operation take o(1)
        // Set<Integer>st = new LinkedHashSet<>(); // order maintained value showed in the order they inserted.
        Set<Integer>st = new TreeSet<>();// all elements appears in sorted order // all operation take o(n)
        st.add(23);
        st.add(234);
        st.add(55);
        st.add(552343);
        System.out.println(st);
        System.out.println(st.size());
        System.out.println(st.isEmpty());
        System.out.println(st.contains(33));
        st.clear();
        System.out.println(st);
    }    
}
