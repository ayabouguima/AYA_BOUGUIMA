#include <iostream>
#include <string>
using namespace std ;

int main() {
    string dateHeure; 
    cout << "Entrez une date et une heure (JJMMAAAAHHNN) : ";
    cin >> dateHeure;

    if (dateHeure.length() != 12) {
         cout<<"Format de date et d'heure invalide. Assurez-vous d'entrer exactement 12 caractères." <<endl;
        return 1;
    }

    string jour = dateHeure.substr(0, 2);
    string mois = dateHeure.substr(2, 2);
    string annee = dateHeure.substr(4, 4);
    string heure = dateHeure.substr(8, 2);
    string minute = dateHeure.substr(10, 2);

    
    cout << "Jour : " << jour <<endl;
    cout << "Mois : " << mois <<endl;
    cout << "Année : " << annee <<endl;
    cout << "Heure : " << heure <<endl;
    cout << "Minute : " << minute <<endl;

    return 0;
}
