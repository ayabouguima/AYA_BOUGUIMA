#include <iostream>
using namespace std ;
class Test {
public:
    static int callCount; 
    void call() {
        callCount++; 
    }
};

int Test::callCount = 0;
int main() {
    Test testObj1;
    Test testObj2;

    testObj1.call();
    testObj2.call(); 
    testObj1.call(); 
    testObj1.call(); 
    cout << "La fonction 'call' a été appelée " << Test::callCount << " fois depuis main()." <<endl;

    return 0;
}
