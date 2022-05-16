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

#include<string>
#include"Camion.h" 
#include<vector> 
using namespace std;

class EmpresaDeMudanza
{
  private:
  string nombreEmpresa;
  int nit;
  vector <Camion> flotaDeCamiones;
  vector <int> objetosM;

  public:
  /**constructor da valor incial */
  EmpresaDeMudanza();
  /**destructor*/
  virtual ~EmpresaDeMudanza ();
  /**compra los camiones para la empresa*/
  virtual void comprarCamiones (Camion camiones);
  /** objetos de mudanza */
  virtual void objetosDeMudanza(int carga);
  /** carga camiones obejeto por objeto teniedo en cuenta su peso */
  virtual int pesoDelObjeto();
  virtual int numeroDeObjeto();
  /** retorna los pesos transportados de los camiones */
};


#else
class EmpresaDeMudanza; // Declaración adelantada 
#endif