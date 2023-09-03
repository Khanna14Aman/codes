import java.util.Stack;

public class Main {
    public static void main(String[] args) {
        Stack<Integer>st = new Stack<>();
        st.push(234);
        st.push(3432);
        st.push(55334);
        int a = 2343;
        st.push(a);
        System.out.println(st);
        System.out.println(st.peek());
        st.pop();
        System.out.println(st.peek());
        System.out.println(st);
        st.clear();
        System.out.println(st);
    

    }    
}
