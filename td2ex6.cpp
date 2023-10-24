#include <iostream>
using namespace std;
void incrementer(int &a) {
    a++;
}
void permuter(int &b, int &c) {
    int temp = b;
    b = c;
    c = temp;
}

int main() {
    int x = 7;
    int y = 18;
    incrementer(x);
    cout << "l incrementation est : x = " << x <<endl;
    permuter(x,y);
    cout <<"la permutation est :x = "<< x <<",y = "<< y <<endl;

    return 0;
}

