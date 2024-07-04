public class Main {


    static int fibo(int n){
        if(n==1 || n==0)return n;
        return fibo(n-1)+fibo(n-2);
    }

    // static int fact(int n){
    //     if(n==1 || n==0){
    //         return 1;
    //     }
    //     return n*fact(n-1);
    // }

    // static void fun(int a,int ...arr){
    //     System.out.println("this is first funciton");
    // }

    // static void fun(int a){
    //     System.out.println("this is second funvtion");
    // }

    // static int findSum(int ...arr){
    //     int sum = 0;
    //     for(int it:arr){
    //         sum+=it;
    //     }
    //     return sum;
    // }


    // static void foo(){
    //     System.out.println("This is foo");
    // }
    // static void foo(int a){
    //     System.out.println("this is foo"+a);
    // }
    // static void foo(double a){
    //     System.out.println("this is foo double");
    // }
    // static void foo(int a,int b){
    //     System.out.println("this is foo a,b");
    // }

    // static void fun(int []arr){
    //     arr[0] = 2222;
    // }
    // static int findMaxi(int a,int b){
    //     return Math.max(a,b);
    // }
    // int findMini(int a,int b){
    //     return Math.min(a,b);
    // }
    public static void main(String[] args) {
        // System.out.println(findMaxi(22,3));
        // Main obj = new Main();
        // System.out.println(obj.findMini(2,3));


        // int []marks = {2,3,5,5,2343};
        // fun(marks);
        // System.out.println(marks[0]);

        // foo();
        // foo(1);
        // foo(2.9);
        // foo(1,2);

        // System.out.println(findSum());
        // System.out.println(findSum(1,2,3));
        // System.out.println(findSum(2,3,2,3434,3434));


        // fun(2);

        // System.out.println(fact(0));

        System.out.println(fibo(3));
    }
}
