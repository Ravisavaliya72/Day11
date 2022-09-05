#include <iostream>
using namespace std;

class Illustrate {
   public:
    void out() {
        cout << "Illustrate Function" << endl;
    }
};

class Overriding : public Illustrate  {
   public:
    void out() {
        cout << "Overriding Function" << endl;
    }
};

 main() {
    Overriding overriding1;
    overriding1.out();
}
