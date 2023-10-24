#include <iostream>
using namespace std ;

int main() {
     int taille = 10;
    int tableau[taille];
    bool permuter = true;

    cout << "Veuillez entrer 10 entiers : " <<endl;
    for (int i = 0; i < taille; i++) {
        cin >> tableau[i];
    }
    while (permuter) {
        permuter = false; 
        for (int i = 0; i < taille - 1; i++) {
            if (tableau[i] > tableau[i + 1]) {
                int temp = tableau[i];
                tableau[i] = tableau[i + 1];
                tableau[i + 1] = temp;
                permuter = true;
            }
        }
    }

    cout << "Tableau trié par ordre croissant : ";
    for (int i = 0; i < taille; i++) {
        cout << tableau[i] << " ";
    }
    cout <<endl;

    return 0;
}
