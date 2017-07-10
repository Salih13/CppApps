/**
* @file                            : VeriOdev4
* @description                     : Dosyadan veri okuyup listeli bir þekilde dosyaya yazma programý
* @course                          : 2.Ogretim -C- grubu
* @assignment                      : 4
* @date Kodu oluþturduðunuz Tarih  : 20.12.2016
* @author                          : Enes KOCAMAN->enes.kocaman@ogr.sakarya.edu.tr
                                   : Salih GÜNGÖR->g140910053@sakarya.edu.tr
*/

#ifndef SAYI_H
#define SAYI_H
#include <iostream>
#include <string>
using namespace std;
class Sayi
{
public:
	string sayi;
	bool operator<(Sayi);
	bool operator>(Sayi);

};
#endif
