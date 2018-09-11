#include  <iostream>
#include  <cstdlib>
#include  <string.h>
#include <conio.h>
#include "Arraylist.h"
#include "perro.h"

using namespace std;


typedef Arraylist<string> ArraylistString;
typedef Arraylist<int>    ArraylistInteger;
typedef Arraylist<float>  ArraylistFloat;
typedef Arraylist<Perro>  ArraylistPerro;  //usaremos el arreglo de objetos


/*Generica*/
template <class T>
void mostrarCola(Arraylist<T> s) {
    Arraylist<T> aux;
    T valor;
    while(!s.isEmpty()) {
        valor   =   s.sacar();
        cout <<valor<< endl;
        aux.agregar(valor);
    }
    while(!aux.isEmpty()) s.agregar(aux.sacar());
}

/*Especializada*/
void mostrarColaString(ArraylistString s) {
    while(!s.isEmpty()) {
        cout << endl << s.sacar();
    }
}

/*Mostrar para objetos*/
void mostrarColaObjetos(ArraylistPerro s){
  ArraylistPerro aux ;
  Perro objeto;
  while(!s.isEmpty()){
    objeto  =  s.sacar();
    cout<<"\nNombre :  "<<objeto.getNombre();
    cout<<"\nDueño : "<<objeto.getDueno();
    aux.agregar(objeto);
  }
  while(!aux.isEmpty()) s.agregar(aux.sacar());
}

Perro::Perro(){

  raza="No definido";
  nombre="No definido";
  dueno = "No definido";
  sexo="No definido";
  edad=0;
  color="No definido";

}
Perro::~Perro(){}
Perro::Perro(string r, string n, string d, string s, int e, string c): raza(r), nombre(n), dueno(d), sexo(s), edad(e), color(c){}
void Perro::setRaza(string r)
{
  raza=r;
}
string Perro::getRaza()
{
  return raza;
}

void Perro::setNombre(string n){
  nombre=n;
}
string Perro::getNombre(){
  return nombre;
}
void Perro::setDueno(string d)
{
  dueno = d;
}
string Perro::getDueno()
{
  return dueno;
}
void Perro::setSexo(string s){
  sexo=s;
}
string Perro::getSexo(){
  return sexo;
}

void Perro::setEdad(int e){
  edad=e;
}
int Perro::getEdad(){
  return edad;
}

void Perro::setColor(string c)
{
  color=c;
}
string Perro::getColor(){
  return color;
}
//-------FUNCIONES--------------------------------------------------------------------------------------------------------------------------------------------------
//1
void Add_obj (){
	
}
//2
void Add_n_obj(){
	
}
//3
void Remove (){
	
}
//4
void Remove_obj (){
	
}
//5
void Clear (){
	
}
//6
void Size (){
	
}
//7
void Get_i (){
	
}
//8
void IsEmpty (){
	
}
//9
void IndexOf (){
	
}
//10
void LastindexOf (){
	
}
//11
void Set (){
	
}
//12
void Contains (){
	
}

