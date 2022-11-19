public class test extends c{
    public static void main(String[]args){
        c obj=new c();
        obj.m();
    }
}
//////////////////////////////////////////////////////////////////////

public class c implements a,b {
    public abstract void m() {
        System.out.println("okay");
    }
}
//////////////////////////////////////////////////////////////////////

public interface b {
    public abstract void m();
}
/////////////////////////////////////////////////////////////////////

public interface a {
    public abstract void m();
}
