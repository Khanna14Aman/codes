import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Hashtable;
import java.util.LinkedHashMap;

public class Main {
    public static void main(String[] args) {
        HashMap<Integer,Integer>arr = new HashMap<>();
        HashSet<Integer>arr1 = new HashSet<>();
        LinkedHashMap<Integer,Integer>arr2 = new LinkedHashMap<>(); 
        Hashtable<Integer,Integer>arr4 = new Hashtable<>();

        // System.out.println(arr.get(0));
        // arr.merge(1, 23,null);
        // System.out.println(arr);
        ArrayList<Integer> a = new ArrayList<>();
        a.add(43232);
        a.add(43243);
        a.add(4343);
        for(int i:a){
            System.out.println(i);
        }
        arr1.add(34);
        arr1.add(3);
        arr1.add(3);
        arr1.add(32);
        arr1.add(34);
        System.out.println(arr1);
    }
}
