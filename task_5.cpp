#include <iostream>
using namespace std;
int main()
{
    int i;
    const char* n[]={"ноль","один","два","три","четыре",
    "пять","шесть","семь","восемь","девять"};
    for (int j=0;j<=9;j++){
    cin >>i;
    cout << n[i] <<endl;
    }
    return 0;
}
