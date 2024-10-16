#include <iostream>
using namespace std;
class Baza {
public:
    Baza() {
        cout << "constructorul clasei de bază" << endl;
    }
    void afisareBaza() 
    {
        cout << "aceasta este o metodă din clasa de bază" << endl;
    }
    ~Baza()
     {
        cout << "destructorul clasei de bază" << endl;
    }
};
class Derivata : public Baza {
public:
    Derivata() 
    {
        cout<<"constructorul clasei derivate" << endl;
    }
    void afisareDerivata() 
    {
        cout<<"aceasta este o metodă din clasa Derivată"<<endl;
    }
    ~Derivata() {
        cout << "destructorul clasei derivate"<< endl;
    }
};
int main() {
    Derivata obj;
    obj.afisareBaza();      
    obj.afisareDerivata();   

    return 0;
}
