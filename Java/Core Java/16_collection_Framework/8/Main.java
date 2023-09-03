import java.util.HashMap;
import java.util.Map;
import java.util.TreeMap;

public class Main {
    public static void main(String[] args) {
        // Map<String,Integer>mpp = new HashMap<>(); // value stored randomly // t.c = o(1) for all
        Map<String,Integer>mpp = new TreeMap<>();  // value sorted according to key in ascending order // t.c = o(n) for all 
        mpp.put("one", 1);
        mpp.put("two",2);
        mpp.put("three",3);
        mpp.put("four",4);
        mpp.putIfAbsent("four", 44);
        mpp.putIfAbsent("five", 5);
        System.out.println(mpp);
        System.out.println(mpp.containsKey("five"));
        System.out.println(mpp.size());
        System.out.println(mpp.isEmpty());
        for (Map.Entry<String,Integer>e:mpp.entrySet()){
            System.out.println(e.getKey());
            System.out.println(e.getValue());
        }
        System.out.println(mpp.keySet());
        for(String key:mpp.keySet()){
            System.out.println(key);
        }
        for(Integer value:mpp.values()){
            System.out.println(value);
        }
        System.out.println(mpp.containsValue(33));
        System.out.println(mpp.containsValue(4));
        mpp.remove("five");
        System.out.println(mpp);
        mpp.clear();
    }    
}
