#include "BagliKuyruk.h"

BagliKuyruk::BagliKuyruk()
{
	ilk = NULL;
	son = NULL;
}

bool BagliKuyruk::bosMu()
{
	return ilk == NULL;
}

void BagliKuyruk::ElemanEkle(string eleman)
{
	KuyrukDugum *yenidugum = new KuyrukDugum();
	for (int i = 0; i < eleman.length(); i++)
	{
		yenidugum->veri = (eleman[i] - '0');
		yenidugum->sonraki = NULL;
		if (bosMu())
		{
			ilk = yenidugum;
			son = yenidugum;
		}
		else
		{
			son->sonraki = yenidugum;
			son = yenidugum;
		}
		cout << yenidugum->veri << "-";
	}
	cout << endl;
}

int BagliKuyruk::Topla(string sayi)
{
	int toplam = 0;
	for (int i = 0; i < sayi.length(); i++)
		toplam = toplam + (sayi[i] - '0');
	return toplam;
}
