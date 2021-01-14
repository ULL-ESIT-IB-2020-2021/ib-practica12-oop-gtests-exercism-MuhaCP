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
 *
 */


class Complejo{
 private:
  double real_;
  double imaginario_;

 public:
  Complejo(double real = 0, double imaginario = 0){real_ = real; imaginario_ = imaginario;};
  void Print();
  void SetComplex(double real_, double imaginario_);
  int GetReal() { return real_; }
  int GetImaginary() { return imaginario_; }
  void Add(Complejo complejo1, Complejo complejo2);
  void Sub(Complejo complejo1, Complejo complejo2);
  void Multiplicate(Complejo complejo1, Complejo complejo2);
  friend Complejo operator* (Complejo &complejo, int real);

};