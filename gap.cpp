#include <iostream>
using namespace std;

class Add {
    int a, b;

public:
    void input() {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }

    void displaySum() {
        cout << "Sum = " << a + b << endl;
    }
};

int main() {
    Add obj;
    obj.input();
    obj.displaySum();
    return 0;
}
