interface Camera{
    void clickPicture();
}
interface Multimedia{
    void playSong();
}
class Derive implements Camera,Multimedia{
    public void clickPicture(){
        System.out.println("this is clickPicturue");
    }
    public void playSong(){
        System.out.println("this is playSong");
    }
    public void meth(){
        System.out.println( "this is Derive class");
    }
}
public class Main {
    public static void main(String[] args) {
        Camera obj = new Derive();
        obj.clickPicture();
        // obj.playSong();
        // obj.meth();
    }    
}
