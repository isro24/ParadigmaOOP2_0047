#include <iostream>
using namespace std;

class AbstraksiKlas{
private:
    string x, y;
public:
    // metdho untuk mengisi nilai
    //private member
    void setXY(string a, string b) {
        x = a;
        y = b;
    }
    //menampilkan nilai
    void display(){
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
    }
};

int main(){
    AbstraksiKlas a;
    a.setXY("Yogyakarta", "Kampus");
    a.display();
    return 0;
}