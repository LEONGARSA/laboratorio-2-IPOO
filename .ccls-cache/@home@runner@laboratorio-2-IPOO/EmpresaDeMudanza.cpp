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



EmpresaDeMudanza :: EmpresaDeMudanza()
{
//no hace nada 
} 

EmpresaDeMudanza :: ~EmpresaDeMudanza ()
{
  //no hace nada 
}

void EmpresaDeMudanza :: comprarCamiones (Camion camiones)
{
  flotaDeCamiones.push_back(camiones);
}

void EmpresaDeMudanza :: objetosDeMudanza(int carga)
{
  objetos.push_back(carga);
}



int EmpresaDeMudanza :: cargarCamiones()
{
    
  for (int cualObjeto = 0; cualObjeto < objetos.size(); cualObjeto++) 
  {
    int objetoATransportar = objetos[cualObjeto];
    for (int cualCamion = 0; cualCamion < flotaDeCamiones.size(); cualCamion++)
    {
      Camion camionACargar=flotaDeCamiones[cualCamion];
        if (not camionACargar.cargarUnObjeto(objetoATransportar))
      { 
      }
    }
    return cualObjeto;
    return objetoATransportar; 
  }
}

   