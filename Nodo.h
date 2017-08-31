#ifndef NODO_H_INCLUDED
#define NODO_H_INCLUDED

class Nodo{
    private:
    int Valor;
    Nodo *Siguiente;
    public:
        Nodo(int v, Nodo *sig=NULL){
            this->Valor = v;
            this->Siguiente = sig;
        }
        friend class Lista; ///Utilizamos el friend class para permitirle a la clase nodo poder acceder a los atributos privados de la clase lista. Establecimos una amistad.
};


#endif // NODO_H_INCLUDED
