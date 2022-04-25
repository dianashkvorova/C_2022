#include <iostream>
using namespace std;

class CreditCard {
    public:
    int Number;
    float Balance;
    float Put(float V);
    float Take(float V);
    CreditCard(int a, float b);
};
    
CreditCard::CreditCard(int a=1234, float b=50){
    Number=a;
    Balance=b;
}

float CreditCard::Put(float V){
        Balance=Balance+V;
        return 0;
    }

float CreditCard::Take(float V){
    Balance=Balance-V;
    return 0;
}
    
int main(){
    CreditCard firstCC(1234, 50);

    CreditCard *ukz=&firstCC;
    ukz -> Put(70);
    cout << firstCC.Balance << endl;
    
    ukz -> Take(100);
    cout << firstCC.Balance << endl;
    return 0;
}
