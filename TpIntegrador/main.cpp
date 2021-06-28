//Ejercicio: TP Integrador Dados 20
//Autor: Carrozzi Santiago
//Fecha:26/6/2021
//Comentario:

#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<ctime>

using namespace std;

#include "funciones.h"
#include "rlutil.h"


int main (){
    int i,opc,posMax,ron,u,y,f,ronPerd=0,ronEmp=0;
    srand(time(NULL));
    int v[5];
    string nombreJ1;

    while(true){
            int puntosT=20,puntosApos;
        system("cls");
        cout<<"1. UN JUGADOR"<<endl;
        cout<<"2. DOS JUGADORES"<<endl;
        cout<<"3. PUNTUACION MAXIMA"<<endl;
        cout<<"4. MODO SIMULADO"<<endl;
        cout<<"0. SALIR"<<endl;
        cout<<"Ingrese una opcion \t";
        cin>>opc;

        switch (opc)
        {
            rlutil::cls();
        case 1:{
            cout<<"Ingrese nombre de jugador: \t";
            cin>>nombreJ1;
            cout<<"Rondas a jugar: \t";
            cin>>ron;
            cout<<"Tiene "<<puntosT<<" puntos"<<endl;
            cout<<"Ingrese los puntos a apostar: \t";
            cin>>puntosApos;
            for (y=1;y<=ron;y++){
                cout<<"Ronda: "<<y<<endl;
                int sumaDados=0;
                int contt=1;
                int down=5;
                for (u=1;u<6;u++){
                cargarAleatorio(v,5,6);


                mostrarVector(v,down);
                sumaDados+=v[maximoVector(v,down)];
                cout<<"Tirada N: "<<contt++<<endl;
                down--;
                system("pause");
                };

                if(sumaDados<20){
                    ronPerd++;
                    puntosT=puntosT-puntosApos;
                    cout<<"Solo juntaste: "<<sumaDados<<" de puntaje :c Suerte la proxima!"<<endl;
                }else{
                    cout<<"Puntaje acumulado en las 5 tiradas: "<<sumaDados<<endl;
                    cout<<">>>Tiro de puntaje<<<"<<endl;
                    cargarAleatorio(v,5,6);
                    down=5;
                    mostrarVector(v,down);
                    int cantMul,puntosR=0;
                    switch (sumaDados)
                    {
                    case 20:cantMul=contarNumerosRepetidos(v,1,5);
                            cout<<"Se repite el numero >1< "<<cantMul<<" veces."<<endl;
                            puntosR=puntosApos*cantMul;
                            if (puntosR>=puntosApos){
                                cout<<"Ganaste "<<puntosR<<" puntos!!";
                                puntosT=puntosT+puntosR;
                                cout<<"Total acumulado: "<<puntosT<<" puntos"<<endl;
                            };if (cantMul==0){
                                cout<<"No salio tu numero multiplicador :c"<<endl;
                                ronEmp++;
                            };/*if (cantMul==1){
                                cout<<"Tu numero multiplicador salio 1 sola vez, no ganaste ni perdiste puntos!"<<endl;
                                ronEmp++;};*/
                        break;
                    case 21:cantMul=contarNumerosRepetidos(v,2,5);
                            cout<<"Se repite el numero >2< "<<cantMul<<" veces."<<endl;
                            puntosR=puntosApos*cantMul;
                            if (puntosR>=puntosApos){
                                cout<<"Ganaste "<<puntosR<<" puntos!!";
                                puntosT=puntosT+puntosR;
                                cout<<"Total acumulado: "<<puntosT<<" puntos"<<endl;
                            };if (cantMul==0){ronEmp++;cout<<"No salio tu numero multiplicador :c"<<endl;
                            };/*if (cantMul==1){ronEmp++;cout<<"Tu numero multiplicador salio 1 sola vez, no ganaste ni perdiste puntos!"<<endl;}*/;
                        break;
                    case 22:cantMul=contarNumerosRepetidos(v,3,5);
                            cout<<"Se repite el numero >3< "<<cantMul<<" veces."<<endl;
                            puntosR=puntosApos*cantMul;
                            if (puntosR>=puntosApos){
                                cout<<"Ganaste "<<puntosR<<" puntos!!";
                                puntosT=puntosT+puntosR;
                                cout<<"Total acumulado: "<<puntosT<<" puntos"<<endl;
                            };if (cantMul==0){ronEmp++;cout<<"No salio tu numero multiplicador :c"<<endl;
                            };/*if (cantMul==1){ronEmp++;cout<<"Tu numero multiplicador salio 1 sola vez, no ganaste ni perdiste puntos!"<<endl;}*/;
                        break;
                    case 23:cantMul=contarNumerosRepetidos(v,4,5);
                            cout<<"Se repite el numero >4< "<<cantMul<<" veces."<<endl;
                            puntosR=puntosApos*cantMul;
                            if (puntosR>=puntosApos){
                                cout<<"Ganaste "<<puntosR<<" puntos!!";
                                puntosT=puntosT+puntosR;
                                cout<<"Total acumulado: "<<puntosT<<" puntos"<<endl;
                            };if (cantMul==0){ronEmp++;cout<<"No salio tu numero multiplicador :c"<<endl;
                            };/*if (cantMul==1){ronEmp++;cout<<"Tu numero multiplicador salio 1 sola vez, no ganaste ni perdiste puntos!"<<endl;}*/;
                        break;
                    case 24:cantMul=contarNumerosRepetidos(v,5,5);
                            cout<<"Se repite el numero >5< "<<cantMul<<" veces."<<endl;
                            puntosR=puntosApos*cantMul;
                            if (puntosR>=puntosApos){
                                cout<<"Ganaste "<<puntosR<<" puntos!!";
                                puntosT=puntosT+puntosR;
                                cout<<"Total acumulado: "<<puntosT<<" puntos"<<endl;
                            };if (cantMul==0){ronEmp++;cout<<"No salio tu numero multiplicador :c"<<endl;
                            };/*if (cantMul==1){ronEmp++;cout<<"Tu numero multiplicador salio 1 sola vez, no ganaste ni perdiste puntos!"<<endl;}*/;
                        break;
                    default:cantMul=contarNumerosRepetidos(v,6,5);
                            cout<<"Se repite el numero >6< "<<cantMul<<" veces."<<endl;
                            puntosR=puntosApos*cantMul;
                            if (puntosR>=puntosApos){
                                cout<<"Ganaste "<<puntosR<<" puntos!!";
                                puntosT=puntosT+puntosR;
                                cout<<"Total acumulado: "<<puntosT<<" puntos"<<endl;
                            };if (cantMul==0){ronEmp++;cout<<"No salio tu numero multiplicador :c"<<endl;
                            };/*if (cantMul==1){ronEmp++;cout<<"Tu numero multiplicador salio 1 sola vez, no ganaste ni perdiste puntos!"<<endl;}*/;
                        break;
                    }


                    }
                    system("pause");
            };
        };
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 0: return 0;
            break;

        default:
            break;
        }
        cout<<"Jugador: "<<nombreJ1<<endl;
        cout<<"Puntos al final: "<<puntosT<<endl;
        cout<<"Rondas perdidas: "<<ronPerd<<endl;
        cout<<"Rondas empatadas: "<<ronEmp<<endl;
        system("pause");

    }


system("pause");
return 0;
}
