#include<iostream>
using namespace std;
const int n=4;
class mat
{
	int weight,cost,root;
public:
	mat()
	{
		weight=0;
		cost=0;
		root=0;
	}
	friend class obst;
};
class obst
{
	int q[n+1];
	int p[n];
	int a[n];
	mat m[n+1][n+1];
public:
	void input();
	void calculate();
	void display();
};

