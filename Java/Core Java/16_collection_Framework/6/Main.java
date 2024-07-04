import java.util.ArrayList;
import java.util.LinkedList;

public class Main {
    public static void main(String[] args) {
        ArrayList<ArrayList<Integer>>arr = new ArrayList<>();
        ArrayList<Integer>temp = new ArrayList<>();
        temp.add(23);
        temp.add(334);
        arr.add(temp);
        arr.add(temp);
        System.out.println(arr);
        
        
        
        LinkedList<LinkedList<Integer>> arr2 = new LinkedList<>();
        LinkedList<Integer>def = new LinkedList<>();
        def.add(32432);
        def.add(3423);
        arr2.add(def);
        arr2.add(def);
        System.out.println(arr2);
    }    
}
