#include <iostream>
using namespace std;

int Sort(int a){
    int *p=&a;
    return *p;
}

int main()
{
    for (int i=1;i<=10;i++){
    int a[10] = {1, 8, 3, 6, 5, 4, 9, 2, 8, 12};
    int n=10;
    cout << Sort(a[n-i])<< ' ';}
    return 0;
}
