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

#ifndef DATE_H
#define DATE_H
#include <string>

const std::string kHelpText = "El programa imprime en el fichero de salida (segundo parámetro) las \
fechas que contiene el fichero de entrada (primer parametro), en orden cronológigo";

void Usage(int argc, char *argv[]);


class Date {
 private:
  int year_{};
  int month_{};
  int day_{};
 
 public:
  Date(int year = 2000, int month = 1, int day = 1) 
		   : year_{year}, month_{month}, day_{day} {}
  int year() const { return year_; }
  int month() const { return month_; }
  int day() const { return day_; }
	friend std::ostream& operator<<(std::ostream &out, const Date &date);
	friend bool operator== (const Date &d1, const Date &d2);
	friend bool operator< (const Date &d1, const Date &d2);
  friend bool operator> (const Date &d1, const Date &d2);
};

std::string ToString(const Date $date);
 
#endif
