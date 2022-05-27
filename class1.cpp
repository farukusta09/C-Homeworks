#include <iostream>
using namespace std;

class ogrenci {
private:
	string isim;
	int okulNo;
	int derSayisi;


public:

	ogrenci() {
		isim = "omer";
		okulNo = 143;
		derSayisi = 13;
	}
	ogrenci(string isim,int okulNo,int derSayisi) {
		this->isim = isim;
		this->okulNo = okulNo;
		this->derSayisi = derSayisi;

	}

	ogrenci(string isim) {
		this->isim = isim;
		okulNo = 518;
		derSayisi = 8;
	}


	string isimGetir() {
		return this->isim;
	}
	int okulNoGetir() {
		return this->okulNo;
	}



	void setName(string name) {
		 this-> isim = name;
	}

  };













int main()
{
ogrenci ogrenci1;
cout << ogrenci1.isimGetir()<<endl;
cout << ogrenci1.okulNoGetir()<<endl;


ogrenci ogrenci2("faruk", 444, 3);
cout << ogrenci2.isimGetir()<<endl;

ogrenci2.setName("veli");
cout << ogrenci2.isimGetir();
}
