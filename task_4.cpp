#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file ("output");
        int q;
        int n=0;
        while(file >> q){
        n=n+1;
        cout << n << ". " << q << "\n";
        }
        file.close();
return 0;
}
