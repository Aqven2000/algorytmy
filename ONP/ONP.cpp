#include <iostream>
#include <sstream>
#include <iomanip>
#include <string>

using namespace std;

const int MAX_S = 100;  // definiuje rozmiar stosu

int main( )
{
  double S [ MAX_S ];   // stos
  int p = 0;            // wskaźnik stosu
  string e;             // element wyrażenia ONP
  double v1, v2;        // argumenty operacji
  stringstream ss;      // strumień łańcuchowy

  while( true )         // w pętli przetwarzamy wyrażenie ONP
  {
    getline ( cin, e );

    if( e == "=" ) break; // sprawdzamy koniec wyrażenia

    ss.str ( "" );      // usuwamy wszelki tekst ze strumienia
    ss.clear( );        // czyścimy błędy konwersji z poprzednich wywołań
    ss << e;            // odczytany element umieszczamy w strumieniu

    if( ss >> v1 )      // konwertujemy na liczbę i sprawdzamy, czy nie było błędu
                        // liczba
      S [ p++ ] = v1;   // umieszczamy ją na stosie

    else
    {                   // operator
      v2 = S [ --p ];   // pobieramy ze stosu dwa argumenty
      v1 = S [ --p ];
      switch( e [ 0 ] ) // wykonujemy operacje wg operatora
      {
        case '+' : v1 += v2; break;
        case '-' : v1 -= v2; break;
        case '*' : v1 *= v2; break;
        case '/' : v1 /= v2; break;
      }
      S [ p++ ] = v1;   // wynik umieszczamy na stosie
    }
  }

  cout << fixed << S [ --p ] << endl; // wypisujemy wynik ze szczytu stosu

  return 0;
} 