#include <iostream>
using namespace std;
class ClasaB; 
class ClasaA 
{
private:
    int valoareA;
public:
    ClasaA(int v) : valoareA(v) {

    }

    friend void afisarePrietenie(ClasaA& a, ClasaB& b);
    friend class ClasaB;
};

class ClasaB 
{
private:
    int valoareB;  
public:
    ClasaB(int v) : valoareB(v) {

    }

    friend void afisarePrietenie(ClasaA& a, ClasaB& b);  
    friend class ClasaA;
};

void afisarePrietenie(ClasaA& a, ClasaB& b) 
{
    cout << "Valoarea din ClasaA: " << a.valoareA << endl;
    cout << "Valoarea din ClasaB: " << b.valoareB << endl;
}

int main() {
    ClasaA obiectA(10);
    ClasaB obiectB(20);
    afisarePrietenie(obiectA, obiectB);

    return 0;
}
