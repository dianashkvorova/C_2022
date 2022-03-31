#include <iostream>

using namespace std;

double SquaredSum(double a, double b){
    
    return (a+b)*(a+b);
}

int main()
{
    
    cout << SquaredSum(12, 6) <<"\n";
    cout << SquaredSum(12, -6) <<"\n";
    
    return 0;
}
