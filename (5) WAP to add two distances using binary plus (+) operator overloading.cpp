#include<iostream>
using namespace std;

class Distance{
	public:
		int a,b;
		Distance(int a = 0, int b = 0)
		{
			this->a = a;
			this->b = b; 
		}
		
		Distance operator +(Distance& d2)
		{
			Distance d;
			d.a = this->a + d2.a;
			d.b = this->b + d2.b;
			return d;
			}
			void display() {
				cout << a << " " << b << endl;
			}
};

 int main(){
 	        
 	Distance d1(5, 5);
 	Distance d2(6, 4);
 	Distance d3;
 	d3 = d1 + d2;
 	d3.display();
 }
