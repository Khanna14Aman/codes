import java.util.ArrayList;

import java.util.Iterator;

public class Main{
    public static void main(String []args){
        ArrayList<Integer>arr = new ArrayList<>();
        arr.add(23);
        arr.add(423);
        arr.add(11);

        System.out.println(arr);

        System.out.println(arr.get(2));
        
        ArrayList<Integer>list = new ArrayList<>();
        list.add(234);//o(n)
        list.add(0,33);
        arr.addAll( list);//o(n)
        System.out.println(arr);
        
        arr.remove(2);//o(n)
        System.out.println(arr);
        
        arr.remove(Integer.valueOf(33));//o(n)
        System.out.println(arr);
        
        arr.set(2,1000);//set value of index 2 to 1000
        System.out.println(arr);
        System.out.println(arr.contains(237));
        
        for(int i=0;i<arr.size();i++){
            System.out.println(arr.get(i)*2);
        }
        
        for(Integer ele:arr){
            System.out.println(ele*2);
        }
       
        Iterator<Integer>it = arr.iterator();
        System.out.println(it.next());
        System.out.println(it.hasNext());

        while(it.hasNext()){
            System.out.println(it.next());
        }

        arr.clear();
        System.out.println(arr);

    }
}