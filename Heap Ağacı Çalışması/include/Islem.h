/**
* @file                            : VeriOdev4
* @description                     : Dosyadan veri okuyup listeli bir þekilde dosyaya yazma programý
* @course                          : 2.Ogretim -C- grubu
* @assignment                      : 4
* @date Kodu oluþturduðunuz Tarih  : 20.12.2016
* @author                          : Enes KOCAMAN->enes.kocaman@ogr.sakarya.edu.tr
                                   : Salih GÜNGÖR->g140910053@sakarya.edu.tr
*/

#ifndef ISLEM_H
#define ISLEM_H 
#include "HeapAgac.h"
#include <string>
#include <fstream>
using namespace std;
class Islem
{
private:
	string sayi;
	HeapAgac* heap;
public:
	Islem();
	
	void SayilariOku();
	
	void SiraliYaz();

	string EnBuyuguGetir();
	~Islem();
};
#endif
