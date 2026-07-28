#include <iostream>

using namespace std;

class Number{
    int n;
    public:
    Number(int a){
        n = a;
    }
    bool palindrome(){
        int num = n;
        int rev = 0;

        while(num!=0){
            int r = num%10;
            rev = rev * 10 + r;
            num /= 10;
        }
        if(rev==n){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){
    Number n(1221);
    if(n.palindrome()){
        cout<<"Palindrome Found";
    }
    else{
        cout<<"Not Palindrome";
    }
    return 0;
}
