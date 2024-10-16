#include <iostream>
using namespace std;
class Baza 
{
private:
    int valoare;
public:
    Baza(int v):valoare(v) 
    {
        cout <<"Constructorul clasei de Bază, valoare = " <<valoare<<endl;
    }
    ~Baza() 
    {
        cout <<"Destructorul clasei de Bază"<<endl;
    }
    void afisareBaza() 
    {
        cout << "Valoarea din clasa de Bază: " << valoare << endl;
    }
};
class Derivata : public Baza 
{
private:
    int altValoare;
public:
    Derivata(int v1, int v2) : Baza(v1), altValoare(v2) 
    {
        cout << "Constructorul clasei Derivate, altValoare = " << altValoare << endl;
    }
    ~Derivata() 
    {
        cout << "Destructorul clasei Derivate"<<endl;
    }
    void afisareDerivata() 
    {
        cout << "Valoarea din clasa Derivata: " << altValoare << endl;
    }
};

int main() {
    Derivata a(100, 200);
    a.afisareBaza();       
    a.afisareDerivata(); 

    return 0;
}
