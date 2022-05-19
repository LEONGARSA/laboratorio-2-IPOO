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
#include"Camion.h"



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



int EmpresaDeMudanza :: cuantosCamionesHayEnLaEmpresa()
{ 
  for (int i = 0; i < objetosM.size(); i++)
   {
     int objetoATransportar = objetosM[i];
      
        for (int camionUsado = 0; camionUsado < flotaDeCamiones.size(); camionUsado++)
          {
                //Camion camionAcargar= flotaDeCamiones[camionUsado];
                  
                       if (flotaDeCamiones[camionUsado].cargarUnObjeto(objetoATransportar)==true)
                          {
                              break;
                          }
          
          } 
                
  }
}   