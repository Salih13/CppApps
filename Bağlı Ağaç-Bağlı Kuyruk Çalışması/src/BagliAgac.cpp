#include "BagliAgac.h"

BagliAgac::BagliAgac()
{
	kok = NULL;
}

bool BagliAgac::bosMu()
{
	return kok == NULL;
}

void BagliAgac::ElemanEkle(int eleman)
{
	AgacDugum* yeni = new AgacDugum();
	yeni->veri = eleman;
	yeni->sag = NULL;
	yeni->sol = NULL;
	if (bosMu())
		kok = yeni;
	else
		ElemanEkle(kok, yeni);
}

void BagliAgac::ElemanEkle(AgacDugum * yer, AgacDugum * eklenecek)
{
	if (yer->veri < eklenecek->veri)
	{
		if (yer->sag == NULL)
			yer->sag = eklenecek;
		else
			ElemanEkle(yer->sag, eklenecek);
	}
	else if (yer->veri > eklenecek->veri)
	{
		if (yer->sol == NULL)
			yer->sol = eklenecek;
		else
			ElemanEkle(yer->sol, eklenecek);
	}
}

void BagliAgac::Preorder()
{
	cout << "Preorder : ";
	Preorder(kok);
}

void BagliAgac::Preorder(AgacDugum * dugum)
{
	if (dugum != NULL)
	{
		cout << dugum->veri << " ";
		Preorder(dugum->sol);
		Preorder(dugum->sag);
	}
}

void BagliAgac::Inorder()
{
	cout << "Inorder : ";
	Inorder(kok);
}

void BagliAgac::Inorder(AgacDugum * dugum)
{
	if (dugum != NULL)
	{
		Inorder(dugum->sol);
		cout << dugum->veri << " ";
		Inorder(dugum->sag);
	}
}

void BagliAgac::Postorder()
{
	cout << "Postorder : ";
	Postorder(kok);
}

void BagliAgac::Postorder(AgacDugum * dugum)
{
	if (dugum != NULL)
	{
		Postorder(dugum->sol);
		Postorder(dugum->sag);
		cout << dugum->veri << " ";
	}
}
