#include <iostream>

using namespace std;

class Number{
    int n;
    public:
    Number(int a){
        n = a;
    }
    int maxnum(){
        int maxnum = 0;
        int num = n;
        while(num!=0){
            int r = num%10;
            if(r>maxnum){
                maxnum = r;
            }
            num /= 10;
        }
    return maxnum;
    }
};

int main(){
    Number n(58394);
    cout<<n.maxnum();
    return 0;
}
