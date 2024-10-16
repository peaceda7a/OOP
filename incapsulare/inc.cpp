#include <iostream>
using namespace std;
class ContBancar{
    private:
    double sold;
    public:
    ContBancar(double SoldInitial){
        sold= SoldInitial;
    }
    double GetSold(){
        return sold;
    }
    void depune(double suma){
        if (suma>=0){
            sold+=suma;

        }else{
            cout<< "Suma trebuie sa fie pozitiva!"<< endl;
        }

    }

};
 int main(){
    ContBancar cont(1000);
    cont.depune(500);
    cout<<"Soldul curent:"<< cont.GetSold() << endl;
    return 0;

 }
