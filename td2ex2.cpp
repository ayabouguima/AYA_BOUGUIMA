#include<iostream>6
using namespace std;
int multi2(int a){
    return a%2==0;
}
int multi3(int b){
    return b%3==0;
}
int main(){
    int c;
    cout<<"enter un entier "<<endl;
    cin>>c;
if(multi2(c)){
    cout<<"c est un nombe pair"<<endl;
}
else{
    cout<<"c n'est pas pair"<<endl;
}
if (multi3(c)){
cout<<"c est multiple de 3"<<endl;
}
else {
    cout<<"c n'est pas multiple de 3"<<endl;
}
if (multi2(c) && multi3(c)){
cout<<"c est multiple de 6"<<endl;
}
else{
    cout<<"c n'est pas multiple de 6"<<endl;
}
return 0;
}