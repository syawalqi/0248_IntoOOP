#include <iostream>
using namespace std;

class Mahasiswa {
	public: 
        string nama;
		int umur;
		string jurusan;

        void output() {
			cout << "Nama: " << nama << endl;
            cout << "Umur: " << umur << endl;
			cout << "Jurusan: " << jurusan << endl;
		}
};


class Matakuliah {
	private:
		string kodeMK;
		string namaMK;
		int sks;
