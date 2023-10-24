#include <iostream>
using namespace std;
int main() {
    int tableau[10];
    
    
    cout << " entrez 10 nombres  : " <<endl;
    for (int i = 0; i < 10; i++) {
    cin >> tableau[i];
    }

    int max = tableau[0];
    int min = tableau[0];
    for (int i = 1; i < 10; i++) {
        if (tableau[i] > max) {
            max = tableau[i];
        }
        if (tableau[i] < min) {
            min = tableau[i];
        }
    }

    cout << "Le plus grand nombre est : " << max << endl;
    cout << "Le plus petit nombre est : " << min << endl;

    return 0;
}
