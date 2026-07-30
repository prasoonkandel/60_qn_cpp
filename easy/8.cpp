//8. Find the smallest digit in a number.
#include <iostream>

using namespace std;

class Number{
    int n;
    public:
    Number(int a){
        n = a;
    }
    int minterm(){
        int minterm = 9;
        int num = n;

        while (num!=0) {
            int r = num%10;
            if(r<minterm){
                minterm = r;
            }
            num/=10;
        }

        return minterm;
    }
};

int main(){
    Number n(58394);
    cout<<n.minterm();
    return 0;
}
