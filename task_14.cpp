#include <iostream>
#include <cstring>
using namespace std;

class T {
    char text [6];
    public:
    T (char* t) {
    strcpy (text, t);
    }
    T& operator ++ (int) {
        for (int i = 0; text[i]; i++) 
        {text[i] ++;}
    return *this;
    }
    T& operator -- (int) {
        for (int i = 0; text[i]; i++) 
        {text[i] --;}
    return *this;
    }
void show() {
    cout << text << endl;
    }
};

int main () {
    T text("abc123");
    text.show();
    text++;
    text.show();
    text--;
    text.show();
    return 0;
}
