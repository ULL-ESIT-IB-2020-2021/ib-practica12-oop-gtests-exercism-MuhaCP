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

#include <iostream>
#include "complejo.h"    


void Complejo::Print() {
  std::cout << real_ << " + "<< imaginario_ << "i" << std::endl;
}

void Complejo::SetComplex(double real, double imaginario) {
  real_ = real;
  imaginario_ = imaginario;
}

void Complejo::Add(Complejo complejo1, Complejo complejo2){
  real_ = complejo1.real_ + complejo2.real_;
  imaginario_ = complejo1.imaginario_ + complejo2.imaginario_;
}

void Complejo::Sub(Complejo complejo1, Complejo complejo2){
  real_ = complejo1.real_ - complejo2.real_;
  imaginario_ = complejo1.imaginario_ - complejo2.imaginario_;
}

void Complejo::Multiplicate(Complejo complejo1, Complejo complejo2){
  real_ = complejo1.real_ * complejo2.real_ - complejo1.imaginario_ * complejo2.imaginario_;
  imaginario_ = complejo1.real_ * complejo2.imaginario_ + complejo1.imaginario_ * complejo2.real_;
}
