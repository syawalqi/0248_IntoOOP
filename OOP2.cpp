#include <iostream>
using namespace std;


class bangunDatar{;
	private:
		float panjang, lebar;
        public:
		float Luas;
		void input() { // methode input persegi panjang

        cout << "Masukan Panjangnya = ";
			cin >> panjang;
			cout << "Masukan Lebarnya = ";
			cin >> lebar;
		}
		float hitungLuas() {
			return panjang * lebar;
		}

        void display() {
			cout << "Panjangnya = " << panjang << endl;




