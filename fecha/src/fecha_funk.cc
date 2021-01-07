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


/** Muestra como usar correctamente el programa
 *  En caso de uso incorrecto, muestra el mensaje y finaliza la ejecución del programa.
 *  El programa precisa de una fecha, un número y un nombre de un fichero para su funcionamiento.
 *
 *  @param[in] argc Number of command line parameters
 *  @param[in] argv Vector containing (char*) the parameters
 */

void Usage(int argc, char *argv[]) {
  if (argc < 2) {
    std::cout << argv[0] << ": Número de parámetros incorrectos" << std::endl;
    std::cout << "Pruebe " << argv[0] << " --help para más información" << std::endl;
    exit(EXIT_SUCCESS);
  }
  std::string parameter{argv[1]};
  if (parameter == "--help") {
    std::cout << "Este programa imprime en el fichero de salida (tercer parámetro)\
    las N (segundo parámetro) fechas cronológicamente posteriores a la introducida (primer parámetro)\
    Ejemplo de ejecución 29 07 2020 10 fichero_salida.txt"<< std::endl;
    exit(EXIT_SUCCESS);
  }
  if (argc != 6) {
    std::cout << argv[0] << ": Número de parámetros incorrectos" << std::endl;
    std::cout << "Pruebe " << argv[0] << " --help para más información" << std::endl;
    exit(EXIT_SUCCESS);
  }
}