#include <iostream>
#include <string>
#include <support.h>


using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    /*Toto *pToto = new Toto(12,'M',1.62); exemple */

    Support* support1 = new Support("Grand", "Moyen", "Petit");
    Support* support2 = new Support("Vide", "Vide", "Vide");
    Support* support3 = new Support("Vide", "Vide", "Vide");










    delete support1;
    delete support2;
    delete support3;

    return 0;
}
