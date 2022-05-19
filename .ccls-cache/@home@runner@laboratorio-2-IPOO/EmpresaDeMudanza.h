
/*
  Archivo: EmpresaMudanza.h

  Autores:
  Leonardo Andres Garcia Salas
  <garcia.leonardo@correounivalle.edu.co>

  Fecha creación: 08-05-2022
  Fecha última modificación:08-05-2022
  Licencia: GNU- GPL
*/


/**
  CLASE: EmpresaDeMudanza.h
  INTENCIÓN:Validar en un vector que contiene 3 camiones
            si se puede transportar un peso total de 13330 kg,
            dicho peso repartido enre ellos.
  RELACIONES: ninguna
*/

#ifndef EMPRESADEMUDANZA_H
#define EMPRESADEMUDANZA_H

#include"Camion.h"
#include <string>
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
  virtual int cuantosCamionesHayEnLaEmpresa();
  /** carga camiones obejeto por objeto teniedo en cuenta su peso */
  /** retorna los pesos transportados de los camiones */

};


#else
class EmpresaDeMudanza; // Declaración adelantada 
#endif