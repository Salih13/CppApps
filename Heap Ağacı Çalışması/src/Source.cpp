/**
* @file                            : VeriOdev4
* @description                     : Dosyadan veri okuyup listeli bir şekilde dosyaya yazma programı
* @course                          : 2.Ogretim -C- grubu
* @assignment                      : 4
* @date Kodu oluşturduğunuz Tarih  : 20.12.2016
* @author                          : Enes KOCAMAN->enes.kocaman@ogr.sakarya.edu.tr
                                   : Salih GÜNGÖR->g140910053@sakarya.edu.tr
*/

#include <iostream>
#include "Islem.h"
using namespace std;
int main()
{
	Islem* islem = new Islem();
	islem->SayilariOku();
	islem->SiraliYaz();
	cout << islem->EnBuyuguGetir();
	
	cin.get();
	cin.ignore();
	return 0;
}
