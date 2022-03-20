#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file ("output");
        int a,b;
        cout << "Введите число a: ";
        cin >> a;
        cout << "Введите число b больше a: ";
        cin >> b;
        for(int i=a;i<=b;i++){
        int c=i*3;
        file << c << "\n";
        }
        file.close();
return 0;
}
