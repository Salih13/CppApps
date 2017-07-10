/**
* @file                            : VeriOdev4
* @description                     : Dosyadan veri okuyup listeli bir þekilde dosyaya yazma programý
* @course                          : 2.Ogretim -C- grubu
* @assignment                      : 4
* @date Kodu oluþturduðunuz Tarih  : 20.12.2016
* @author                          : Enes KOCAMAN->enes.kocaman@ogr.sakarya.edu.tr
                                   : Salih GÜNGÖR->g140910053@sakarya.edu.tr
*/

#include "HeapAgac.h"

HeapAgac::HeapAgac()
{
	boyut=100;
	heap= new Sayi[boyut];
	elemanSayisi=0;
}

void HeapAgac::Ekle(string eleman)
{
	if (elemanSayisi == boyut)
		BoyutArttir();
	elemanSayisi++;
	heap[elemanSayisi - 1].sayi = eleman;
	YukariDogruHeap(elemanSayisi - 1);
}

void HeapAgac::YukariDogruHeap(int indis)
{
	if (indis == 0)
		return;
	int ebeveyn = EbeveynBul(indis);
	if (heap[ebeveyn] < heap[indis])
	{
		Sayi gecici = heap[ebeveyn];
		heap[ebeveyn] = heap[indis];
		heap[indis] = gecici;
		YukariDogruHeap(ebeveyn);
	}
}

void HeapAgac::AsagiDogruHeap(int indis)
{
	int sol = SolCocukGetir(indis);
	int sag = SagCocukGetir(indis);
	int max = 0;
	if (sag >= elemanSayisi)
	{
		if (sol >= elemanSayisi)
			return;
		else
			max = sol;
	}
	else
	{
		if (heap[sol] > heap[sag])
			max = sol;
		else
			max = sag;
	}
	if (heap[max] > heap[indis])
	{
		string temp;
		temp = heap[indis].sayi;
		heap[indis].sayi = heap[max].sayi;
		heap[max].sayi = temp;
		AsagiDogruHeap(max);
	}
}

string HeapAgac::ElemanCikar()
{
	string silinecek;
	if (elemanSayisi > 0)
	{
		silinecek = heap[0].sayi;
		heap[0].sayi = heap[elemanSayisi - 1].sayi;
		AsagiDogruHeap(0);
		elemanSayisi--;
	}
	return silinecek;
}

void HeapAgac::BoyutArttir()
{
	boyut = boyut * 2;
	Sayi* yeni = new Sayi[boyut];
	for (int i = 0; i<boyut; i++)
		yeni[i] = heap[i];
	delete[] heap;
	heap = yeni;
}

int HeapAgac::EbeveynBul(int indis)
{
	return (indis - 1) / 2;
}

int HeapAgac::SolCocukGetir(int indis)
{
	return (2 * indis + 1);
}
int HeapAgac::SagCocukGetir(int indis)
{
	return (2 * indis + 2);
}
int HeapAgac::ElemanSayisiGetir()
{
	return elemanSayisi;
}
HeapAgac::~HeapAgac()
{
	delete[] heap;
}
