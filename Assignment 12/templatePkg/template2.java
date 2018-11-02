package templatePkg;
import java.util.*;
import java.lang.*;
public class template2<T,U>{
	private T var1;
	private U var2;
	public void getVariables(T v1,U v2){
			var1 = v1;
			var2 = v2;
	}
	public void display(){
			Scanner sc = new Scanner(System.in);
			String input;
			try{
				System.out.println("Enter the variable name to be displayed");
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
				System.out.println("String empty");
			}
			catch(RuntimeException r){
				System.out.println("Caught RuntimeException");
				System.out.println("Not a valid variable name");
			}
			finally{
				System.out.println("In the finally block");
			}
	}
}