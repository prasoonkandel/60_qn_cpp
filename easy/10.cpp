#include <iostream>
using namespace std;

class Number{
    int n;
public:
    Number(int a){
        n = a;
    }

    int productFirstLast(){
        int last = n % 10;
        int first = n;
        while(first >= 10){
            first /= 10;
        }
        return first * last;
    }
};

int main(){
    Number n(12345);
    cout << n.productFirstLast();
    return 0;
}
