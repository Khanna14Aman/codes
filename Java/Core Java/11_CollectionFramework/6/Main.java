import java.time.LocalDate;
import java.time.LocalDateTime;
import java.time.LocalTime;
import java.time.format.DateTimeFormatter;
import java.util.Calendar;
   
public class Main {
    public static void main(String[] args) {
        // LocalDateTime date = LocalDateTime.now();
        // System.out.println(date);
        // DateTimeFormatter df = DateTimeFormatter.ofPattern("yy-dd/mm -- E H:m a ");
        // DateTimeFormatter df2 = DateTimeFormatter.ISO_LOCAL_DATE_TIME;

        // String ans = date.format(df);
        // System.out.println(ans);
        System.out.println(LocalDate.now());
        System.out.println(LocalTime.now());
    }    
}