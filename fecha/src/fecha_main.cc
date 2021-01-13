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

#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include "fecha.h"
#include <algorithm>

  int main(int argc, char* argv[]){

  std::string fichero_entrada{argv[1]};
  std::string fichero_salida{argv[2]};
  std::ifstream archivo_entrada{fichero_entrada};
  std::ofstream archivo_salida{fichero_salida};
  std::vector<std::string> date_string;
  std::vector<Date> date_object;
  std::string string_input;
  int day, month, year;

  while(std::getline(archivo_entrada, string_input)){
    
    day = std::stoi(string_input.substr(0,2));
    month = std::stoi(string_input.substr(3,2));
    year = std::stoi(string_input.substr(6,2));

    Date random_date(day, month, year);
    date_object.push_back(random_date);
  }
   
   std::sort(date_object.begin(),date_object.end());

    for(size_t i = 0; i < date_object.size(); ++i){
    archivo_salida << date_object[i] << std::endl;
  }
}