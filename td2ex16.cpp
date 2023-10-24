#include <iostream>
using namespace std ;
struct Element {
    int data; 
    Element* next; 

    Element(int val) : data(val), next(nullptr) {}
};
class Liste {
private:
    Element* head; 

public:
    Liste() : head(nullptr) {}
    void ajouterElement(int val) {
        Element* nouvelElement = new Element(val);
        nouvelElement->next = head;
        head = nouvelElement;
    }
    void supprimerElement() {
        if (head) {
            Element* temp = head;
            head = head->next;
            delete temp;
        }
    }
    void afficherListe() {
        Element* current = head;
        while (current) {
        cout << current->data << " -> ";
            current = current->next;
        }
        cout << "nullptr" <<endl;
    }
    ~Liste() {
        while (head) {
            Element* temp = head;
            head = head->next;
            delete temp;
        }
    }
};

int main() {
    Liste maListe;

    maListe.ajouterElement(1);
    maListe.ajouterElement(2);
    maListe.ajouterElement(3);

    cout << "Liste après l'ajout d'éléments : ";
    maListe.afficherListe();

    maListe.supprimerElement();
    cout << "Liste après la suppression du premier élément : ";
    maListe.afficherListe();

    return 0;
}
