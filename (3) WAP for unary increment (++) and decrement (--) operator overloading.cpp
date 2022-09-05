#include<iostream>
using namespace std;

class Integer{
	private:
	int a;
	public:
	   Integer(int a = 0){
	   	  this->a = a;
	   }
	   Integer operator++(int){
	   	return ++a;
	   }
	   Integer operator--(int){
	   	return --a;
	   }
	   void display(){
	   	   cout << "The value of A: " << a << endl;
	   }
};
int main(){
	    
	    Integer a1(4);
	    
	    Integer a2 = a1++;
	    a2.display();
	    
	    Integer a3 = a2--;
	    a3.display();
	    
}
