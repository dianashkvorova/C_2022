#include <iostream>
using namespace std;

char reverse(char a){
    char *p=&a;
    return *p;
}

int main()
{
    for (int i=1;i<=11;i++){
    char a[] = "Test string";
    int n=11;
    cout << reverse(a[n-i]);}
    return 0;
}
