import templatePkg.*;
import java.util.*;
public class MainClass{
		public static void main(String args[]){
				System.out.println("Enter 1 to select one parameter template: ");
				System.out.println("Enter 2 to select two parameters template: ");
				System.out.println("Your option : ");
				Scanner sc = new Scanner(System.in);
				int option = sc.nextInt();
				if(option == 1){
					template1<Integer> object1 = new template1<Integer>();
					System.out.println("Enter var1 and var2: ");
					int v1 = sc.nextInt();
					int v2 = sc.nextInt();
					object1.getVariables(v1,v2);
					object1.display();
				}
				else if(option == 2){
					template2<Integer,String> object2 = new template2<Integer,String>();
					System.out.println("Enter var1 and var2: ");
					int v21 = sc.nextInt();
					String v22 = sc.next();
					object2.getVariables(v21,v22);
					object2.display();
				}
				
		}
}