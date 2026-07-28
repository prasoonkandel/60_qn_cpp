#include <iostream>

using namespace std;

class Number{
    int n;

    public:
    Number(int a){
        n = a;
    }
    int product_all(){
        int product = 1;
        int num = n;
        while(num!=0){
            int r = num%10;
            num /= 10;
            product *= r;
        }
        return product;
    }
};

int main(){
    Number n(1234);
    cout<<n.product_all();
    return 0;
}
