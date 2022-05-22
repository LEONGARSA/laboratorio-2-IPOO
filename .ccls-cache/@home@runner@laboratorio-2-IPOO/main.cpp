/*
  Archivo: main.cpp

  Autores:
  Leonardo Andres Garcia Salas
  <garcia.leonardo@correounivalle.edu.co>

  Fecha creación: 08-05-2022
  Fecha última modificación:08-05-2022
  Licencia: GNU- GPL
*/

/** HISTORIA:Se quiere hacer una mudanza. Se tienen dos camiones y un conjunto
 * de objetos a transportar, para hacer una mudanza. Cada objeto se intentará
 * subir al primer camión, pero si no se puede se llevará al segundo camión; y
 * si tampoco se puede, se dejará en tierra (no se puede transportar). Luego a
 * cada camión se le pedirá que haga la mudanza, que diga cuanto peso transportó
 * y que descargue los objetos. Se está modelando un camión con una placa, que
 * puede transportar una cierta carga en kilos, y que tiene una capacidad máxima
 * en kilos. Se le puede pedir que diga su placa, que cargue un objeto, que
 * transporte toda la carga, que diga cuanto transportó y que descargue todo.
 */

#include "Camion.h"
#include "EmpresaDeMudanza.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  Camion unCamion("ABC-001", 10000);
  Camion otroCamion("DEF-002", 5000);

  vector<int> objetos = {1000, 3000, 5000, 2000, 500, 1800, 4000, 30};

  EmpresaDeMudanza MudanzaLeoyGeo("MudanzaLeoyGeo","5465465436");

  MudanzaLeoyGeo.comprarCamiones(unCamion);
  MudanzaLeoyGeo.comprarCamiones(otroCamion);

  for (int cualObjeto = 0; cualObjeto < objetos.size(); cualObjeto++) 
  {
  MudanzaLeoyGeo.objetosDeMudanza(objetos.at(cualObjeto));
  }

  cout << "El objeto número " << MudanzaLeoyGeo.pesoDeFlota()<< " que pesa:"<< endl;
  
  cout  << " no se puede cargar en ningún camión." << endl;

  
  
/*
  for (int cualObjeto = 0; cualObjeto < objetos.size(); cualObjeto++) 
  {
    int objetoATransportar = objetos[cualObjeto];
    if (not unCamion.cargarUnObjeto(objetoATransportar))
    {
      if (not otroCamion.cargarUnObjeto(objetoATransportar))
      {
        cout << "El objeto número " << cualObjeto << " que pesa "
             << objetos[cualObjeto] << " no se puede cargar en ningún camión."
             << endl;
      }
    }
  }
*/
 unCamion.hacerMudanza();
 otroCamion.hacerMudanza();


otroCamion.descargar();

  return 0;
}