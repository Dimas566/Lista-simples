#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED
#include "Nodo.h"

class Lista{
private:
    Nodo *Anterior;
    Nodo *Primero;
    Nodo *Ultimo;
    bool ListaVacia(){
        return (this->Primero==NULL);
    }

public:
    Lista(){ ///Declaracion del constructor de la clase.
        this->Primero = NULL;
        this->Ultimo = NULL;
        this->Anterior = NULL;
    }
    ~Lista(){ ///Declaramos un destructor para eliminar el espacio que, queda reservado en memoria mientras el programa no se este ejecutando.
        while(this->Primero){
            this->Ultimo = NULL;
            Nodo *tmp = this->Primero;
            this->Primero = this->Primero->Siguiente;
            delete tmp;
        }
    }

    void Insertar(int v){ ///Metodo para insertar un elemento en una lista.
        Nodo *nuevo = new Nodo(v);
        if(this->ListaVacia()){
            this->Primero = nuevo;
        }else{
            this->Ultimo->Siguiente = nuevo;
        }
        this->Ultimo = nuevo;
    }

    void Mostrar(){ ///Metodo para mostrar los elementos de una lista.
        Nodo *tmp = this->Primero;
        while(tmp){
            cout << tmp->Valor << "-->";
            tmp = tmp -> Siguiente;
        }
        cout << "NULL" << endl;
    }
    Nodo *Buscar(int v){
        Nodo *tmp=this->Primero;
        while(tmp){
        if(tmp->Valor==v){
        return  tmp;
        }
    tmp=tmp->Siguiente;
            }
        return NULL;
        }
    void Modificar (int v, int n){  ///Metodo para modificar un elemento en una lista.

        Nodo * tmp = this ->Buscar(v);
        if(tmp){
            tmp->Valor=n;
            cout << "El elemento fue modificado correctamente" << endl;
        }else{
            cout<<"Dato no encontrado en la lista";
            cout << endl;
        }
    }
   void Eliminar(int v){ ///Metodo para realizar la eliminacion de un elemento en la lista.
       Nodo *tmp=this->Primero;
            Nodo *Anterior=NULL;
            if(Buscar(v)==NULL){
                cout<<"El elemento no existe"<<endl;
            }
            else{
                while(tmp->Valor!=v){
                    Anterior = tmp;
                    tmp = tmp->Siguiente;
                }
                if(!Anterior){
                    this->Primero=this->Primero->Siguiente;
                }
                else{
                        Anterior->Siguiente=tmp->Siguiente;
                }
                 cout << "El elemento fue eliminado correctamente " << endl;
                 cout<<endl;
            }delete tmp;
        }




       /*
       bool encontrado= false;
        Nodo *temp= this ->Primero;
        Nodo * anterior = NULL;
        while (temp && !encontrado){
          if(temp->Valor=v){
                encontrado=true;
                ///Principio
                if(temp == this->Primero){
                        this->Primero = this->Primero->Siguiente;

                }
                else
                    ///Al final
                    if(temp == this->Ultimo){
                        anterior->Siguiente=NULL;
                        this->Ultimo = anterior;
                    }
                else{
                    ///en medio
                    anterior->Siguiente = temp->Siguiente;
                }
          }else{
            anterior = temp;
            temp = temp->Siguiente;
          }

        }
   }*/

       /* Nodo *temp=NULL;
        Nodo *anterior;

        if( Primero->Valor==v && Primero->Siguiente == NULL){


        }
    }

    int Ubicate(){

    int ubicacion = 0;

        if( Primero && Primero->Siguiente == NULL){

            return 0;
        }else  if(Primero && Ultimo) {



        }

    }*/



};

#endif // LISTA_H_INCLUDED
