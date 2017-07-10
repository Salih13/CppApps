/**
* @file                            : VeriOdev4
* @description                     : Dosyadan veri okuyup listeli bir þekilde dosyaya yazma programý
* @course                          : 2.Ogretim -C- grubu
* @assignment                      : 4
* @date Kodu oluþturduðunuz Tarih  : 20.12.2016
* @author                          : Enes KOCAMAN->enes.kocaman@ogr.sakarya.edu.tr
                                   : Salih GÜNGÖR->g140910053@sakarya.edu.tr
*/

#include "Islem.h"

Islem::Islem()
{
 	heap= new HeapAgac();
}

void Islem::SayilariOku()
{
	
		ifstream input("sayilar.txt", ios::in);
		while (input >> sayi)
		{
			heap->Ekle(sayi);
		}
		input.close();
	
}

void Islem::SiraliYaz()
{
	int elemanSayisi = heap->ElemanSayisiGetir();
	string* dizi = new string[elemanSayisi];
	ofstream output("sirala.txt", ios::out);

	for (int i = 0; i < elemanSayisi; i++)
	{
		dizi[i] = heap->ElemanCikar();
	}

	for (int i = elemanSayisi - 1; i >= 0; i--)
	{
		output << dizi[i] << endl;
	}
	output.close();
}

string Islem::EnBuyuguGetir()
{
	ifstream input("sirala.txt", ios::in);

	while (input >> sayi)
	{
	}
	input.close();
	return sayi;
}

Islem::~Islem()
{
	delete heap;
}
