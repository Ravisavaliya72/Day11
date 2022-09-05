#include<iostream>
using namespace std;

class Integer {
	public:
		int b;
		Integer(int b = 0) {
			
			this->b = b;
			
		}
		Integer operator+(Integer& b2){
			Integer a;
			a.b = this->b + b2.b;
			return a;
			
		}
		void display(){
			cout << b << endl;
			
		}
};
int main(){
	
	Integer b1(4);
	Integer b2(5);
	Integer b3;
	b3 = b1 + b2;
	b3.display();
}
