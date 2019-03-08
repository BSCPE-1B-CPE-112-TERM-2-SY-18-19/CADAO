#include<iostream>
using namespace std;

class jm
{
	public:
		long x,y,z;
		void twovar();
		void threevar();
};

int main()
{
	jm call;
	call.twovar();
	call.threevar();
	return 0;
}

void jm::twovar()
{
	//SWAPING THE TWO VARIABLES!!!
	cout<<"SWAPPING TWO VARIABLES!!!"<<endl;
	cout<<"Input X: ";
	cin>>x;
	cout<<"Input Y: ";
	cin>>y;
	
	y=x+y;
	x=y-x;
	y=y-x;
	
	cout<<endl<<"Swapped Two Variables: "<<endl<<"X = "<<x<<endl;
	cout<<"Y = "<<y<<endl;
}

void jm::threevar()
{
	//SWAPPING THE THREE VARIABLES
	cout<<endl<<"SWAPPING THREE VARIABLES!!!"<<endl;
	cout<<"Input X: ";
	cin>>x;
	cout<<"Input Y: ";
	cin>>y;
	cout<<"Input Z: ";
	cin>>z;
	
	x=x+y;
	y=x-y;
	x=x-y; 
	z=z+x;
	x=z-x;
	z=z-x;
	
	cout<<endl<<"Swapped Three Variables: "<<endl<<"X = "<<x<<endl;
	cout<<"Y = "<<y<<endl;
	cout<<"Z = "<<z<<endl;
}
