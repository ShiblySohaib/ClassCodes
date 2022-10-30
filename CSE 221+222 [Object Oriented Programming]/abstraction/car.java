// 100% abstraction
public class car extends vehicle {
    public void move(){
        System.out.println("Car moves faster");
    }                                                   
    public static void main(String[]args){
        car c1=new car();
        c1.move();
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////


abstract class vehicle{
    public abstract void move();
}
