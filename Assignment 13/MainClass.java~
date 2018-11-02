import java.util.*;
public class MainClass{
    static private ArrayList<Integer> arrList;
    static private LinkedList<Float> llist;
    static private HashSet<String> hash;
    static private TreeSet<Double> tree;
    static private Stack<Integer> stk;
	
    public static void main(String args[]){
        System.out.println("Enter 1 to select ArrayList");
        System.out.println("Enter 2 to select LinkedList");
        System.out.println("Enter 3 to select HashSet");
        System.out.println("Enter 4 to select TreeSet");
        System.out.println("Enter 5 to select Stack");

        Scanner sc = new Scanner(System.in);
        int option = sc.nextInt();
        switch(option){
            case 1:
                String c = new String();
                arrList = new ArrayList<Integer>();
                while(!c.equals("n")){
                    
                    System.out.println("Enter 1 to add element at a particular index");
                    System.out.println("Enter 2 to add element at the end of the list");
                    System.out.println("Enter 3 to display the list");
                    int nOp1  = sc.nextInt();
                    if(nOp1 == 1){
                        System.out.println("Enter the element and index: ");
                        int e1 = sc.nextInt();
                        int index  = sc.nextInt();
                        arrList.add(index,e1);
                    }
                    else if(nOp1 == 2){
                        System.out.println("Enter the element: ");
                        int e2 = sc.nextInt();
                        arrList.add(e2);
                    }
                    else if(nOp1 == 3){
                        Iterator it = arrList.iterator();
                        System.out.println("The array is: ");
                        while(it.hasNext()){
                            System.out.println(it.next());
                        }
                    }
                    else{
                        System.out.println("Invalid option");
                    }
                    System.out.println("Do you want to repeat operations? (y or n):");
                    c = sc.next();
                }
                break;
            case 2:
                String c1 = new String();
                llist = new LinkedList<Float>();
                while(!c1.equals("n")){
                    System.out.println("Enter 1 to add element at a particular index");
                    System.out.println("Enter 2 to add element at the end of the list");
                    System.out.println("Enter 3 to add element at start of the list");
                    System.out.println("Enter 4 to display the list");
                    int nOp2 = sc.nextInt();
                    if(nOp2 == 1){
                        System.out.println("Enter the element and index: ");
                        float e3 = sc.nextFloat();
                        int i2 = sc.nextInt();
                        llist.add(i2,e3);
                    }
                    else if(nOp2 == 2){
                        System.out.println("Enter the element: ");
                        float e4 = sc.nextFloat();
                        llist.addLast(e4);
                    }
                    else if(nOp2 == 3){
                        System.out.println("Enter the element: ");
                        float e5 = sc.nextFloat();
                        llist.addFirst(e5);
                    }
                    else if(nOp2 == 4){
                        System.out.println("The linked list is: ");
                        Iterator it1 = llist.iterator();
                        while(it1.hasNext()){
                            System.out.println(it1.next());
                        }
                    }
                    else{
                        System.out.println("Invalid option");
                    }
                    System.out.println("Do you want to repeat operations");
                    c1 = sc.next();
                }
                break;
            case 3:
                String c2 = new String();
                hash = new HashSet<String>();
                while(!c2.equals("n")){
                    System.out.println("Enter 1 to add element");
                    System.out.println("Enter 2 to check whether element is in the hash set");
                    System.out.println("Enter 3 to check whether the hash set is empty");
                    System.out.println("Enter 4 to remove a particular element");
                    int nOp3 = sc.nextInt();
                    if(nOp3 == 1){
                        System.out.println("Enter the element: ");
                        String e6 = sc.next();
                        hash.add(e6);
                    }
                    else if(nOp3 == 2){
                        System.out.println("Enter the element to be found: ");
                        String e7 = sc.next();
                        System.out.println("Is the element in the hash set: " + hash.contains(e7));
                    }
                    else if(nOp3 == 3){
                        System.out.println("Is the hash set empty:" + hash.isEmpty());
                    }
                    else if(nOp3 == 4){
                        System.out.println("Enter the element: ");
                        String e8 = sc.next();
                        if(hash.remove(e8)){
                            System.out.println("Object removed");
                        }
                        else{
                            System.out.println("Object not present");
                        }
                    }
                    else{
                        System.out.println("Invalid option");
                    }
                    System.out.println("Do you want to repeat operations");
                    c2 = sc.next();
                }
                break;
            case 4:
                String c3 = new String();
                tree = new TreeSet<Double>();
                while(!c3.equals("n")){
                    System.out.println("Enter 1 to add element");
                    System.out.println("Enter 2 to check whether element is in the hash set");
                    System.out.println("Enter 3 to check whether the hash set is empty");
                    System.out.println("Enter 4 to remove a particular element");
                    int nOp4 = sc.nextInt();
                    if(nOp4 == 1){
                        System.out.println("Enter the element: ");
                        Double e10 = sc.nextDouble();
                        tree.add(e10);
                    }
                    else if(nOp4 == 2){
                        System.out.println("Enter the element to be found: ");
                        Double e11 = sc.nextDouble();
                        System.out.println("Is the element in the hash set: " + tree.contains(e11));
                    }
                    else if(nOp4 == 3){
                        System.out.println("Is the hash set empty:" + tree.isEmpty());
                    }
                    else if(nOp4 == 4){
                        System.out.println("Enter the element: ");
                        Double e12 = sc.nextDouble();
                        if(tree.remove(e12)){
                            System.out.println("Object removed");
                        }
                        else{
                            System.out.println("Object not present");
                        }
                    }
                    else{
                        System.out.println("Invalid option");
                    }
                    System.out.println("Do you want to repeat operations");
                    c3 = sc.next();
                }
                break;
                case 5:
                	String c5 = new String();
                	stk = new Stack<Integer>();
                	while(!c5.equals("n")){
                		System.out.println("Enter 1 to push element");
                    	System.out.println("Enter 2 to pop an element");
                    	System.out.println("Enter 3 to check the top element without popping");
                    	System.out.println("Enter 4 to check whether stack is empty");
                		int op5 = sc.nextInt();
                		if(op5 == 1){
                			System.out.println("Enter the element: ");
                			int ele = sc.nextInt();
                			stk.push(ele);
                		}
                		else if(op5 == 2){
                			System.out.println("The popped element is : " + stk.pop());
                		}
                		else if(op5 == 3){
                			System.out.println("The top element is: " + stk.peek());
                		}
                		else if(op5 == 4){
                			System.out.println("Is stack empty: " + stk.isEmpty());
                		}
                		else{
                			System.out.println("Invalid option");
                		}
                			
                	}
                	break;
            default:
                System.out.println("Invalid option selected");
            }
        }
}
