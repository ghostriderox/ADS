#include<iostream>
#include<stack>
#include<queue>
using namespace std;

class node{
	int data;
	node *left;
	node *right;
	
	node()
	{
		data=0;
		left=NULL;
		right=NULL;

	}
	
	friend class Tree;
};


class Tree{
		node *root;
		int leaf;
//		int height;

		void display(node *new1)
		{
					
		if(new1==NULL)
		{
	
			return;}		
		cout<<new1->data<<endl;
		display(new1->left);
		display(new1->right);
		}

		void inorder(node *new1)
		{
			if(new1)
			{
				inorder(new1->left);
				cout<<new1->data<<endl;
				inorder(new1->right);
			}
		}
		
		void preorder(node *new1)
		{
			if(new1)
			{
				cout<<new1->data<<endl;
				preorder(new1->left);
				preorder(new1->right);
			}
		}
		
		void postorder(node *new1)
		{
			if(new1)
			{
				postorder(new1->left);
				postorder(new1->right);
				cout<<new1->data<<endl;
			}
		}
	
		void leafCount(node *new1)
		{
	
			if(new1->left==NULL && new1->right==NULL)
			{
				this->leaf++;
				return;
			}
			if(new1->left!=NULL)
			{
				leafCount(new1->left);
			}
			if(new1->right!=NULL)
			{
				leafCount(new1->right);
			}
		}
		void mirrorIt(node *t1,node *t2)
		{
		
			if(t1==NULL)
			{
				return;
			}	
			if(t1->left!=NULL)
			{
				node *new1;
				new1=new node;
				t2->right=new1;
				new1->data=t1->left->data;
				
			}
			else{

				t2->right=NULL;
			}
			mirrorIt(t1->left,t2->right);
			if(t1->right!=NULL)
			{
				node *new1;
				new1=new node;
				t2->left=new1;
				new1->data=t1->right->data;
				
			}
			else{

				t2->left=NULL;
			}
			mirrorIt(t1->right,t2->left);
		
		}
		void equalIt(node *t1,node *t2)
		{
		
			if(t1==NULL)
			{
				return;
			}	
			if(t1->left!=NULL)
			{
				node *new1;
				new1=new node;
				t2->left=new1;
				new1->data=t1->left->data;
				
			}
			else{

				t2->left=NULL;
			}
			equalIt(t1->left,t2->left);
			if(t1->right!=NULL)
			{
				node *new1;
				new1=new node;
				t2->right=new1;
				new1->data=t1->right->data;
				
			}
			else{

				t2->right=NULL;
			}
			equalIt(t1->right,t2->right);
		
		}
		void deleteIt(node *temp)
		{
			if(temp==NULL)
			{

				return;
			}
			deleteIt(temp->left);
			temp->left=NULL;
			deleteIt(temp->right);
			temp->right=NULL;
			cout<<"Deleting the node::"<<temp->data<<endl;
			delete temp;
			temp=NULL;	
		}
	public:
		Tree()
		{
			root=NULL;
			leaf=0;
		}

		void insert()
		{
			node *new1;
			cout<<"Enter the data"<<endl;
			new1=new node;
			cin>>new1->data;
			
			if(root==NULL)
			{
				root=new1;
			}
			else
			{
				int ch;
				bool flag=false;
				node *current;
				current=root;
				while(flag==false)
				{
				cout<<"Left(1) or Right(0)?"<<endl;
				cin>>ch;
				switch(ch)
				{
					case(1):
						if(current->left==NULL)
						{	current->left=new1;
							flag=true;
						}
						else
							current=current->left;
						break;
					case(0):
						if(current->right==NULL)
						{	current->right=new1;
							flag=true;						
						}
						else
							current=current->right;
						break;
					default:
						cout<<"Enter the valid choice"<<endl;
						break;				
					}
		
				}
				
				
			}
			cout<<"displaying the tree"<<endl;	
			cout<<"---------------------"<<endl;
			display(root);
			cout<<"---------------------"<<endl;
		}
	
					
		void traversing()
		{
			int ch;
			cout<<"Enter the choice\n 1.InOrder 2.Pre Order 3.Post Order"<<endl;
			cin>>ch;
			switch(ch)
			{
				case(1):
					//inorder(root);
					inorder();
					break;
				case(2):
					//preorder(root);
					preorder();					
					break;
				case(3):
					//postorder(root);
					postorder();					
					break;
				default:
					cout<<"Enter the valid choice"<<endl;
					break;

			}
		}
		// Non recursive 
		void preorder()
		{
			stack<node*> s;
			node *current;
			s.push(NULL);
			current=root;
			while(current!=NULL)
			{
				cout<<current->data<<endl;
				if(current->right!=NULL)
					s.push(current->right);
				if(current->left!=NULL)
					current=current->left;
				else
				{	
					current=s.top();	
					s.pop();
				}
			}	
						
	
		}
		void inorder()
		{
			stack<node*> s;
			node *current;
			current=root;
			bool flag=true;
			s.push(NULL);

		while(current!=NULL)
		{
			flag=true;
			while(current->left!=NULL)
			{
				s.push(current);
				current=current->left;
			}
			while(flag && current!=NULL)
			{
				cout<<current->data<<endl;
			if(current->right!=NULL)
			{
				current=current->right;
				flag=false;	
			}
			else
			{
				current=s.top();
				s.pop();
				flag=true;			
			}
			
			}
							
				
		}	
			
		}



/*		void postorder()
		{	bool loop=true;
			stack<node *>s;
			stack<bool>f;
			bool flag;
			s.push(NULL);
			f.push(false);
			node *current;
			current=root;
			while(loop)
			{
			loop=false;
			while(current!=NULL)
			{
				
				s.push(current);
				f.push(false);
				if(current->right!=NULL)
				{
					s.push(current->right);
					f.push(true);
				}
				current=current->left;

			}
			current=s.top();
			flag=f.top();
			s.pop();f.pop();
			while(!flag && current!=NULL)
			{
				cout<<current->data<<endl;
				current=s.top();
				flag=f.top();
				s.pop();f.pop();			
			}
			if(flag)
			{
			loop=true;
			}	

			}
		}*/


