#include <iostream>
using namespace std;

class baseClass {
public:
    virtual void perkenalan() final {
        cout << "Hallo, saya function dari base class" << endl;
    }
};

class derivedClass : public baseClass {
    void perkenalan() {
        cout << "Hallo, saya function dari derived class" << endl;
    }
};