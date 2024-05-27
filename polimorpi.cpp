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

int main() {
    seseorang *obyek;
    joko a;
    lia b;

    obyek = &a;
    obyek->pesan();
    obyek = &b;
    obyek->pesan();
    //a.seserang::pesan();

    return 0;
}
