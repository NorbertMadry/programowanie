#include <iostream>
#include <fstream>
#include <cstdlib> //uzywa exit 0

using namespace std;

int main()
{
    int liczba;

    ofstream wyjscie;
    wyjscie.open("wyj.txt", ios::out);

    ifstream wejscie;
    wejscie.open("D:\Desktop\wej.txt", ios::in);

    if(wejscie.good()==false)
    {
        cout<<"NIE MA TAKIEGO PLIKU !";
        exit(0);
    }
    if(wejscie.good())
        while(!wejscie.eof())
    {
        wejscie>>liczba;
            if(liczba%2==0)
                wyjscie<<liczba<<" ";
    }

    wejscie.close();
    wyjscie.close();

    return 0;
}
