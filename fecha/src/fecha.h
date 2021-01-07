/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica Grupo 2 
 
 * @author Shaowei Weng
 * @date 06/01/2021
 * @brief Definiciones y clases
 * @see https://es.wikipedia.org/wiki/29_de_febrero
 */

#include <iostream>

class Fecha {
 private:
    int year_ {2021};
    int month_ {01};
    int day_ {06};
    std::string LeapYear {};
 public:
  Fecha(int day, int month, int year){
    year_ = year;
    day_ = day;
    month_ = month;
  }

void SetLastDay(int last_day){
  day_ = last_day;
}
void SetLastMonth(int last_month){
  month_ = last_month;
}
void SetLeapYear(std::string leapyear){
  LeapYear = leapyear;
}

void CheckLeapYear(){
  if (year_ % 4 == 0 && year_ %100 != 0){
    SetLeapYear("Es Bisiesto");
  }
    else{
      if (year_ % 400 == 0){
        SetLeapYear("Es Bisiesto");
      }
        else{
          SetLeapYear("No es Bisiesto");
        }
    }
}

void print(int Ndates, std::string file_name){
  std::ofstream myfile (file_name);
  if (!myfile){
    std::cerr << "No se pudo abrir el archivo" << std::endl;
    exit(EXIT_FAILURE);
  }
  int i{0};
  int contador{0};
  while (i < Ndates && i < 30 && contador < Ndates){
    int last_day = day_ - 1;
    SetLastDay(last_day);
    CheckLeapYear();
    myfile << day_ << "/" << month_ << "/" << year_ << "/" << LeapYear << std::endl; 
    ++i;
    ++contador;
    if (day_ == 1){
      int last_month = month_ - 1;
      SetLastMonth(last_month);
      SetLastDay(30);
      CheckLeapYear();
      myfile << day_ << "/" << month_ << "/" << year_ << "/" << LeapYear << std::endl; 
      i = 0;
      ++contador;
    }
  }
}
};

void Usage(int argc, char *argv[]);