#include <iostream>
#include "MyString.h"
#include <windows.h>
using namespace std;
 
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL,"rus");
    MyString N = "VhodStroka";
    MyString O;
    MyString P(N);
    N.Print();
 
    MyString I("Stroka");
    O=N+I;
    O+=I;
    O[0]='Á';
 
    if (N==P)
        cout<<"N=P"<<endl;;
    if (N!=P)
        cout<<"N<>P"<<endl;;
 
    MyString R;
    cout<<"Vvedite R:"<<endl;
    cin>>R;
    cout<<R<<endl;
 
    if (R.FindSymbol('k'))
        cout<<"V stroke R sodergitsya symbol 'k'"<<endl;
    if (R.Find("brak"))
        cout<<"V stroke R sodergitsya podstroka 'brak'"<<endl;
 
	getchar();
	getchar();
	getchar();
	getchar();
	getchar();
    return 0;
}