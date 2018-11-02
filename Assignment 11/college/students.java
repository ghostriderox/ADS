package college;

import java.util.Scanner;

public class students{
    static int i = 5;
    static String names[] = {"A","B","C","D","E",null,null,null};
    static String studentPassword = "XYZ";
    static public void display(){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter password: ");
        String password = sc.next();
        if(password.equals(studentPassword)){
            for(String x:names){
                if(x != null){
                    System.out.println(x);
                }
            }
        }
        else{
            System.out.println("Wrong password.");
        }
    }
    static public void addStudent(){
        System.out.println("Enter password: ");
        Scanner sc = new Scanner(System.in);
        String password = sc.next();
        if(password.equals(studentPassword)){
            System.out.println("Enter the name : ");
            String name = new String(sc.next());
            names[i] = name;
        }
        else{
            System.out.println("Wrong password.");
        }
    }
}