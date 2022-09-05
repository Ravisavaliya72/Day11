#include <iostream>
using namespace std;
class sum
{
public:
int addMtd(int a, int b)
{
return a + b;
}
int addMtd(int a, int b, int c)
{
return  a + b + c;
}
};
int main(void)
{
sum add;
cout << add.addMtd(5, 9) << endl;
cout << add.addMtd(2, 7, 4) << endl;

}
