#include <iostream>
using namespace std;
//chain function
class buku {
	string judul;

public:
	buku setJudul; (string judul) {
		this->judul = judul;
		return *this; //chain function
	}
	string getJudul() {
		return this->judul;
	}
} bukunya;

int main() {
	/*bukunya.setJudul("Matematka");
	cout << bukunya.getJudul();*/
	cout << bukunya.setJudul("Matematika").getJudul(); //chain function
	return 0;
}