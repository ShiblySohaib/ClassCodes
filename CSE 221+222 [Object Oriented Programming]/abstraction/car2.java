public class car2 extends vehicle{
    public void move(){
        System.out.println("Car moves faster");
    }
    public static void main(String[]args){
        car2 c1=new car2();
        c1.move();
        c1.carry();
    }
}
abstract class vehicle{
    public abstract void move();
    public void carry(){
        System.out.println("All vehicle carry loads");
    }
}
