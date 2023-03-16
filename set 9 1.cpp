#include<iostream>
#include<string.h>
using namespace std;
class point
{
	public:
		int a;
		void set(int n)
		{
			this->a=n;
		}
		void get()
		{
			cout<<"A="<<this->a<<endl;
		}
		point operator++(int)
		{
			point temp;
			temp.a=this->a++;
		}
		
};
int main()
{
	point o1,o2;
	o1.set(10);
	o1.get();
	o2=o1++;
	o1.get();
	return 0;
}


