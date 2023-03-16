#include<iostream>
#include<string.h>
using namespace std;
class point
{
	public :
		int a,b;
		void set(int n1,int n2)
		{
			this->a=n1;
			this->b=n2;
		}
		void get()
		{
			cout<<"A:-"<<this->a<<endl;
			cout<<"B:-"<<this->b<<endl;
		}
		point operator+(point n)
		{
			point temp;
			temp.a=this->a+n.a;
			temp.b=this->b+n.b;
			return temp;
		}
};
int main()
{
	point p1,p2,p3;
	p1.set(15,10);
	p1.get();
	
	p2.set(5,10);
	p2.get();
	
	p3=p1+p2;
	p3.get();
	return 0;
	
}
		
		
