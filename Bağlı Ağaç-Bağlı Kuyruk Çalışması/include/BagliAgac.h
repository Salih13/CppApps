#ifndef BAGLIAGAC_H
#define BAGLIAGAC_H 
#include "AgacDugum.h"
#include <iostream>
using namespace std;
class BagliAgac
{
private:
	AgacDugum* kok;

	bool bosMu();

	void ElemanEkle(AgacDugum* yer, AgacDugum* eklenecek);

	void Preorder(AgacDugum* dugum);

	void Inorder(AgacDugum* dugum);

	void Postorder(AgacDugum* dugum);
public:	
	BagliAgac();

	void ElemanEkle(int eleman);
	
	void Preorder();
	
	void Inorder();
	
	void Postorder();
};
#endif
