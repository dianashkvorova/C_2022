#include <iostream>
using namespace std;

class CreditCard {
    public:
    int Number;
    float Balance;
    CreditCard(int a, float b);
};
    
CreditCard::CreditCard(int a, float b){
    Number=a;
    Balance=b;
}

float Transfer(CreditCard C1, CreditCard C2, float V){
        if(C1.Balance<V){cout << "Недостаточный баланс! \n";}
        else if(C1.Number==C2.Number){cout << "Ошибка! Номера карт совпадают \n";}
        else{
            float a=C1.Balance-V;
            float b=C2.Balance+V;
            cout << "Успешно. Остатки на картах: (1) "<< a <<" , (2) " << b << endl;
        }
        return 0;
    }
    
int main(){
    CreditCard Alpha(2345, 180);
    CreditCard Bravo(1732, 50);
    CreditCard Gamma(1732, 15);


    Transfer(Bravo, Alpha, 60);  
    Transfer(Bravo, Gamma, 10);  
    Transfer(Bravo, Alpha, 30); 
    return 0;
}
