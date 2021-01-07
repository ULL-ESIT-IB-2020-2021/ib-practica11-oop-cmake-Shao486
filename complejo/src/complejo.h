/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica Grupo 2 
 
 * @author Shaowei Weng
 * @date 06/01/2021
 * @brief Definiciones y clases
 * @see 
 */

#ifndef COMPLEJO_H
#define COMPLEJO_H
#include <iostream>

class Complejo {
 private:
  int real_ {};
  int imaginario_ {};
  std::string unidad_imaginaria_ {"i"};
 public:
  Complejo(int real, int imaginario){
    real_ = real;
    imaginario_ = imaginario;
  }

void SetReal(int real){real_ = real;}
int GetReal(){return real_;}
void SetImaginario(int imaginario){imaginario_ = imaginario;}
int GetImaginario(){return imaginario_;}

Complejo Add(complejo complejo1, complejo complejo2);
Complejo Sub(complejo complejo1, complejo complejo2);
void print(){
  std::cout << real_ << " + " << imaginario_ << unidad_imaginaria_ << std::endl; 
}
};
#endif