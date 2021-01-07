/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica Grupo 2 
 
 * @author Shaowei Weng
 * @date 06/01/2021
 * @brief En este ejercicio se propone desarrollar una clase Complejo que permita operar con números complejos.
 *        Incluya un método que permita determinar si el año correspondiente a una fecha es un año bisiesto o no.
 * @see https://es.wikipedia.org/wiki/29_de_febrero
 */

#include <iostream>           //std::cout, std::endl   
#include <string>             //std::string 
#include <cstdlib>            //exit
#include "complejo.h"  

int main () {
  Complejo complejo1{4, 5}, complejo2{7, -8};
  Complejo resultado;
  resultado = Add(complejo1, complejo2);
  resultado.print();
  resultado = Sub(complejo1, complejo2);
  resultado.print();
  return 0;
}
