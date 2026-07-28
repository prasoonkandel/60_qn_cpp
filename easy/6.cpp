#include <iostream>

using namespace std;

class Number{
    int n;
    public:
    Number(int a){
        n = a;
    }

    int count(){
        int count = 0;
        int num = n;
        while(num!=0){
            num /= 10;
            count++;
        }
        return count;

    }
};

int main() {
    Number n(123456);
    cout<< n.count();
    return 0;
}
