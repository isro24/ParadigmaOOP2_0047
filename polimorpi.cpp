#include <iostream>
using namespace std;

class seseorang {
public:
    virtual void pesan() = 0;
    //virtual void pesan(){
    //      cout << "Pesan Dari Seseorang" << endl;
    // }
};

class joko : public seseorang {
public:
    void pesan(){
        cout << "Pesan Dari Joko" << endl;
    }
};

class lia : public seseorang {
    void pesan(){
        cout << "Pesan Dari Lia" << endl;
    }
};
