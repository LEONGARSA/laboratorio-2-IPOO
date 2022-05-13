/*
  Archivo: camion.cpp

  Autores: 
  Neil Jeison Balcero <neil.balcero@correounivalle.edu.co>
  Leonardo Andres Garcia Salas <garcia.leonardo@correounivalle.edu.co>
  Jhonier alberto ipia noscue <jhonier.ipia@correounivalle.edu.co>
  Fecha creación:2022-04-29
  Fecha última modificación:2022-05-05
  Licencia: GNU- GPL
*/

#include"Camion.h"

Camion::Camion(string laPlaca, int laCapacidadMaxima)
{
  placa = laPlaca;
  capacidadMaximaCamion = laCapacidadMaxima;
  pesoTotalCamion = 0; 
  mudanzaRealizada = false; 
}

string Camion::cualEsLaPlaca() 
{  
  return placa; 
}

bool Camion::cargarUnObjeto(int pesoDelObjeto) 
{
  if(pesoTotalCamion + pesoDelObjeto <= capacidadMaximaCamion) 
  {
    pesoTotalCamion = pesoTotalCamion + pesoDelObjeto;
    return true;
  }
  else
  {  
    return false;
  }  
}   

Camion::~Camion()
{
}

void Camion::hacerMudanza() 
{
  mudanzaRealizada = true; 
}

int Camion::pesoTransportado() 
{   
  if(mudanzaRealizada)
  {  
    return pesoTotalCamion;
  }  
  else
  {  
    return 0;
  }  
} 


void Camion::descargar() 
{
  mudanzaRealizada = false;
  pesoTotalCamion = 0;
}