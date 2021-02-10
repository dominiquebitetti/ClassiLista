/*
*   ClassiLista.cpp
*   Author: Bitetti Dominique
*   Date: 05/02/2021
*   Classe di una lista
*/

#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

class lista
{
private:
    string *info;
    int l;
    int top=0;
public:
    lista(int lunghezza)
    {
        l = lunghezza;
        info = new string [l];
    }

    int big()
    {
        cout<<l<<endl;
        return l;
    }

    string read(int i)
    {
        return info[i];
    }

    void print ()
    {
        for (int i=0; i<l; i++)
        {
            cout<<read(i)<<endl;
        }
    }

    void add (string valore)
    {
        if(top<100)
        {
            info[top] = valore;
            top++;
        }
    }

    void write (int i, string valore)
    {
    	info[i]=valore;
	}

    string generastringa ()
    {
        string s;
        int x =(rand() % 20) + 1;
        for (int i=0; i<x; i++)
        {
            s=s+"*";
        }
        return s;
    }
};

int main()
{
    lista f(100);
    f.big();
    srand(time(NULL));

    for (int i=0; i<100; i++)
    {
        f.add(f.generastringa());
    }

    f.print();
}
