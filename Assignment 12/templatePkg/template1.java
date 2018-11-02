package templatePkg;
import java.util.*;
import java.lang.*;
public class template1<T>{
		private T var1;
		private T var2;
		public void getVariables(T v1,T v2){
			var1 = v1;
			var2 = v2;
		}
		public void display(){
			String input;
			try{
				System.out.println("Enter the name of the variable: ");
				Scanner sc = new Scanner(System.in);
				input = sc.next();
				if(input.equals(null)){
					NullPointerException n = new NullPointerException();
					throw n;
				}
				else if(input.equals("var1")){
					System.out.println(var1);
				}
				else if(input.equals("var2")){
					System.out.println(var2);
				}
				else{
					RuntimeException r = new RuntimeException();
					throw r;
				}
			}
				catch(NullPointerException n){
					System.out.println("Caught NullPointerException");
				}
				catch(RuntimeException r){
					System.out.println("Caught RuntimeException");
				}
				finally{
					System.out.println("In the finally block");
				}
			
		}
		
}