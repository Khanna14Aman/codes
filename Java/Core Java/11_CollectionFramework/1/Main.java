import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;
import java.util.Comparator;
import java.util.LinkedList;
import java.util.ListIterator;

import javax.swing.text.html.HTMLDocument.Iterator;

public class Main{
    public static void main(String[] args) { 
        // ArrayList<Integer>arr = new ArrayList<>();
        LinkedList<Integer>arr = new LinkedList<>();
        arr.add(23);
        arr.add(23432);
        arr.add(13);
        arr.add(342423);
        ArrayList<Integer>arr2 = new ArrayList<>();
        arr2.add(33);
        arr2.add(2342);
        arr2.add(65656);
        arr.addAll( arr2);
        System.out.println(arr);
        arr.add(0,11111);
        System.out.println("size of arr2 is : "+arr2.size());
        for(int i=0;i<arr.size();i++){
            System.out.println(arr.get(i));
        }
        arr.remove(0);
        System.out.println(arr.get(0));
        System.out.println(arr.size());
        arr.clear();
        System.out.println(arr.size());
        arr.add(2);
        arr.add(3);
        arr.add(2);
        arr.add(3);
        System.out.println(arr.contains(2));
        System.out.println(arr.indexOf(2));
        System.out.println(arr.indexOf(3));
        System.out.println(arr.indexOf(4));
        System.out.println(arr.lastIndexOf(2));
       System.out.println(arr.clone());
       System.out.println(arr);
       arr.add(2,23);
       System.out.println(arr);
       arr.addFirst(993);  // This is funciton comes only under linkedclist not in arraylist
       System.out.println(arr);
        arr.sort(Comparator.reverseOrder());
        System.out.println(arr);
        System.out.println(arr.poll());
        System.out.println(arr);
        System.out.println(arr.pop()); 
        System.out.println(arr);
        arr.add(2);
        System.out.println(arr);
        System.out.println(arr.pop());
        System.out.println(arr);
        System.out.println(arr.removeLast());
        System.out.println(arr);
        Collections.reverse(arr);
        System.out.println(arr);
        System.out.println(arr.isEmpty());
        System.out.println(arr.getFirst());
        System.out.println(arr.getLast());
        System.out.println(arr.removeFirst());
        System.out.println(arr);
        arr.set(1, 3333);// set will replace the value with index 1 value;
        System.out.println(arr);
        ListIterator<Integer>it = arr.listIterator();
        while(it.hasNext()){
            System.out.println(it.next());
        }

    }  
}