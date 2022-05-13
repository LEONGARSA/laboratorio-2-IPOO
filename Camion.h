/*
  Archivo: Camion.h

  Autores: 
  Neil Jeison Balcero <neil.balcero@correounivalle.edu.co>
  Leonardo Andres Garcia Salas <garcia.leonardo@correounivalle.edu.co>
  Jhonier alberto ipia noscue <jhonier.ipia@correounivalle.edu.co>
  Fecha creación:2022-04-29
  Fecha última modificación:2022-05-05
  Licencia: GNU- GPL
*/

/**
  CLASE: Camion
  INTENCIÓN: Se quiere guardar la placa, la capacidad máxima de algún camión, el peso total y si puede realizar la mudanza.
  RELACIONES: ninguna
*/

#ifndef CAMION_H
#define CAMION_H

#include<string>
using namespace std;

class Camion
{
  private:
  string placa;
  int capacidadMaximaCamion;    
  int pesoTotalCamion;
  bool mudanzaRealizada;
       
  public:
  /**
  Constructor. Da valor inicial a los atributos internos 
  */
  Camion(string laPlaca, int laCapacidadMaxima);
  /**
  Destructor. no hace nada 
  */
  virtual ~Camion();
  /**
  Pregunta y retorna la placa del camión.
  */
  virtual string cualEsLaPlaca(); 
  /** 
  valor de verdad true = se pudo hacer; false = no se pudo
  */           
  virtual bool cargarUnObjeto(int pesoDelObjeto);
  /**
  Verifica que se puede hacer la mudanza
  */
  virtual void hacerMudanza(); 
  /**
  Retorna la carga que transportó
  */
  virtual int pesoTransportado();
  /**
  Realiza la mudanza
  */
  virtual void descargar();
};

#else
class Camion; // Declaración adelantada 
#endif
