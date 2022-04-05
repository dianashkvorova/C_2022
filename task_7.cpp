#include <iostream>
using namespace std;

double SquaredSum(double a, double b){
    
    return (a+b)*(a+b);
}

int main()
{
    double a, b;
    for(int i=0;i<5;i++){
    cin >>a;
    cin >>b;
    cout << SquaredSum(a, b) <<"\n";
    }
    return 0;
}

