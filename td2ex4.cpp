#include <iostream>
using namespace std;

int main() {
    int a ; 
    int &ref_a = a; 
    int *p_a = &a; 
    cout<<"entrez un entier : a = "<<a<<endl;
    cin>>a;
    cout << "Variable a : " << a <<endl;
    cout << "Adresse de a : " << &a <<endl;
    
    cout << "Référence ref_a : " << ref_a <<endl;
    cout << "Adresse de ref_a : " << &ref_a <<endl;

    cout << "Pointeur p_a : " << *p_a <<endl;
    cout << "Adresse de p_a : " << p_a <<endl;

    return 0;
}
