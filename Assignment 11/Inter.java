import java.lang.System.*;
public interface Inter{
    static void collatz(int i){
        if( i == 1){
            System.out.println(i);
            return;
        }
        else{
            System.out.println(i);
            i = (i%2 == 0)?i/2:3*i+1; 
            collatz(i);   
        }
    }
}