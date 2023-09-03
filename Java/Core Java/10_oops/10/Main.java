interface First{
    void meth1();
    void meth2();
}
interface Second extends First{
    void meth3();
    void meth4();
}
class Derive implements Second{
    public void meth3(){
        System.out.println("meth3");
    }
    public void meth4(){
        System.out.println("meth4");
    }
    public void meth1(){
        System.out.println("meth1");
    }
    public void meth2(){
        System.out.println("meth2");
    }
}
// interface Camera{
//     void clickPicture();
//     void savePicture();
// }
// interface Multimedia{
//     void playSong();
//     default void pauseSong(){
//         System.out.println("this is pause song");
//     }
// }
// class Base{
//     public void meth(){
//         System.out.println("this is base class");
//     }
// }
// class Derive extends Base implements Camera,Multimedia{
//     public void clickPicture(){
//         System.out.println("This is clickPicture");
//     }
//     public void savePicture(){
//         System.out.println("This is savePicture");
//     }
//     public void playSong(){
//         System.out.println("this is playSong");
//     }
//     // public void pauseSong(){
//     //     System.out.println("this is pause derive function");
//     // }
// }
public class Main {
    public static void main(String[] args) {
        Derive obj = new Derive();
        // obj.meth();
        // obj.clickPicture();
        // obj.savePicture();;
        // obj.playSong();
        // obj.pauseSong();

        obj.meth1();
        obj.meth2();;
        obj.meth3();
        obj.meth4();
    }    
}
