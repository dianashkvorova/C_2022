#include <iostream>
using namespace std;

void Sort(int a[10])
{
    for (int i=0;i<10;i++){
        for (int j = i + 1; j < 10; j++)
        if (a[j] > a[i]) swap (a[i],a[j]);
        cout << a[i]<< ' ';}
}
int main()
{
    int a[10]={1, 8, 3, 6, 5, 4, 9, 2, 8, 12};
    Sort(a); 
    return 0;
}
