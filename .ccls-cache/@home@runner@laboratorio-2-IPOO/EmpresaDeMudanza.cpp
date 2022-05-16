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
  objetosM.push_back(carga);
  
}



int EmpresaDeMudanza :: pesoDelObjeto()
{
  for (int cualObjeto = 0; cualObjeto < objetosM.size(); cualObjeto++) 
  {
    int objetoATransportar = objetosM[cualObjeto];
    if (not flotaDeCamiones[0].cargarUnObjeto(objetoATransportar))
    {
      if (not flotaDeCamiones[1].cargarUnObjeto(objetoATransportar))
      {
       return objetoATransportar;
      }
    }
  }
}

int EmpresaDeMudanza :: numeroDeObjeto()
{
  for (int cualObjeto = 0; cualObjeto < objetosM.size(); cualObjeto++) 
  {
    int objetoATransportar = objetosM[cualObjeto];
    if (not flotaDeCamiones[0].cargarUnObjeto(objetoATransportar))
    {
      if (not flotaDeCamiones[1].cargarUnObjeto(objetoATransportar))
      {
      
      return cualObjeto;
      }
    }
  }
}

   