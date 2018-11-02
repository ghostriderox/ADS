package college;
import java.util.Scanner;
public class teachers{
    static int i = 5;
    static private String names[] = {"P","Q","R","S","T",null,null,null,null};
    static String teacherPassword = new String("ABC");
    static public void display(){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the password to access data: ");
        String password = new String(sc.next());
        if(password.equals(teacherPassword)){
            for(String x:names){
                if(x != null){
                    System.out.println(x);
                }
            }
        }
        else{
            System.out.println("Wrong Password.Forwarding to menu..");
        }
    } 
    static public void addFaculty(){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the password to access data: ");
        String password = new String(sc.next());
        if(password.equals(teacherPassword)){
            System.out.println("Enter the name of faculty: ");
            String name = new String(sc.next());
            names[i] = name;
            i++;       
        }
        else{
            System.out.println("Wrong Password.Forwarding to menu..");
        }
    }
}