//------------------------------------------------------------------------------------------------------------------------------------------------------------------
int main() {

    cout << "Arraylist Template Simple" << endl;
    Arraylist<int>   s;
    ArraylistString  s2;
    ArraylistInteger s3;
    ArraylistFloat   s4;
    ArraylistPerro   s5;
    Perro harry("Pug","Harry","Dani","m",9,"beige");
    Perro perro1("kiltro","cholito","Sin dueño","m",9,"beige");


    s.agregar(5);
    s.agregar(6);
    s.agregar(7);

    s2.agregar("David");
    s2.agregar("Marilyn");
    s2.agregar("Programacion");

    s3.agregar(100);
    s3.agregar(101);
    s3.agregar(103);

    s4.agregar(15.6);
    s4.agregar(15.7);
    s4.agregar(15.8);

    s5.agregar(harry);
    s5.agregar(perro1);
    
	mostrarCola(s);
// mostrarCola(s2);
    mostrarCola(s3);
    mostrarCola(s4);

    cout<<"\nArreglo de objetos\n";
    mostrarColaObjetos(s5);


    cout <<"\n\nMostrarString\n";
    mostrarColaString(s2);
    cout << endl << endl;
    
    system ("pause");
    //-------------------------------------------------menu-----------------------------------------------------------------
inicio:
	system ("cls");
    int opcion;
    system("color F1");
    cout << "\n\n\t\t   Funcion Java "<< endl<< endl;
    cout << "1.  add(obj) "<< endl;
    cout << "2.  add(n, obj)  "<< endl;
    cout << "3.  remove(i) "<< endl;
    cout << "4.  remove(obj) "<< endl;
    cout << "5.  clear() "<< endl;
    cout << "6.  size() "<< endl;
    cout << "7.  get(i) "<< endl;
    cout << "8.  isEmpty() "<< endl;
    cout << "9.  indexOf(obj) "<< endl;
    cout << "10. lastindexOf(obj) "<< endl;
    cout << "11. set(i, obj) "<< endl;
    cout << "12. contains(obj) "<< endl;
    cout << "13. SALIR "<< endl<< endl<< endl;
    cout << "INGRESAR OPCION: ";
    cin >> opcion;

switch(opcion){
  case 1:{
  	system("cls");
  	cout << "\n\t\t   add(obj) \n\n";
   system ("color 2F");
   Add_obj ();
   getch();
   goto inicio;
   break;
  }
  case 2:{
  	system("cls");
  	cout << "\n\t\t  add(n, obj)  \n\n";
    system ("color 2F");
    Add_n_obj();
    getch();
    goto inicio;
    break;
  }
  case 3:{
  	system("cls");
  	cout << "\n\t\t  	remove(i)   \n\n";
    system ("color 2F");
    Remove ();
    getch();
    goto inicio;
    break;
  }
  case 4:{
  	system("cls");
  	cout << "\n\t\t  	remove(obj)   \n\n";
    system ("color 2F");
    Remove_obj ();
    getch();
    goto inicio;
    break;
  }
  case 5:{
  	system("cls");
  	cout << "\n\t\t  	clear()   \n\n";
    system ("color 2F");
    Clear ();
    getch();
    goto inicio;
    break;
  }
  case 6:{
  	system("cls");
  	cout << "\n\t\t  	size()   \n\n";
    system ("color 2F");
    Size ();
    getch();
    goto inicio;
    break;
  }
  case 7:{
  	system("cls");
  	cout << "\n\t\t  	get(i)   \n\n";
    system ("color 2F");
    Get_i ();
    getch();
    goto inicio;
    break;
  }
  case 8:{
  	system("cls");
  	cout << "\n\t\t  	isEmpty()    \n\n";
    system ("color 2F");
    IsEmpty ();
    getch();
    goto inicio;
    break;
  }
  case 9:{
  	system("cls");
  	cout << "\n\t\t  	indexOf(obj)    \n\n";
    system ("color 2F");
    IndexOf ();
    getch();
    goto inicio;
    break;
  }
  case 10:{
  	system("cls");
  	cout << "\n\t\t  	lastindexOf(obj)    \n\n";
    system ("color 2F");
    LastindexOf ();
    getch();
    goto inicio;
    break;
  }
  case 11:{
  	system("cls");
  	cout << "\n\t\t  	set(i, obj)   \n\n";
    system ("color 2F");
    Set ();
    getch();
    goto inicio;
    break;
  }
  case 12:{
  	system("cls");
  	cout << "\n\t\t  	contains(obj)   \n\n";
    system ("color 2F");
    Contains ();
    getch();
    goto inicio;
    break;
  }
  case 13:{
    system ("color 5f");
    system("cls");
    cout << "\n\n\n\n\t\t ADIOS \n\n\n\n";
    goto fin;
    break;
  }
  default:{
        system("color c0");
        cout << "\n\n\t\t ingrese una opcion valida \n\n\t\t";
        system("pause");
        system("cls");
        
        goto inicio;
        break;
        
    }

  system("pause");
  goto inicio;
  fin:
  	cout<<"\n\n\n";
    
    
    
    
    //-----------------------------------------------------------------------------------------------------------------------

   
    return 0;
}
}
