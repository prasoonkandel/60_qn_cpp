#include <iostream>
#include <cstdlib>

using namespace std;

class Number {
    int n;

public:
    Number(int a) {
        n = abs(a);
    }

    int middle_num() {
        int num = n;
        int count = 0;

        if (num == 0) {
            return 0;
        }

        while (num != 0) {
            num /= 10;
            count++;
        }

        if (count % 2 == 0) {
            return -1;
        }
        else {
            num = n;

            for (int i = 0; i < count / 2; i++) {
                num /= 10;
            }

            return num % 10;
        }
    }
};

int main() {
    Number n(-12345);

    cout << n.middle_num();

    return 0;
}

// Returns -1 if the number has an even number of digit
