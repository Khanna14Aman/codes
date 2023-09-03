 // number picker game;
import java.util.Random;
import java.util.Scanner;

class Game{
    private String name;
    private int number;
    private int chance;
    public Game(String _name){
        name = _name;
        Random ran = new Random();
        int value = ran.nextInt();
        value %= 100;
        value += 100;
        value %= 100;
        number = value;
    }
    private int choose(int n){
        if(number>n){
            return 0;
        }
        else if(number<n){
            return 2;
        }
        return 1;
    }
    public boolean pickNum(int num){
        int get = choose(num);
        if(get==2){
            System.out.println("Please pick lower number");
            chance++;
            return false;
        }
        else if(get==0){
            chance++;
            System.out.println("Please pick larger number");
            return false;
        }
        else {
            System.out.println("Congratulations you picked up right number in "+chance+" number of time");
        }
        return true;
    }
}
public class Main{
    public static void main(String[] args) {
        Game obj = new Game("Player");
        System.out.println("Please pick any number");
        Scanner sc = new Scanner(System.in);
        while(true){
            int n = sc.nextInt();
            boolean exit = obj.pickNum(n);
            if(exit)break;
        }       
    }
}