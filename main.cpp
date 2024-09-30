#include <iostream>
using namespace std;
int main() 
{
  int n1, n2, n3, massimo;
  cout << "qual è il primo numero?" << endl;
  cin >> n1;
  cout << "qual è il secondo numero?" << endl;
  cin >> n2;
  cout << "qual è il terzo numero?" << endl;
  cin >> n3;
  if (n1>n2)
  {
    massimo=n1;
  }
  else
  {
    if (n2>n3)
    {
      massimo=n2;
    }
    else
    {
      massimo = n3;
    }
  }
   cout << "il numero maggiore è " << massimo << endl;
  }


//LEGGERE LE ISTRUZIONI NEL FILE README.md
