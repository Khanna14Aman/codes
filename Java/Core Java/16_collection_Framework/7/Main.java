import java.util.ArrayList;
import java.util.HashSet;
import java.util.LinkedHashSet;
import java.util.Set;
import java.util.TreeSet;

public class Main {
    public static void main(String[] args) {
        HashSet<Integer>st = new HashSet<>(); // order not maintained value appears randomly  // all operation take o(1)
        // LinkedHashSet<Integer>st = new LinkedHashSet<>(); // order maintained value showed in the order they inserted o(1).
        // TreeSet<Integer>st = new TreeSet<>();// all elements appears in sorted order // all operation take o(log(n))
        st.add(23);
        st.add(234);
        st.add(55);
        st.add(552343);
        st.add(23);
        st.add(234);
        st.add(33);
        System.out.println(st);
        // System.out.println(st.first());
        // System.out.println(st.pollFirst());
        // System.out.println(st.pollLast());
        // System.out.println(st.last());
        System.out.println(st);
        System.out.println(st.size());
        System.out.println(st.isEmpty());
        System.out.println(st.contains(33));
        System.out.println(st.remove(33));
        System.out.println(st);
        Integer [] arra = st.toArray(new Integer[st.size()]);
        System.out.println(arra[1]);
        for(Integer obj:st){
            System.out.println(obj);
        }
        st.clear();
        System.out.println(st);

        



        Set<ArrayList<Integer>>stt = new HashSet<>();
        ArrayList<Integer>ar = new ArrayList<>();
        ar.add(2);
        ar.add(3);
        stt.add(ar);
        System.out.println(stt.contains(ar));
        ArrayList<Integer>arr = new ArrayList<>();
        arr.add(2);
        arr.add(3);
        stt.add(arr);
        System.out.println(stt);
        System.out.println(stt.contains(arr));
    }    
}
