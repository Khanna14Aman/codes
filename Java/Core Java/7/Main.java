import java.util.Random;
import java.util.Scanner;
public class Main{
    public static void main(String[] args) {
        Random ran = new Random();
        int t = 5;
        Scanner sc = new Scanner(System.in);
        int userWin = 0;
        int compWin = 0;
        while(t>0){
            System.out.println("Enter any value \n 0 means rock \n 1 means paper \n 2 means scissor");
            int user = sc.nextInt();
            int value = ran.nextInt();
            value %= 3;
            value += 5;
            value %=3;
            if(value==user){
                System.out.println("This game is tied");
            }
            else if(user==0 && value==1){
                compWin++;
            }
            else if(user==0 && value==2){
                userWin++;
            }
            else if(user==1 && value==0){
                userWin++;
            }
            else if(user==1 && value==2){
                compWin++;
            }
            else if(user==2 && value==0){
                compWin++;
            }
            else if(user==2 && value==1){
                userWin++;
            }
            t--;
        }
        if(userWin>compWin){
            System.out.printf("Congratulations you win the game by %d - %d series ",userWin,compWin);
        }
        else if(compWin>userWin){
            System.out.printf("Better luck next time you loose the game by %d - %d series",userWin,compWin);
        }
        else {
            System.out.println("This series is draw");
        }
        sc.close();
    }
}