#pragma once
#include <vector>
#include <string>
#include <iostream>

using namespace System;
using namespace System::Collections::Generic;
using namespace std;


namespace TransporteClass {
	public ref class Estacion
	{
    public:
		String^ nombre;
         Tuple<int, int>^ coordenadas;
        String^ Ubicacion;

         Estacion(String^ nombre, Tuple<int, int>^ coordenadas,String^Ubicacion) {
			 this->nombre = nombre;
			 this->coordenadas = coordenadas;
             this->Ubicacion = Ubicacion;
		 }

        virtual String^ ToString() override{
            return "Estacion: " + nombre + 
                " - Coordenadas: " + coordenadas->Item1.ToString()+ " , " + coordenadas->Item2.ToString() +
                " - Ubicacion: " + Ubicacion;
         }

		// TODO: Agregue aquí los métodos de esta clase.
	};
	public ref class Ruta
	{
       public:
		String^ origen;
		String^ destino;
		double distancia;

        Ruta(String^ origen, String^ destino, double distancia) {
			this->origen = origen;
			this->destino = destino;
			this->distancia = distancia;
		}
        virtual String^ ToString() override{
            return "Ruta de " + origen + " a " + destino + " - Distancia: " + distancia.ToString();
		}

	};
	public ref class GrafoTransporte
	{
    public:
     property  List<Estacion^>^ estaciones;
     Dictionary<String^, List<Ruta^>^>^ rutas;

     List<Estacion^>^ GetEstaciones() {
         return estaciones;
     }

     List<Ruta^>^ GetRutas() {
         List<Ruta^>^ allRutas = gcnew List<Ruta^>();
         for each (auto kvp in rutas) {
             for each (auto ruta in kvp.Value) {
                 allRutas->Add(ruta);
             }
         }
         return allRutas;
     }

    public:
        GrafoTransporte() {
		 estaciones = gcnew List<Estacion^>();
         rutas = gcnew Dictionary<String^, List<Ruta^>^>();
	 }

     // Método para agregar estaciones
     void AgregarEstacion(Estacion^ estacion) {
         estaciones->Add(estacion);
         rutas[estacion->nombre] = gcnew List<Ruta^>();
     }

     // Método para agregar rutas
     void AgregarRuta(Ruta^ ruta) {
         // Verificar si las estaciones de origen y destino ya existen
         if (ExisteEstacion(ruta->origen) && ExisteEstacion(ruta->destino)) {
             // Verificar si la estación de origen ya tiene rutas asociadas
             if (!rutas->ContainsKey(ruta->origen)) {
                 // Si no, crear una nueva lista de rutas para esa estación
                 rutas[ruta->origen] = gcnew List<Ruta^>();
             }
             // Agregar la nueva ruta a la lista de rutas de la estación de origen
             rutas[ruta->origen]->Add(ruta);
             Console::WriteLine("Ruta agregada exitosamente.");
         }
         else {
             Console::WriteLine("Una o ambas estaciones no existen en el sistema.");
         }
        
     }

     bool BuscarEstacion(String^ nombreEstacion) {
		 for each (Estacion ^ estacion in estaciones) {
			 if (estacion->nombre == nombreEstacion) {
				 return true;
			 }
		 }
		 return false;
	 }

     bool BuscarRuta(String^ nombreRuta) {
         for each (auto kvp in rutas) {
             for each (Ruta ^ ruta in kvp.Value) {
                 if (ruta->origen == nombreRuta) {
                     return true;
                 }
             }
         }
         return false;
     }

     bool ExisteEstacion(String^ nombreEstacion) {
         for each (Estacion ^ estacion in estaciones) {
             if (estacion->nombre == nombreEstacion) {
                 return true;
             }
         }
         return false;
     }

     // Método para eliminar estaciones
     void EliminarEstacion(String^ nombreEstacion) {
         // Primero, eliminar la estación de la lista de estaciones
         for (int i = estaciones->Count - 1; i >= 0; i--) {
             if (estaciones[i]->nombre == nombreEstacion) {
                 estaciones->RemoveAt(i);
                 break; // Suponiendo que no hay estaciones duplicadas
             }
         }

         // Luego, eliminar todas las rutas que salen de la estación
         if (rutas->ContainsKey(nombreEstacion)) {
             rutas->Remove(nombreEstacion);
         }

         // Finalmente, eliminar todas las rutas que llegan a la estación
         for each (auto kvp in rutas) {
             List<Ruta^>^ rutasDesdeOrigen = kvp.Value;
             for (int i = rutasDesdeOrigen->Count - 1; i >= 0; i--) {
                 if (rutasDesdeOrigen[i]->destino == nombreEstacion) {
                     rutasDesdeOrigen->RemoveAt(i);
                 }
             }
         }
     }

     // Método para eliminar rutas
     void EliminarRuta(String^ nombreorigen) {

         if (rutas->ContainsKey(nombreorigen)) {
             rutas->Remove(nombreorigen);
         }
     }

     Estacion^ GetEstacionPorNombre(String^ nombreEstacion) {
         for each (Estacion ^ estacion in estaciones) {
             if (estacion->nombre == nombreEstacion) return estacion;
         }
         return nullptr; // Si no se encuentra la estación
     }

     Ruta^GetRutaPorNombre(String^ nombreRuta) {
		 for each (auto kvp in rutas) {
			 for each (Ruta ^ ruta in kvp.Value) {
				 if (ruta->origen == nombreRuta) return ruta;
			 }
		 }
		 return nullptr; // Si no se encuentra la ruta
	 }

     List<Ruta^>^ GetRutasPorOrigen(String^origen)
     {
         List<Ruta^>^ rutasEncontradas = gcnew List<Ruta^>();
         for each (auto kvp in rutas) {
             for each (Ruta ^ ruta in kvp.Value) {
                 if (ruta->origen == origen) {
                     rutasEncontradas->Add(ruta);
                 }
             }
         }
         return rutasEncontradas; // Devuelve la lista de rutas encontradas
     }
    };
}
