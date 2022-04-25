#include <iostream>
using namespace std;

class CreditCard {
    public:
    int Number;
    float Balance;
    int Put(int V);
    int Take(int V);
    CreditCard(int a, float b);
};
    
CreditCard::CreditCard(int a=1234, float b=50){
    Number=a;
    Balance=b;
}

int CreditCard::Put(int V){
        Balance=Balance+V;
        return 0;
    }

int CreditCard::Take(int V){
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
