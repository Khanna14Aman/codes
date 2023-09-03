import java.util.Arrays;

public class Main {
    public static void main(String[] args) {
        int a[] =  {2,3,3,234,324,24,324,32423,4234,23,42,2,2,2};
        Arrays.sort(a);
        for(int i:a){
            System.out.println(i);
        }
        int ind = Arrays.binarySearch(a,2);
        System.out.println(ind);
        Arrays.fill(a,23);
        for(int i:a){
            System.out.println(i);
        }
    }
}
