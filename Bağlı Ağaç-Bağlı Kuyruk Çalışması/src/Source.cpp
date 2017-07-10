#include <iostream>
#include <fstream>
#include <string>
#include "BagliKuyruk.h"
#include "BagliAgac.h"
using namespace std;

int main()
{	
	BagliAgac* agac = new BagliAgac();
	BagliKuyruk* kuyruk = new BagliKuyruk();
	string sayi;
	ifstream input("sayilar.txt");	
	while (!input.eof())
	{	
		input >> sayi;
		if (input.eof())
			break;		
		kuyruk->ElemanEkle(sayi);
		agac->ElemanEkle(kuyruk->Topla(sayi));		
	}		
	agac->Inorder();
	cout << endl;
	agac->Preorder();
	cout << endl;
	agac->Postorder();
	cout << endl;
	cin.get();
	cin.ignore();
}
