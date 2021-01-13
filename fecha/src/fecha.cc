/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Muhammad Campos Preira
 * @date 25 Jun 2020
 * @brief Desarrolle una clase Fecha que permita representar y gestionar fechas. Incorpore en la clase los miembros de datos 
 *        y métodos que considere adecuados para la finalidad que se persigue en este ejercicio. Realice un programa 
 *        cliente fechas.cc que 
 *        
 *
 */

#include <iostream>
#include <sstream>
#include <string>
#include "fecha.h"

// Sobrecargar operador de inserción
std::ostream& operator<< (std::ostream &out, const Date& date) {
 out << date.day() << "/" << date.month() << "/" << date.year();
 return out;
}


// Convierte una Fecha en string
std::string ToString(const Date date) {
	std::string resultado{""};
  std::stringstream os;

	
	os << date.day() << "/" << date.month() << "/" << date.year();
  os >> resultado;

	return resultado;
}

bool operator== (const Date &d1, const Date &d2) {
  return (d1.day() == d2.day() && d1.month() == d2.month() && d1.year() == d2.year());
}

bool operator< (const Date &d1, const Date &d2) {
	if (d1.year() < d2.year()) {
		return true;
	}
	if ((d1.year() == d2.year()) && (d1.month() < d2.month())) {
		return true;
	}
	if ((d1.year() == d2.year()) && (d1.month() == d2.month()) && (d1.day() < d2.day())) {
		return true;
	}
	return false;
}

bool operator> (const Date &d1, const Date &d2) {
	if (d1.year() > d2.year()) {
		return true;
	}
	if ((d1.year() == d2.year()) && (d1.month() > d2.month())) {
		return true;
	}
	if ((d1.year() == d2.year()) && (d1.month() == d2.month()) && (d1.day() > d2.day())) {
		return true;
	}
	return false;
}


/** Muestra el modo de uso correcto del programa
 *  En caso de que el uso no sea el correcto, muestra el mensaje y finaliza
 *  la ejecución del programa.
 *  El programa precisa un único número natural para su ejecución.
 *
 *  @param[in] argc Number of command line parameters
 *  @param[in] argv Vector containing (char*) the parameters
 */
void Usage(int argc, char *argv[]) {
  if (argc != 3) {
    if (argc == 2) {
      std::string parameter{argv[1]};
      if (parameter == "--help") {
        std::cout << kHelpText << std::endl;
        exit(EXIT_SUCCESS);
      }
    }
    std::cout << argv[0] << " - Gestión de fechas" << std::endl;
    std::cout << "Modo de uso: ./fecha fichero de entrada fichero_salida" << std::endl;
    std::cout << "Pruebe ./fecha --help para más información" << std::endl;
    exit(EXIT_SUCCESS);
  }

}