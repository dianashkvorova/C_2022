#include <iostream>
using namespace std;

void print(int a){
    cout << "Значение 1: " << a << endl;
}

void print(float a){
    cout << "Значение 2: " << a << endl;
}

void print(char a){
    cout << "Значение 3: " << a << endl;
}

void print(int a, int d){
    cout << "Значение 4: " << a << " и "<< d << endl;
}

int main()
{
    print(5);
    print(10.64f);
    print('s');
    print(57,640);
    return 0;
}
