#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
    char str[80];
    fgets(str, 80, stdin);
    int d=strlen(str);
    for(int i=0;i<d;i++){
    char* p=&str[i];
    cout << ++(*p);}
    return 0;
}
