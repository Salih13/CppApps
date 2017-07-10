#ifndef BAGLIKUYRUK_H
#define BAGLIKUYRUK_H
#include "KuyrukDugum.h"
#include <iostream>
using namespace std;
class BagliKuyruk
{
private:
	KuyrukDugum *ilk;
	KuyrukDugum *son;
	bool bosMu();
public:
	BagliKuyruk();
	
	void ElemanEkle(string eleman);

	int Topla(string sayi);
	
};
#endif
