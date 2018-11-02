/*
 * heap.cpp
 *
 *  Created on: 28 Mar 2018
 *      Author: student
 */
/*Read the marks obtained by students of second year in an
online examination of particular subject. Find out maximum and
minimum marks obtained in that subject. Use heap data structure.
Analyze the algorithm.*/
#include<iostream>
using namespace std;

class Heap
{
    int Tree[20];
    int n;
    public:

    Heap()
    {
        for(int i=0;i<20;i++)
        {
            Tree[i]=0;
        }
        n=0;
    }

    void insert()
    {
        int item,ptr,par;
        cout<<"Enter item to be inserted ";
        cin>>item;
        ptr=n;
        n=n+1;
        while(ptr>0)
        {
            par=(ptr-1)/2;
            if(item<=Tree[par])
            {
                Tree[ptr]=item;
                return;
            }
            Tree[ptr]=Tree[par];
            ptr=par;
        }
        Tree[ptr]=item;
        return;
    }

    void display()
    {
        cout<<"Array is ";
        for(int i=0;i<n;i++)
        {
            cout<<Tree[i]<<" ";
        }
        cout<<endl;
    }

    void headdelete()
    {
        cout<<"Max element is "<<Tree[0]<<endl;
        int xx=n;
        for(int i=0;i<xx;i++){
        int last=Tree[n-1];
        n=n-1;
        int ptr=0,left=1,right=2;
        while(right<=n-1)
        {
            if((last>=Tree[left]) && (last>=Tree[right]))
            {
                Tree[ptr]=last;
                return;
            }
            else if(Tree[right]<=Tree[left])
            {
                Tree[ptr]=Tree[left];
                ptr=left;
            }
            else
            {
                Tree[ptr]=Tree[right];
                ptr=right;
            }
            left=2*ptr+1;
            right=left+1;
        }
        if(left==n-1 && last <Tree[left])
        {
            Tree[ptr]=Tree[left];
            ptr=left;
        }
        Tree[ptr]=last;
    }
        cout<<"Min element is "<<Tree[0]<<endl;
    }
};


int main()
{
    Heap H;
    char c='y';
    int choice;
    while(c=='y')
    {
        cout<<"Press 1 to insert element"<<endl;
        cout<<"Press 2 to display array"<<endl;
        cout<<"Press 3 to display max and min"<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1: H.insert();
                    break;
            case 2: H.display();
                    break;
            case 3:H.headdelete();
                    break;
        }
        cout<<"Do you want to continue?"<<endl;
        cin>>c;
    }
    return 0;
}
