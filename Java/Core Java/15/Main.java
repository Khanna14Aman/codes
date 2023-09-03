import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileWriter;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        // Creating a file
        // File obj = new File("../abc.txt");
        // File obj = new File("abc.txt");

        // try {
            
        //     obj.createNewFile();
        // } catch (Exception e) {
        //     System.out.println(e);
        // }


        // Writing a file
        // try {
        //     FileWriter fileWriter = new FileWriter( "abc.txt");
        //     fileWriter.write("Hellow this is aman here");
        //     fileWriter.append("This is my house");
        //     fileWriter.write("sdfhskdfidshfi\nuhsduifhsdiufhdusfkjdnhfjhfhffhnsdfhsdh");
        //     fileWriter.close();
        // } catch (Exception e) {
        //     System.out.println(e);
        //     // TODO: handle exception
        // }


        // Reading a file
        // File file = new File("abc.txt");
        // try {
        //     Scanner sc = new Scanner(file);
        //     while(sc.hasNextLine()){
        //         System.out.println(sc.nextLine());
        //     }
        //     sc.close();
        // } catch (FileNotFoundException e) {
        //     // TODO Auto-generated catch block
        //     System.out.println(e);
        //     e.printStackTrace();
        // }
        

        // Deleting a file
        File file = new File("../abc.txt");
        if(file.delete()){
            System.out.println("Deleted file successfully named : "+file.getName());
        }

    }    
}
