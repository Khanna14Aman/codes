// Calendar is an abstract class.
import java.util.Calendar;
import java.util.GregorianCalendar;
import java.util.TimeZone;


public class Main {
    public static void main(String[] args) {
        // Calendar a = Calendar.getInstance(TimeZone.getTimeZone("Asia/Singapore"));
        Calendar a = Calendar.getInstance();
        System.out.println(a.getCalendarType());
        System.out.println(a.getTimeZone());
        System.out.println(a.getTimeZone().getID());
        System.out.println(a.get(Calendar.SECOND));
        System.out.println(a.get(Calendar.MINUTE));
        System.out.println(a.get(Calendar.MONTH));
        System.out.println(a.get(Calendar.DATE));
        System.out.println(a.get(Calendar.HOUR_OF_DAY)+":"+a.get(Calendar.MINUTE));
        System.out.println(TimeZone.getAvailableIDs()[0]);
        System.out.println(TimeZone.getDefault());
        System.out.println(TimeZone.getTimeZone("Asia/India"));
        GregorianCalendar date = new GregorianCalendar(   );
        System.out.println(date.isLeapYear(2020));
    }    
}
