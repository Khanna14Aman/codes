import java.util.Random;

public class Main {
    public static void main(String[] args) {
        // int []marks = new int[5];
        // marks[0] = 2;


        // int []marks;
        // marks= new int[4];
        // marks[0] = 2;

        // int []marks = {2,3,5,5};
        // System.out.println(marks[0]);
        // System.out.println(marks[5]);

        // System.out.println(marks.length);
        // for(int element : marks){
        //     System.out.println(element);
        // }

        // int value = 1;
        // int [][]arr = new int[2][3];
        // for(int i=0;i<arr.length;i++){
        //     for(int j=0;j<arr[i].length;j++){
        //         arr[i][j] = value++;
        //     }
        // }
        // for(int i=0;i<arr.length;i++){
        //     for(int j=0;j<arr[i].length;j++){
        //         System.out.print(arr[i][j]+" ");
        //     }
        //     System.out.println();
        // }
        // String s = "232323";
        // String [][][] arr = new String [2][2][2];
        // for(int i=0;i<2;i++){
        //     for(int j=0;j<2;j++){
        //         for(int k=0;k<2;k++){
        //             arr[i][j][k] = s;
        //         }
        //     }
        // }
        // for(int i=0;i<2;i++){
        //     for(int j=0;j<2;j++){
        //         for(int k=0;k<2;k++){
        //             System.out.print(arr[i][j][k]+" ");
        //         }
        //         System.out.println();
        //     }
        // }
        System.out.println(Integer.MIN_VALUE);
        System.out.println(Integer.MAX_VALUE);
        System.out.println(Integer.min(12,23));
        System.out.println(Integer.max(23, 2323));
        System.out.println(Math.min(12, 32232));
        System.out.println(Math.max(2423, 2342342));
        System.out.println(Math.abs(23-23234));
        System.out.println(Math.pow(2, 3));
        Random ran = new Random();
        System.out.println(ran.nextInt());
    }
}