		void postorder()
		{
			stack<node*> s;
			node *current;
			current=this->root;
			do			
			{
			while(current!=NULL)
			{
				if(current->right!=NULL)
				{
					s.push(current->right);
			
				}
				s.push(current);
				current=current->left;
				
		
			}
			current = s.top();
			s.pop();
			
			if(current->right!=NULL && current->right==s.top())
			{
				node *temp;
				temp = current;
				current = s.top();
				s.pop();
				s.push(temp);
			}
			else
			{
				cout<<current->data<<endl;
				current=NULL;
			}
			}
			while(!s.empty());	
			
	
		}

		void CountLeaf()
		{
			cout<<"The no of leaves are:"<<endl;
			leafCount(root);
			cout<<leaf<<endl;
		}
		void height()
		{
			int count=1;
			node *temp;
			queue<node *>q;
			q.push(root);			
			q.push(NULL);			
			while(!q.empty())
			{
				temp=q.front();
				q.pop();
				//cout<<temp->data<<endl;
				if(temp==NULL && !q.empty())
				{	count++;
					q.push(NULL);
					//cout<<"Level"<<count<<endl;
				}
				else if(temp!=NULL)
				{
					if(temp->left)
					{
					//cout<<temp->left->data<<endl;
					q.push(temp->left);
					
					}
					if(temp->right)
					{
					//cout<<temp->right->data<<endl;
					q.push(temp->right);
					
					}
				}				
										

			}
			cout<<count;		
		}

		
		bool equal(Tree T)
		{
			node *t1=root;
			node *t2=T.root;
			stack<node*>s1;stack<node*>s2;			
			bool flag=true;
			s1.push(NULL);s2.push(NULL);			
			if(t1==NULL || t2==NULL)
			{
				cout<<"Empty Tree"<<endl;
				return false;
			}
			else
			{ while(!s1.empty() && !s2.empty() && flag) 
			{	if(t1!=NULL && t2!=NULL)
				{
					flag=(t1->data==t2->data);
				
					if(t1->right==NULL xor t2->right==NULL)
					{
						flag=false;
					}
					else
					{
						s1.push(t1->right);		
						s2.push(t2->right);
					}
					if(t1->left==NULL xor t2->left==NULL)
					{
						flag=false;
					}
					else 
					{
						t1=t1->left;
						t2=t2->left;							
					}
				}
				else
				{
					t1=s1.top();t2=s2.top();
					s1.pop();s2.pop();
					
				}	
			}			
			}
			if(flag)
			{
				cout<<"Trees are equal"<<endl;
			}
			else{

				cout<<"Trees not equal"<<endl;
			}
		}

		Tree Mirror()
		{
			Tree T2;
			node *new1;
			if(root!=NULL)
			{
				new1=new node;
				new1->data=root->data;
				T2.root=new1;
				mirrorIt(root,T2.root);
			}
			return T2;
		}
		Tree copy()
		{	
			Tree T;
			node *new1;
			if(root!=NULL)
			{
				new1=new node;
				new1->data=root->data;
				T.root=new1;
				equalIt(root,T.root);
		
			}
			return T;		
		}
		void del()
		{
			cout<<"Erasing the tree"<<endl;	
			deleteIt(root);
			root=NULL;

		}
		

			
};
int main()
{
	Tree T,T2;
	int ch,ch2;
	do{
	cout<<"1.Insert 2.Traverse 3.Equal 4.Mirror 5.Delete 6.Exit"<<endl;
	cin>>ch;
	switch(ch)
	{
	case(1):
		T.insert();
		break;	
	case(2):
		T.traversing();
		cout<<"----------------"<<endl;
		//T.postorder();
		break;
	case(3):
		do{
			T2.insert();
			cout<<"Add another one\n 0.Add 1.Exit"<<endl;
			cin>>ch2;
		}while(ch2!=1);
		T.equal(T2);
		break;
	
	case(4):
		cout<<"Mirror"<<endl;
		//cout<<T.height()<<endl;;
		T.Mirror().preorder();
		cout<<"Equal trees"<<endl;
		T.copy().preorder();
		break;
	case(5):
		cout<<"Deleteing the tree"<<endl;
		T.del();
		T.preorder();
		break;
	case(6):
		cout<<"Height is "<<endl;
		//cout<<T.height()<<endl;;
		T.height();
		T.CountLeaf();
		break;
	default:
		cout<<"Enter the valid choice"<<endl;
	}}
	while(ch!=6);
	return 0;

}

