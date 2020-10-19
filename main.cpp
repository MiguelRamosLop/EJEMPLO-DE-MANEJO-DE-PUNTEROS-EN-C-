#include <iostream>
using namespace std;

int main() {
  cout << "                   PUNTEROS \n\n";
  string soy_var = "Me llamo soy_var y soy de tipo string";

  cout << "CONTENIDO de la variable string:          < soy_var > ----> "<<soy_var<<endl;
  cout << "DIRECCION de memoria de la variable string: < soy_var > -> "<<&soy_var<<endl;
  string *puntero_tipo_string;
  
  cout << "\n\nCONTENIDO de la variable puntero a string: < puntero_tipo_string > ----> "<<puntero_tipo_string<<endl;
  cout << "DIRECCION de la variable puntero a string: < puntero_tipo_string > ----> "<<&puntero_tipo_string<<endl;

  puntero_tipo_string = &soy_var;
  cout << "\n\nCONTENIDO de la variable puntero a string: < puntero_tipo_string > ----> "<<puntero_tipo_string<<endl;
  cout << "DIRECCION de la variable puntero a string: < puntero_tipo_string > ----> "<<&puntero_tipo_string<<endl;

  *puntero_tipo_string = "Soy un texto que modifica lo que estaba guardado en lo apuntado por : < puntero_tipo_string > aunque sigo ocupando la misma posicion de memoria, no gasto memoria";
  cout << "\n\nCONTENIDO de la variable puntero a string: < puntero_tipo_string > ----> "<<*puntero_tipo_string<<endl;
  cout << "DIRECCION de la variable puntero a string: < puntero_tipo_string > ----> "<<&puntero_tipo_string<<endl;

  string **puntero_tipo_string1=&puntero_tipo_string;
  cout << "\n\nCONTENIDO de la variable puntero a string: < puntero_tipo_string1 > ----> "<<**puntero_tipo_string1<<endl;
  cout << "CONTENIDO / DIREDIRECCIÓN de la variable puntero a string: < puntero_tipo_string1 > ----> "<<*puntero_tipo_string1<<endl;
  cout << "DIRECCION de la variable puntero a string: < puntero_tipo_string1 > ----> "<<&puntero_tipo_string1<<endl;









}