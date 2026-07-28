#include <iostream>

using namespace std;

class Number{
    int n;
    public:
    Number(int a){
        n = a;
    }
    int sum_all(){
        int sum = 0;
        int num = n;
        while(num!=0){
            int r = num%10;
            num /= 10;
            sum += r;
        }
        return sum;
    }
};

int main(){
    Number n(12345);
    cout<<n.sum_all();
}
