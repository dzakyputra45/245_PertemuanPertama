
#include <iostream>
using namespace std;
int main()
{
    //Begin
    //numeric nAlas, nTinggi, nLuas
    //Display 'Masukkan alas ='
    //Accept nAlas
    //Display 'Masukkan Tinggi ='
    //Accept nTinggi
    //Compute nLuas = nAlas*nTinggi/2
    //Display 'luasnya =' + nLuas
    //End

    float nAlas, nTinggi, nLuas;
    cout << "Masukkan Alas=";
    cin >> nAlas;
    cout << "Masukkan Tinggi=";
    cin >> nTinggi;
    nLuas = nAlas * nTinggi / 2;
    cout << "Luasnya=" << nLuas;


}
