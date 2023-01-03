
#include <iostream>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string>
#include <string.h> 

using namespace std;

int main()
{

    setlocale(LC_ALL, "");
    int zmiana = abs(int('a') - int('A'));
    char tab[100] = {};
    char* wskodczyt = tab;
    char* wskzapis = tab;



    string line;
    getline(cin, line); // Wczytaj cały wiersz do obiektu typu string
    strncpy_s(tab, line.c_str(), sizeof(tab) - 1); // Skopiuj ciąg znaków z obiektu string do tablicy znaków
    //strcpy(tab, cin.getline().c_str());
    //fgets(tab, 100, stdin);
    tab[sizeof(tab) - 1] = '\0';
    //tab[strlen(tab) - 1] = '\0';
    cout << tab;

    for (int i = 0; i < 100; i++)
    {


        cout << int(*wskodczyt) << '\t';
        wskodczyt++;
    }
    wskodczyt = tab;
    int l = 0;
    while (l < 100 && *wskodczyt != '\0')
    {
        if (isspace(*wskodczyt))
            wskodczyt++;

        else {
            if(*wskodczyt>='A' && *wskodczyt<='Z')
            //*wskzapis = *wskodczyt + zmiana;
            *wskzapis = tolower(*wskodczyt);

            else if(*wskodczyt >= 'a' && *wskodczyt <= 'z')
            *wskzapis = *wskodczyt - zmiana;
            else
            *wskzapis = *wskodczyt;

            wskodczyt++;
            wskzapis++;

        }
        l++;
    }
    *wskzapis = '\0';
    cout << strlen(tab) << tab;
    


}



