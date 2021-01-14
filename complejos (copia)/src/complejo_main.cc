
/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Muhammad Campos Preira
 * @date 10.enero.2021
 * @brief Programa cliente que permite operar con números complejos y haga 
 *        uso de la clase Complejo que diseñe. La clase Complejo ha de contener 
 *        al menos métodos que permitan (Print()) imprimir un número complejo 
 *        así como sumar (Add()) y restar (Sub()) números complejos. 
 *
 */


#include "complejo.h"
#include <iostream>

  
int main (int argc, char* argv[]) {
  
  Complejo complejo1{7, 6}, complejo2{-5, 1};
  Complejo solucion{0,0};

  solucion.Add(complejo1, complejo2);
  solucion.Print();
  solucion.Sub(complejo1, complejo2);
  solucion.Print();
  solucion.Multiplicate(complejo1, complejo2);
  solucion.Print();

  return 0;
}
