#include <iostream>
using namespace std ;

class Fichier {
private:
    char* P; 
    int longueur; 

public:
    
    Fichier(int _longueur) : longueur(_longueur) {
        P = new char[longueur];
    }

    
    void Creation() {
        for (int i = 0; i < longueur; i++) {
            P[i] = 'A' + i % 26; 
        }
    }

    
    void Affiche() {
        for (int i = 0; i < longueur; i++) {
            std::cout << P[i];
        }
        std::cout << std::endl;
    }

    
    ~Fichier() {
        delete[] P;
    }
};

int main() {
    int longueurFichier = 10; 
    Fichier* monFichier = new Fichier(longueurFichier); 

    monFichier->Creation(); 
    std::cout << "Contenu du fichier : ";
    monFichier->Affiche(); 

    delete monFichier; 

    return 0;
}
