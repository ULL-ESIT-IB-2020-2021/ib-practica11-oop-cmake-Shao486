/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica Grupo 2 
 
 * @author Shaowei Weng
 * @date 06/01/2021
 * @brief Desarrolle una clase Fecha que permita representar y gestionar fechas.
 *        Incluya un método que permita determinar si el año correspondiente a una fecha es un año bisiesto o no.
 * @see https://es.wikipedia.org/wiki/29_de_febrero
 */

#include <iostream>           //std::cout, std::endl   
#include <string>             //std::string 
#include <cstdlib>            //exit
#include <fstream>
#include "fecha.h"  

/** Main function
 *  @param[in] argc Number of command line parameters
 *  @param[in] argv Vector containing (char*) the parameters
 */

int main (int argc, char* argv[]) {
  Usage(argc, argv);
  std::string file_name {argv[5]};
  int day {std::stoi(argv[1])};
  int month {std::stoi(argv[2])};
  int year {std::stoi(argv[3])};
  int Ndates {std::stoi(argv[4])};
  Fecha fecha {day, month, year};
  fecha.print(Ndates, file_name);
  return 0;
}
