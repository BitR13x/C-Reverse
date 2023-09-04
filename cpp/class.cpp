#include <iostream>
#include <string>
using namespace std;

class Person {
    public:
        int Age;
        string Name;
};

int main() {
    Person Test;

    Test.Age = 9;
    Test.Name = "Test";
    
    return 0;
}
