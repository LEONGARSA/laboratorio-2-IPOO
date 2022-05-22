
/*
  Archivo: EmpresaMudanza.h

  Autores:
  Leonardo Andres Garcia Salas
  <garcia.leonardo@correounivalle.edu.co>

  Fecha creación: 08-05-2022
  Fecha última modificación:21-05-2022
  Licencia: GNU- GPL
*/


/**
  CLASE: EmpresaDeMudanza.h
  INTENCIÓN: 
  RELACIONES: Camiones 
*/

#ifndef EMPRESADEMUDANZA_H
#define EMPRESADEMUDANZA_H

#include"Camion.h"
#include<iostream>
#include<vector> 
using namespace std;

class EmpresaDeMudanza
{
  private:
  string nombreEmpresa;
  string nitDeEmpresa;
  vector <Camion> flotaDeCamiones;
  vector <int> objetosM ;
  public:

  /**constructor da valor incial */
  EmpresaDeMudanza(string nombrelaEmpresa, string nitDelaEmpresa);

  /**destructor*/

  /**retorna norble de la empresa*/
  string nombreDeLaEmpresa();

  /**retorna nt de la empresa*/
  int nitEmpresa();

  /**compra los camiones para la empresa*/
  virtual void comprarCamiones (Camion camiones);

  /** objetos de mudanza */
  virtual void objetosDeMudanza(int carga);

  /** retorna la cantidad de camiones de la empresa */
  virtual int pesoDeFlota();

  /** retorna la cantidad de camiones de la empresa */
  virtual int pesoDeCamionesCargados();
  

};

#else
class EmpresaDeMudanza; // Declaración adelantada 
#endif