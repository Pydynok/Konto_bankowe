#include <iostream>
#include "MojeKontoBankowe.h"
#include "Klient.h"
#include "Data.h"

using namespace Konto_bankowe;

[STAThreadAttribute]
int main(){

	MojeKontoBankowe okno;
	okno.ShowDialog();

	return 0;
}