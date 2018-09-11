#include<iostream>

using namespace std;

class Perro{
public:
  Perro();
  ~Perro();
  Perro(string, string, string, string, int, string);
  void setRaza(string);
  string getRaza();
  void setNombre(string);
  string getNombre();
  void setSexo(string);
  string getSexo();
  void setDueno(string);
  string getDueno();
  void setEdad(int);
  int getEdad();
  void setColor(string);
  string getColor();
//  void contenedorPerros(Perro);

private:
  string raza;
  string nombre;
  string sexo;
  string dueno;
  int edad;
  string color;
};
