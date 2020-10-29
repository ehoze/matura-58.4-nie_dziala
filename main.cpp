#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

vector <int> t[1100];

int obliczSkok()
{
	int i;
	int n = 0, m = 0;
	int roznica_kwadratow;
	ifstream file; 
 	ofstream fileOut;
	file.open("B:\\Programowanie z Panem Fulaa\\Zadanie Mat 58.4\\dane_systemy1.txt");
	fileOut.open("B:\\Programowanie z Panem Fulaa\\Zadanie Mat 58.4\\wyjscie.txt");
	
	char* endptr; // to jest wskaŸnik na miejsce, gdzie przy konwersji z systemu czworkowego wyst¹pi b³¹d - nieu¿ywana zmienna
	long liczba, min; //liczba dziesietna, minimum z pliku
	string liczba1, liczba2; // temperatura & godzina (chyba)
	bool pierwszy = true;
	
	if(file.good())  //sprawdzenie czy plik istnieje
     while(!file.eof())        //petla wykonuje sie az program dojedzie do konca pliku
     {
               	file>> liczba1 >> liczba2;   // wczyta dwie liczby z pliku (w wierszu) do 2 stringów
               	liczba =  strtol(liczba2.c_str(), &endptr, 2);
				t[i].push_back(liczba); 
               
//               roznica_kwadratow = (a-b)2=a2-2ab+b2;
//               
//               
//               
//               roznica = abs();
               
              
               
               
               if(pierwszy) //jeœli to pierwsza liczba z pliku - bêdzie nowym MINIMUM
               {
                            min = liczba;
                            pierwszy = false;
               }
               else //jeœli to kolejna liczba z pliku...
                  if(liczba < min) //... i jest mniejsza od dotychczasowego minimum...
                       min = liczba; // ... to nadpisz min
                       cout << liczba << endl;
                       
                       
                       
                       
                       
    }
	for (vector<int>::iterator it=t[n].begin(); it!=t[n].end(); ++it)
	{
    roznica_kwadratow = pow(t[n],2) - 2*(t[n]*t[n+1]) + pow(t[n+1],2);
	}
	
	int roznica = abs(roznica_kwadratow);
    cout << endl << roznica;
 fileOut<< "58.1: " << min <<endl; 
 file.close();
 fileOut.close();
}




int main(int argc, char** argv)
{
	int i,j;
 	obliczSkok();
	return 0;
	
}
