#include"OBST.h"
void obst:: input()
{	
	
	for(int i=0;i<n;i++)
	{
		cout<<"\nENTER THE IDENTIFIER :";
		cin>>a[i];
		cout<<"\nENTER THE SUCCESSFUL PROBABILITY OF "<<i+1<<" : ";
		cin>>p[i];
	}
	for(int i=0;i<=n;i++)
	{
		cout<<"\nENTER THE UNSUCCESSFUL PROBABILITY OF "<<i<<" : ";
		cin>>q[i];
	} 
}
void obst:: calculate()
{
	for(int i=0;i<=n;i++)
	{
		m[i][i].weight=q[i];
		m[i][i].root=0;
		m[i][i].cost=0;
	}
	for(int i=0;i<n;i++)
	{
		m[i][i+1].weight=m[i][i].weight+p[i]+q[i+1];
		m[i][i+1].root=i+1;
		m[i][i+1].cost=m[i][i].weight+p[i]+q[i+1];
	}
	int min;
	int rootCanBe;
	int initWeight=0;
	for(int z=2;z<=n;z++)
	{
		for(int i=0,j=z;i<=z,j<=n;i++,j++)
		{
			rootCanBe=1;
			m[i][j].weight=m[i][j-1].weight+p[j-1]+q[j];
			min=19999;
			for(int k=i+1;k<=j;k++)
			{
				initWeight=   m[i][k-1].cost   + m[k][j].cost   + m[i][j].weight;
				if(initWeight<min)
				{
					min=initWeight;
					rootCanBe=k;
				}
			}
			m[i][j].cost=min;
			m[i][j].root=rootCanBe;
		}
	}
}
void obst:: display()
{
	cout<<"\nTHE IDENTIFIER ARE :";
	for(int i=0;i<n;i++)
	{
		cout<<a[i];
	}
	cout<<"\nWEIGHTS :";
	cout<<"\n";
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=n;j++)
		{
			cout<<m[i][j].weight<<"\t";
		}
		cout<<endl;
	}
	cout<<"\nROOTS :";
	cout<<endl;	
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=n;j++)
		{
			cout<<m[i][j].root<<"\t";
		}
		cout<<endl;
	}
	cout<<"\nCOSTS :";
	cout<<endl;
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=n;j++)
		{
			cout<<m[i][j].cost<<"\t";
		}
		cout<<endl;
	}
}
