#include <iostream>
#include <string>
#include<bits/stdc++.h>
using namespace std;

/* Creation of class Box */
class Box{

//length, breatdh, and private
private:
	//use variables private, can only access within class
	int l,b,h;

public:
	//Constructor
	Box(){
		l=b=h= 0;
	}

	 Box(int length,int breadth,int height){
		 l = length;
		 b = breadth;
		 h = height;
	 }

	 Box(const Box& B){
		 l= B.l;
	     b = B.b;
	     h = B.h;
	 }

	int getLength(){
		return (l);
	}

	int getBreadth(){
		return (b);
	}

	int getHeight(){
		return(h);
	}

	long long CalculateVolume(){
		return ((long long)l*b*h);
	}

	friend bool operator < (Box& b1, Box& b2){
		if((b1.l < b2.l) || (b1.l == b2.l && b1.b < b2.b) || (b1.l == b2.l && b1.b == b2.b && b1.h <b2.h))
			return(true);
	    else
	    	return(false);
	}


	friend ostream& operator << (ostream& s,Box& b1){
		s << b1.l << " " << b1.b << " " << b1.h;
		return s;
	}
};

void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}
