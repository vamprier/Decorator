
#include <iostream>
#include "TShirts.h"
#include "Tie.h"
#include "Suit.h"
#include "Sneakers.h"
#include "LeatherShoes.h"
#include "BigTrouser.h"

using namespace std;

int main()
{
	Person* zj = new Person("赵娟");
	cout<<"第一种装扮："<<endl;

	Sneakers* pqx = new Sneakers();
	BigTrouser* kk = new BigTrouser();
	TShirts* dtx = new TShirts();

	pqx->Decorate(zj);
	kk->Decorate(pqx);
	dtx->Decorate(kk);
	dtx->show();

	cout<<"第二种装扮："<<endl;

	LeatherShoes* px = new LeatherShoes();
	Tie* ld = new Tie();
	Suit* xz = new Suit();

	px->Decorate(zj);
	ld->Decorate(px);
	xz->Decorate(ld);
	xz->show();

	cin.ignore();
	return 0;
}
