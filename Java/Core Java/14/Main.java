import java.util.ArrayList;
// class Base{
//     void fun(){
//         System.out.println("this is fun");
//     }
// }

class MyGenerics<T1,T2>{
    int val;
    private T1 t1;
    private T2 t2;
    public MyGenerics(int val,T1 t1,T2 t2){
        this.val = val;
        this.t1 = t1;
        this.t2 = t2;
    }
    public T1 getT1(){
        return t1;
    }
    public T2 getT2(){
        return t2;
    }
}
public class Main {
    public static void main(String[] args) {
        // ArrayList arrayList = new ArrayList<>();
        // arrayList.add("sdfsdf");
        // arrayList.add(2323);
        // arrayList.add('a');
        // Base obj = new Base();
        // arrayList.add(obj);
        // System.out.println(arrayList);
        // int a =(int)arrayList.get(1);
        // System.out.println(a);

        MyGenerics<String,Integer>arr = new MyGenerics(23, "Hello_World", 786);
        System.out.println(arr.getT1());
        System.out.println(arr.getT2());
        String ans = arr.getT1();
        int ans2 = arr.getT2();
        System.out.println(ans+"  "+ans2);
        
    }    
}
