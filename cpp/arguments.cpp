#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    cout << argc << "\n";
    cout << argv[0];

    for (int i=1; i > argc; i++) {
        cout << argv[i] << "\n";
    }
    return 0;
}