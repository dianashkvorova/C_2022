#include <iostream>
using namespace std;

class Bucket {
    public:
    int volume, used;
    int flush();
    int fill(int v);
    Bucket(int a, int b);
};
    
Bucket::Bucket(int a=12, int b=0){
    volume=a;
    used=b;
}

int Bucket::fill(int v){
    if (v+used>=volume){
        int b=used;
        used=volume;
        return v-(volume-b);
    }
    else{used=v;
        return 0;
    }
}

int Bucket::flush(){
    used=0;
    return 0;
}
    
int main(){
    Bucket test_01(12, 3);
    cout << "1) " << test_01.volume << ", " << test_01.used << "\n";

    int rest = test_01.fill(14);
    cout << "2) " << test_01.used << ", " << rest << "\n";
    
    test_01.flush();
    rest = test_01.fill(8);
    cout << "3) " << test_01.used << ", " << rest << "\n";
    return 0;
}
