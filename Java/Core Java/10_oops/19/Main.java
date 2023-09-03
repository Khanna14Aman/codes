public class Main{
    public static void fun(int a){
        try{
            int b = 12;
            System.out.println(b/a);
            return ;
        }catch(Exception e){
            System.out.println(e);
        }
        finally{
            System.out.println("This is finnnaly block");
        }
    }
    public static void main(String[] args) {
        int a = 12;
        int b = 5;
        // while(true){
        //     try{
        //         System.out.println(a/b);
        //     }catch(Exception e){
        //         System.out.println(e);
        //         break;
        //     }
        //     finally{
        //         System.out.println("Here the value of b is "+b);
        //     }
        //     b--;
        // }

        fun(0);

    }
}