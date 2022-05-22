/*
  Archivo: EmpresaMudanza.h

  Autores:
  Leonardo Andres Garcia Salas
  <garcia.leonardo@correounivalle.edu.co>

  Fecha creación: 08-05-2022
  Fecha última modificación:08-05-2022
  Licencia: GNU- GPL
*/

#include"EmpresaDeMudanza.h"




EmpresaDeMudanza::EmpresaDeMudanza(string nombrelaEmpresa, string nitDelaEmpresa)
{
  nombreEmpresa = nombrelaEmpresa;
  nitDeEmpresa = nitDelaEmpresa;
  flotaDeCamiones = {};
  objetosM = {}; 
} 

void EmpresaDeMudanza :: comprarCamiones (Camion camiones)
{
  flotaDeCamiones.push_back(camiones);
  
}

void EmpresaDeMudanza :: objetosDeMudanza(int carga)
{
  objetosM.push_back(carga);  
}






int EmpresaDeMudanza :: pesoDeFlota()
{ 
  double pesoCargado = 0;
  double peso = 0 ;
  for (int unObjeto = 0; unObjeto < objetosM.size(); unObjeto++)
  {
    int objetoATransportar = objetosM.at(unObjeto);
    
    for (int camionUsado = 0; camionUsado < flotaDeCamiones.size(); camionUsado++)
    {
      
      if (flotaDeCamiones[camionUsado].cargarUnObjeto(objetoATransportar)==true)
      {
       break; 
      }  
    }
    int peso1=0;
    for (int camionUsado = 0; camionUsado < flotaDeCamiones.size(); camionUsado++)
    {
      flotaDeCamiones[camionUsado].hacerMudanza(); 
      peso1 =  flotaDeCamiones[camionUsado].pesoTransportado();
      break;
    }
    int peso2=0;
    for (int camionUsado = 0; camionUsado < flotaDeCamiones.size(); camionUsado++)
    {
      flotaDeCamiones[camionUsado].hacerMudanza(); 
      peso2 = flotaDeCamiones[camionUsado].pesoTransportado();
    }
    
    pesoCargado = peso1 + peso2 ;
  }  
  return pesoCargado ;
}   


int EmpresaDeMudanza :: pesoDeCamionesCargados()
{
  double p = 0 ;
 for (int camionUsado = 0; camionUsado < flotaDeCamiones.size(); camionUsado++)
 {
   flotaDeCamiones[camionUsado].hacerMudanza();
   p = flotaDeCamiones[camionUsado].pesoTransportado();
 }  
  return p;
}
