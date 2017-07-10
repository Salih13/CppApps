/**
* @file                            : VeriOdev4
* @description                     : Dosyadan veri okuyup listeli bir �ekilde dosyaya yazma program�
* @course                          : 2.Ogretim -C- grubu
* @assignment                      : 4
* @date Kodu olu�turdu�unuz Tarih  : 20.12.2016
* @author                          : Enes KOCAMAN->enes.kocaman@ogr.sakarya.edu.tr
                                   : Salih G�NG�R->g140910053@sakarya.edu.tr
*/

#ifndef HEAPAGAC_H
#define HEAPAGAC_H 
#include "Sayi.h"
using namespace std;
class HeapAgac
{
private:
	int boyut;
	Sayi* heap;
	int elemanSayisi;
public:
	
	HeapAgac();
	
	void Ekle(string);
	void YukariDogruHeap(int);
	void AsagiDogruHeap(int);
	
	string ElemanCikar();
	void BoyutArttir();
	int EbeveynBul(int);
	int SolCocukGetir(int);
	int SagCocukGetir(int);
	int ElemanSayisiGetir();

	~HeapAgac();
};
#endif
