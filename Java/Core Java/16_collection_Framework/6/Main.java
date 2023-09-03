import java.util.ArrayList;

public class Main {
    public static void main(String[] args) {
        ArrayList<ArrayList<Integer>>arr = new ArrayList<>();
        ArrayList<Integer>temp = new ArrayList<>();
        temp.add(23);
        temp.add(334);
        arr.add(temp);
        System.out.println(arr);
    }    
}
