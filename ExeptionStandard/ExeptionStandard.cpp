#include <iostream>
#include <exception>
using namespace std;
//untuk objek exeption yang akan digunakan 
#include <array>
//untuk objek yang akan kita guanakan

int main() {
	cout << "Awal Program" << endl; //penanda 1:..
	try
	{
		array<int, 3> data = { 1,2,3 };
		//pesan array integer 3 elemen
		cout << data.at(4) << endl;
		//memanggil array elemen ke 5
	}
	catch (exception& e) {
		//penangkap menggunakan objek exeption
		cout << e.what() << endl;
		/*akan dieksekusi karena array data hanya memiliki 3 elemen*/
	}
	cout << "Baris Program yang terakhir" << endl;
	/*penanda 2: bahwa program akan berjaalan tanpa henti meskipun terjadi kesalahan*/
	return 0;
}