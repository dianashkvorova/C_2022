#include <iostream>
using namespace std;
    class CreditCard {
        int Number;
        float Balance;
        public:
        CreditCard(int a, float b) {Number=a; Balance=b;}
        CreditCard operator+(CreditCard &op2){
            CreditCard temp(*this);
            temp.Balance = Balance + op2.Balance;
            op2.Balance=0;
            return temp;
        }
        void show();
    };
void CreditCard::show()
    {
        cout << Balance << endl;
    }
int main()
    {
        CreditCard C1(7896, 200);
        CreditCard C2(1252, 50);
        C1 = C1 + C2;
        C1.show();
        C2.show();
        C2 = C2 + C1;
        C1.show();
        C2.show();
        return 0;
    }
