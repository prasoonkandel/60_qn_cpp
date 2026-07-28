#include <iostream>

using namespace std;

class Number{
    int n;
    public:
    Number(int a){
        n = a;
    }
    bool is_armstrong(){
        int armstrong = 0;
        int num = n;

        while(num!=0){
            int r = num%10;
            armstrong = armstrong + (r*r*r);
            num /= 10;
        }

        if(armstrong==n){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){
    Number n(153);
    if(n.is_armstrong()){
        cout<<"Armstrong Found";
    }
    else{
        cout<<"Not a armstrong";
    }
    return 0;
}
