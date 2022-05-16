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
  INTENCIÓN:
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
  vector <int> objetos;

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
  virtual int cargarCamiones();
};


#else
class EmpresaDeMudanza; // Declaración adelantada 
#endif