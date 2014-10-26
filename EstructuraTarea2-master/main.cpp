// queue::push/pop
#include "Evaluador.h"
#include <iostream>       // std::cin, std::cout
#include <queue>          // std::queue
#include <list>          // std::list
using namespace std;


//devuelve true si todos los elementos de la cola son pares, de lo contrario devuelve false
bool sonPares(queue<int> mi_cola)
{
    while(!mi_cola.empty()) // recorremos la cola para saber si esta vacia
    {
        if(mi_cola.front()%2==0) // miramos el primer elemento de la cola  y hacemos la respectiva division para saber si el residuo da cero
        {
            mi_cola.pop();  // vamos elimando los elementos de la cola
        }else
        {
            return false;
        }
    }


    return true;
}

//devuelve true si todos los elementos de la lista son pares, de lo contrario devuelve false
bool sonPares(list<int> mi_lista)
{
    while(!mi_lista.empty()) // recorremos la lista para saber si esta vacia
    {
        if(mi_lista.front()%2 ==0) // dividimos el elment entre  dos para saber si es par o impar
        {
            mi_lista.pop_front();  // vamos  elimanando el primer elemento de la lista
        }else
       {
           return false;
       }
    }

    return true;
}

//devuelve true si str es un elemento de mi_cola, de lo contrario devuelve false
bool existe(queue<string> mi_cola, string str)
{
    while(!mi_cola.empty()) //  veorificamos que la lista este vacia
    {
        if(mi_cola.front()==str) // evaluamos en el primer elemento de la cola y  vamos  viendo cual es igual a str
        {
            return true;
        }
        mi_cola.pop(); // vamos elimanando cada elemento de  la cola
    }
    return false;
}

//devuelve true si str es un elemento de mi_cola, de lo contrario devuelve false
bool existe(list<string> mi_lista, string str)
{
    while(!mi_lista.empty())  //  miramos si la lista esta vacia
    {
        if(mi_lista.front() == str) // vamos viendo los elemento de la lista para ver si son iguales a str
        {
            return true;  //  si  se econtro en la retorna verdadero
        }
        mi_lista.pop_front();  // y elimanos cada el primer elemento de la lista
    }
    return false;
}

//devuelve la suma de los elementos de la cola
int getSuma(queue<int> mi_cola)
{
    int suma=0; //creamos  la variable donde vamos a gaurdar las sumas

    while(!mi_cola.empty()) //vemos si la cola esta vacia
    {
        suma+=mi_cola.front(); // sumamos el primer elmento de mi cola
        mi_cola.pop(); // elimanos  elemento  de la cola
    }
    return suma;  //  retornamos a la variable suma
}

//devuelve la suma de los elementos de la lista
int getSuma(list<int> mi_lista)
{
    int suma=0;   // creamos la  variable donde guardamos las sumas
      while(!mi_lista.empty()) //  vemos si la lista esta vacia
    {
        suma+=mi_lista.front(); // sumamos el primer elemento de lista
        mi_lista.pop_front(); //  eliminamos el elemento qe vamos sumando
    }
   return suma;  //  retornamos a la variable suma
}

//Devuelve true si los elementos de la lista son estan ordenados alfabeticamente, de lo contrario devuelve false
bool estaOrdenada(list<char>mi_lista)
{
   list<char>ayuda=mi_lista;  // creamos una nueva lista
    ayuda.sort();//  usamos el sort para que nos ordene alfabaticamente

    while(!mi_lista.empty()) //  verificamos si la lista esta vacia
    {
        if(mi_lista.front()== ayuda.front())// comparamos si las dos listas son iguales
        {
            mi_lista.pop_front();   //  borramos los elemetos que comapamos en cada lista
            ayuda.pop_front();   // borramos  el elemento comaparado en la  nueva lista ayuda
        }else
        {
            return false;
        }
    }
    return true;
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
