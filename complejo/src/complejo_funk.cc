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
#include "complejo.h"   

Complejo Complejo::Add(complejo complejo1, complejo complejo2){
  Complejo complejo;
  int real1 = complejo1.GetReal();
  int real2 = complejo2.GetReal();
  int imaginario1 = complejo1.GetImaginario();
  int imaginario2 = complejo2.GetImaginario();
  int real = real1 + real2;
  complejo.SetReal(real);
  int imaginario = imaginario1 + imaginario2;
  complejo.SetImaginario(imaginario);
  return complejo; 
}

Complejo Complejo::Sub(complejo complejo1, complejo complejo2){
  Complejo complejo;
  int real1 = complejo1.GetReal();
  int real2 = complejo2.GetReal();
  int imaginario1 = complejo1.GetImaginario();
  int imaginario2 = complejo2.GetImaginario();
  int real = real1 - real2;
  complejo.SetReal(real);
  int imaginario = imaginario1 - imaginario2;
  complejo.SetImaginario(imaginario);
  return complejo; 
}
