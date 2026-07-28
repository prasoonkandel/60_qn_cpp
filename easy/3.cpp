#include <iostream>

using namespace std;

class Number{
    int n;
    public:
    Number(int a){
        n = a;
    }
    int reverse(){
        int rev = 0;
        int num = n;

        while(num!=0){
            int r = num % 10;
            rev = rev * 10 + r;
            num /= 10;
        }
        return rev;
    }
};

int main(){
    Number n(12345);
    cout<<n.reverse();
    return 0;
}
