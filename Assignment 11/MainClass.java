import java.util.Scanner;

import college.*;
class MainClass implements Inter{
    static short a;
    public static void main(String argv[]){
          /*int l[] = {1,3,4,5,6,7};
          for(int x : l){
              System.out.println(x);
          }
          Inter.collatz(63);
          college.students.display();
          college.teachers.display();
          college.teachers.addFaculty();
          college.teachers.display();
          */
          
          String c = "y";
          Scanner sc = new Scanner(System.in);
          while(!c.equals("n")){
            System.out.println("======MENU=====");
            System.out.println("Enter 1 to display Collatz Conjecture");
            System.out.println("Enter 2 to access students' portal");
            System.out.println("Enter 3 to access teachers' portal");
            System.out.println("Your option: ");
            int i = sc.nextInt();
            switch(i){
                case 1:
                    System.out.println("Enter your number: ");
                    int number = sc.nextInt();
                    System.out.println("The conjecture is: ");
                    Inter.collatz(number);
                    break;
                case 2:
                    System.out.println("Enter 1 to add data");
                    System.out.println("Enter 2 to display data");
                    System.out.println("Your option: ");
                    int option1 = sc.nextInt();
                    if(option1 == 1){
                        college.students.addStudent();
                    }
                    else if(option1 == 2){
                        college.students.display();
                    }
                    else{
                        System.out.println("Invalid option");
                    }
                    break;
                case 3:
                    System.out.println("Enter 1 to add data");
                    System.out.println("Enter 2 to display data");
                    System.out.println("Your option: ");
                    int option2 = sc.nextInt();
                    if(option2 == 1){
                        college.teachers.addFaculty();
                    }
                    else if(option2 == 2){
                        college.teachers.display();
                    }
                    else{
                        System.out.println("Invalid option");
                    }
                    break;
                default:
                    System.out.println("Invalid option");
                    break;             
            }
            System.out.println("Want to repeat? ([y] or n): ");
            c = sc.next();
          }
    }
}