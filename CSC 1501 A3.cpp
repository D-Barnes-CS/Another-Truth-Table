#include <iostream>
using std::cout; using std::endl;
int main() {
    int a, b, c;
    cout << "a" << "\t" << "b" << "\t" << "c" << "\t\t" << "!(a || c)" << "\t\t" << "(!(a || c) ^ b)" << endl;
    for (a = 0; a <= 1; a++) {
        for (b = 0; b <= 1; b++) {
            for (c = 0; c <= 1; c++) {
                if ((!(a || c) == 1)) {
                    cout << a << "\t" << b << "\t" << c << "\t\t" << !(a || c) << "\t\t" << (!(a || c) ^ b) << endl;
                }
                else {
                    cout << a << "\t" << b << "\t" << c << "\t\t" << !(a || c) << "\t\t" << (!(a || c) ^ b) << endl;
                }
            }
        }
    }
    cout << "a" << "\t" << "b" << "\t" << "c" << "\t\t" << "(!b || c)" << "\t\t" << "!((!b || c) && (!(a || b)))" << endl;
    for (a = 0; a <= 1; a++) {
        for (b = 0; b <= 1; b++) {
            for (c = 0; c <= 1; c++) {
                if ((!b || c) == 1) {
                    cout << a << "\t" << b << "\t" << c << "\t\t" << (!b || c) << "\t\t" << !((!b || c) &&  (!(a || b))) << endl;
                }
                else {
                    cout << a << "\t" << b << "\t" << c << "\t\t" << (!b || c) << "\t\t" << !((!b || c) && (!(a || b))) << endl;
                }
            }
        }
    }
    cout << "a" << "\t" << "b" << "\t" << "c" << "\t\t" << "(a ^ b)" << "\t\t" << "(!(a ^ b) || !(b ^ c))" << endl;
    for (a = 0; a <= 1; a++) {
        for (b = 0; b <= 1; b++) {
            for (c = 0; c <= 1; c++) {
                if ((a ^ b) == 1) {
                    cout << a << "\t" << b << "\t" << c << "\t\t" << (a ^ b) << "\t\t" << (!(a ^ b) || !(b ^ c)) << endl;
                }
                else {
                    cout << a << "\t" << b << "\t" << c << "\t\t" << (a ^ b) << "\t\t" << (!(a ^ b) || !(b ^ c)) << endl;
                }
            }
        }
    }
    cout << "a" << "\t" << "b" << "\t" << "c" << "\t\t" << "(!a || b)" << "\t\t" << "(!(!a || b) || !c)" << endl;
    for (a = 0; a <= 1; a++) {
        for (b = 0; b <= 1; b++) {
            for (c = 0; c <= 1; c++) {
                if ((!a || b) == 1) {
                    cout << a << "\t" << b << "\t" << c << "\t\t" << (!a || b) << "\t\t" << (!(!a || b) &&  (!c((b && c) || (c || a)))) << endl;
                }
                else {
                    cout << a << "\t" << b << "\t" << c << "\t\t" << (!a || b) << "\t\t" << (!(!a || b) && (!c((b && c) || (c || a)))) << endl;
                }
            }
        }
    }
}
