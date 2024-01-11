#include <iostream>
using namespace std;



int main() {
    string NIM, nama;

    cout << "input NAMA=" << endl;
    getline(cin,nama);
    if (nama == "seva maulana") {
        cout << "masukkan NIM anda" << endl;
        cin >> NIM;
        if (NIM == "235150307111006") {
            cout << "selamat datang di akun siam" << endl;
        } else {
            cout << "NIM anda salah" << endl;
        }
    } else {
        cout << "masukkan NIM anda" << endl;
        cin >> NIM;
        cout << "NAMA dan NIM salah" << endl;
    }
    return 0;
}



