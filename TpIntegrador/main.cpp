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

    string nombreJ1,nombreJ2,nombreJ3,JugadorG;

    while(true){
            int puntosT=20,puntosApos,puntosAposJ1,puntosAposJ2,puntajeG;
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
            int perdiste=0;
            cout<<"Ingrese nombre de jugador: \t";
            cin>>nombreJ1;
            cout<<"Rondas a jugar: \t";
            cin>>ron;
            cout<<"Tiene "<<puntosT<<" puntos"<<endl;
            cout<<"Ingrese los puntos a apostar: \t";
            cin>>puntosApos;
            if(puntosApos<=puntosT){
            for (y=1;y<=ron;y++){
                if(puntosT>0){
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

                if(sumaDados<2000){
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
                            };
                        break;
                    case 21:cantMul=contarNumerosRepetidos(v,2,5);
                            cout<<"Se repite el numero >2< "<<cantMul<<" veces."<<endl;
                            puntosR=puntosApos*cantMul;
                            if (puntosR>=puntosApos){
                                cout<<"Ganaste "<<puntosR<<" puntos!!";
                                puntosT=puntosT+puntosR;
                                cout<<"Total acumulado: "<<puntosT<<" puntos"<<endl;
                            };if (cantMul==0){ronEmp++;cout<<"No salio tu numero multiplicador :c"<<endl;
                            };
                        break;
                    case 22:cantMul=contarNumerosRepetidos(v,3,5);
                            cout<<"Se repite el numero >3< "<<cantMul<<" veces."<<endl;
                            puntosR=puntosApos*cantMul;
                            if (puntosR>=puntosApos){
                                cout<<"Ganaste "<<puntosR<<" puntos!!";
                                puntosT=puntosT+puntosR;
                                cout<<"Total acumulado: "<<puntosT<<" puntos"<<endl;
                            };if (cantMul==0){ronEmp++;cout<<"No salio tu numero multiplicador :c"<<endl;
                            };
                        break;
                    case 23:cantMul=contarNumerosRepetidos(v,4,5);
                            cout<<"Se repite el numero >4< "<<cantMul<<" veces."<<endl;
                            puntosR=puntosApos*cantMul;
                            if (puntosR>=puntosApos){
                                cout<<"Ganaste "<<puntosR<<" puntos!!";
                                puntosT=puntosT+puntosR;
                                cout<<"Total acumulado: "<<puntosT<<" puntos"<<endl;
                            };if (cantMul==0){ronEmp++;cout<<"No salio tu numero multiplicador :c"<<endl;
                            };
                        break;
                    case 24:cantMul=contarNumerosRepetidos(v,5,5);
                            cout<<"Se repite el numero >5< "<<cantMul<<" veces."<<endl;
                            puntosR=puntosApos*cantMul;
                            if (puntosR>=puntosApos){
                                cout<<"Ganaste "<<puntosR<<" puntos!!";
                                puntosT=puntosT+puntosR;
                                cout<<"Total acumulado: "<<puntosT<<" puntos"<<endl;
                            };if (cantMul==0){ronEmp++;cout<<"No salio tu numero multiplicador :c"<<endl;
                            };
                        break;
                    default:cantMul=contarNumerosRepetidos(v,6,5);
                            cout<<"Se repite el numero >6< "<<cantMul<<" veces."<<endl;
                            puntosR=puntosApos*cantMul;
                            if (puntosR>=puntosApos){
                                cout<<"Ganaste "<<puntosR<<" puntos!!";
                                puntosT=puntosT+puntosR;
                                cout<<"Total acumulado: "<<puntosT<<" puntos"<<endl;
                            };if (cantMul==0){ronEmp++;cout<<"No salio tu numero multiplicador :c"<<endl;
                            };
                        break;
                    }


                    }
                    system("pause");
            }else{
                perdiste=1;
                }
            };
            if(perdiste=1){cout<<"PERDISTE SUERTE EN LA PROX PA"<<endl;}
            }else{
                cout<<"No tenes esa cantidad!"<<endl;
            };
        cout<<"Jugador: "<<nombreJ1<<endl;
        cout<<"Puntos al final: "<<puntosT<<endl;
        cout<<"Rondas perdidas: "<<ronPerd<<endl;
        cout<<"Rondas empatadas: "<<ronEmp<<endl;
        system("pause");
        }
            break;
        case 2:{
            int puntosTJ1=20,puntosTJ2=20;
            cout<<"Ingrese nombre de jugador 1: \t";
            cin>>nombreJ1;
            cout<<"Ingrese nombre de jugador 2: \t";
            cin>>nombreJ2;
            cout<<"Rondas a jugar: \t";
            cin>>ron;
            cout<<"Jugador 1 tiene "<<puntosTJ1<<" puntos para apostar"<<endl;
            cout<<"Ingrese los puntos a apostar: \t";
            cin>>puntosAposJ1;
            if(puntosAposJ1<=puntosTJ1){
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
                    puntosTJ1=puntosTJ1-puntosAposJ1;
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
                            puntosR=puntosAposJ1*cantMul;
                            if (puntosR>=puntosAposJ1){
                                cout<<"Ganaste "<<puntosR<<" puntos!!";
                                puntosTJ1=puntosTJ1+puntosR;
                                cout<<"Total acumulado: "<<puntosTJ1<<" puntos"<<endl;
                            };if (cantMul==0){
                                cout<<"No salio tu numero multiplicador :c"<<endl;
                                ronEmp++;
                            };
                        break;
                    case 21:cantMul=contarNumerosRepetidos(v,2,5);
                            cout<<"Se repite el numero >2< "<<cantMul<<" veces."<<endl;
                            puntosR=puntosAposJ1*cantMul;
                            if (puntosR>=puntosAposJ1){
                                cout<<"Ganaste "<<puntosR<<" puntos!!";
                                puntosTJ1=puntosTJ1+puntosR;
                                cout<<"Total acumulado: "<<puntosTJ1<<" puntos"<<endl;
                            };if (cantMul==0){ronEmp++;cout<<"No salio tu numero multiplicador :c"<<endl;
                            };
                        break;
                    case 22:cantMul=contarNumerosRepetidos(v,3,5);
                            cout<<"Se repite el numero >3< "<<cantMul<<" veces."<<endl;
                            puntosR=puntosAposJ1*cantMul;
                            if (puntosR>=puntosAposJ1){
                                cout<<"Ganaste "<<puntosR<<" puntos!!";
                                puntosTJ1=puntosTJ1+puntosR;
                                cout<<"Total acumulado: "<<puntosTJ1<<" puntos"<<endl;
                            };if (cantMul==0){ronEmp++;cout<<"No salio tu numero multiplicador :c"<<endl;
                            };
                        break;
                    case 23:cantMul=contarNumerosRepetidos(v,4,5);
                            cout<<"Se repite el numero >4< "<<cantMul<<" veces."<<endl;
                            puntosR=puntosAposJ1*cantMul;
                            if (puntosR>=puntosAposJ1){
                                cout<<"Ganaste "<<puntosR<<" puntos!!";
                                puntosTJ1=puntosTJ1+puntosR;
                                cout<<"Total acumulado: "<<puntosTJ1<<" puntos"<<endl;
                            };if (cantMul==0){ronEmp++;cout<<"No salio tu numero multiplicador :c"<<endl;
                            };
                        break;
                    case 24:cantMul=contarNumerosRepetidos(v,5,5);
                            cout<<"Se repite el numero >5< "<<cantMul<<" veces."<<endl;
                            puntosR=puntosAposJ1*cantMul;
                            if (puntosR>=puntosAposJ1){
                                cout<<"Ganaste "<<puntosR<<" puntos!!";
                                puntosTJ1=puntosTJ1+puntosR;
                                cout<<"Total acumulado: "<<puntosTJ1<<" puntos"<<endl;
                            };if (cantMul==0){ronEmp++;cout<<"No salio tu numero multiplicador :c"<<endl;
                            };
                        break;
                    default:cantMul=contarNumerosRepetidos(v,6,5);
                            cout<<"Se repite el numero >6< "<<cantMul<<" veces."<<endl;
                            puntosR=puntosAposJ1*cantMul;
                            if (puntosR>=puntosAposJ1){
                                cout<<"Ganaste "<<puntosR<<" puntos!!";
                                puntosTJ1=puntosTJ1+puntosR;
                                cout<<"Total acumulado: "<<puntosTJ1<<" puntos"<<endl;
                            };if (cantMul==0){ronEmp++;cout<<"No salio tu numero multiplicador :c"<<endl;
                            };
                        break;
                    }


                    }
                    system("pause");
            };
            }else{
                cout<<"No tenes esa cantidad!"<<endl;
            }

            ///JUGADOR 2
            cout<<"Jugador 2 tiene "<<puntosTJ2<<" puntos para apostar"<<endl;
            cout<<"Ingrese los puntos a apostar: \t";
            cin>>puntosAposJ2;
            if(puntosAposJ2<=puntosTJ2){
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
                    puntosTJ2=puntosTJ2-puntosAposJ2;
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
                            puntosR=puntosAposJ2*cantMul;
                            if (puntosR>=puntosAposJ2){
                                cout<<"Ganaste "<<puntosR<<" puntos!!";
                                puntosTJ2=puntosTJ2+puntosR;
                                cout<<"Total acumulado: "<<puntosTJ2<<" puntos"<<endl;
                            };if (cantMul==0){
                                cout<<"No salio tu numero multiplicador :c"<<endl;
                                ronEmp++;
                            };
                        break;
                    case 21:cantMul=contarNumerosRepetidos(v,2,5);
                            cout<<"Se repite el numero >2< "<<cantMul<<" veces."<<endl;
                            puntosR=puntosAposJ2*cantMul;
                            if (puntosR>=puntosAposJ2){
                                cout<<"Ganaste "<<puntosR<<" puntos!!";
                                puntosTJ2=puntosTJ2+puntosR;
                                cout<<"Total acumulado: "<<puntosTJ2<<" puntos"<<endl;
                            };if (cantMul==0){ronEmp++;cout<<"No salio tu numero multiplicador :c"<<endl;
                            };
                        break;
                    case 22:cantMul=contarNumerosRepetidos(v,3,5);
                            cout<<"Se repite el numero >3< "<<cantMul<<" veces."<<endl;
                            puntosR=puntosAposJ2*cantMul;
                            if (puntosR>=puntosAposJ2){
                                cout<<"Ganaste "<<puntosR<<" puntos!!";
                                puntosTJ2=puntosTJ2+puntosR;
                                cout<<"Total acumulado: "<<puntosTJ2<<" puntos"<<endl;
                            };if (cantMul==0){ronEmp++;cout<<"No salio tu numero multiplicador :c"<<endl;
                            };
                        break;
                    case 23:cantMul=contarNumerosRepetidos(v,4,5);
                            cout<<"Se repite el numero >4< "<<cantMul<<" veces."<<endl;
                            puntosR=puntosAposJ2*cantMul;
                            if (puntosR>=puntosAposJ2){
                                cout<<"Ganaste "<<puntosR<<" puntos!!";
                                puntosTJ2=puntosTJ2+puntosR;
                                cout<<"Total acumulado: "<<puntosTJ2<<" puntos"<<endl;
                            };if (cantMul==0){ronEmp++;cout<<"No salio tu numero multiplicador :c"<<endl;
                            };
                        break;
                    case 24:cantMul=contarNumerosRepetidos(v,5,5);
                            cout<<"Se repite el numero >5< "<<cantMul<<" veces."<<endl;
                            puntosR=puntosAposJ2*cantMul;
                            if (puntosR>=puntosAposJ2){
                                cout<<"Ganaste "<<puntosR<<" puntos!!";
                                puntosTJ2=puntosTJ2+puntosR;
                                cout<<"Total acumulado: "<<puntosTJ2<<" puntos"<<endl;
                            };if (cantMul==0){ronEmp++;cout<<"No salio tu numero multiplicador :c"<<endl;
                            };
                        break;
                    default:cantMul=contarNumerosRepetidos(v,6,5);
                            cout<<"Se repite el numero >6< "<<cantMul<<" veces."<<endl;
                            puntosR=puntosAposJ2*cantMul;
                            if (puntosR>=puntosAposJ2){
                                cout<<"Ganaste "<<puntosR<<" puntos!!";
                                puntosTJ2=puntosTJ2+puntosR;
                                cout<<"Total acumulado: "<<puntosTJ2<<" puntos"<<endl;
                            };if (cantMul==0){ronEmp++;cout<<"No salio tu numero multiplicador :c"<<endl;
                            };
                        break;
                    }


                    }
                    system("pause");
            };
            }else{
                cout<<"No tenes esa cantidad!"<<endl;
            }
            if(puntosTJ1>puntosTJ2){
                JugadorG=nombreJ1;
                puntajeG=puntosTJ1;
                }else{
                    JugadorG=nombreJ2;
                    puntajeG=puntosTJ2;
                    }
        };
        cout<<"Felicidades "<<JugadorG<<" ganaste LA PARTIDA"<<endl;
        cout<<"Puntos totales: "<<puntajeG<<endl;
        system("pause");
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


    }


system("pause");
return 0;
}
