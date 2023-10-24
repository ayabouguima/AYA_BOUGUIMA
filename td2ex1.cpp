
#include<iostream>
using namespace std;
void affiche(){
    static int n=1;//la variable static conservera la valeur entre les appels successifs de la fonction
    cout<<"appel numero "<<n<<endl;
    n++;
}
int main (){
    affiche();
    affiche();
    affiche();
    return 0;
}