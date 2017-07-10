/**
* @file                            : VeriOdev4
* @description                     : Dosyadan veri okuyup listeli bir þekilde dosyaya yazma programý
* @course                          : 2.Ogretim -C- grubu
* @assignment                      : 4
* @date Kodu oluþturduðunuz Tarih  : 20.12.2016
* @author                          : Enes KOCAMAN->enes.kocaman@ogr.sakarya.edu.tr
                                   : Salih GÜNGÖR->g140910053@sakarya.edu.tr
*/

#include "Sayi.h"

bool Sayi::operator<(Sayi sayi2)
{
	if (sayi.length() < sayi2.sayi.length())
		return true;
	else if (sayi.length() == sayi2.sayi.length())
	{
		for (int i = 0; i < sayi.length(); i++)
		{
			if (sayi[i] < sayi2.sayi[i])
				return true;
			else if (sayi[i] > sayi2.sayi[i])
				return false;
		}
	}
	else
		return false;
}

bool Sayi::operator>(Sayi sayi2)
{
	if (sayi.length() > sayi2.sayi.length())
		return true;
	else if (sayi.length() == sayi2.sayi.length())
	{
		for (int i = 0; i < sayi.length(); i++)
		{
			if (sayi[i] > sayi2.sayi[i])
				return true;
			else if (sayi[i] < sayi2.sayi[i])
				return false;
		}
	}
	else
		return false;
}
