#include <iostream>
#include <fstream>
#include <vector>
#include "Circulo.h"
#include "Cuadrado.h"
#include "Triangulo.h"
#include "Pentagono.h"


int main(int argc, char** argv)
{
    std::vector<Geometrica*>vFig;
    cout<<"Ahora se comprobara con un archivo"<<endl;
    std::vector<string>vNom;

    string nombre =" ";
    Geometrica* pG=0;

    if(argc < 2){
        cout << "Ingrese el archivo de texto:" << endl;

        return -1;
    }

    string path = argv[1];
    ifstream archivo;
    archivo.open(path);

    cout << "Se utilizara el archivo" << path << endl;

    if(archivo.is_open()){

        int tipo;
        double p_1,p_2;
        double c_X,c_Y;
        string linea;
        ofstream archSal;
        archSal.open("Fig_geometricas.txt");
        if( archSal.is_open()){
            do{
              getline(archivo,path);
              linea = path;
              if(linea.size()!=9){
                  cout<<"Error!"<<endl;
              }else{
                  cout<< linea<<endl;
                  tipo = (int)linea[0]-48;
                  p_1 = (double)linea[2]-48;
                  p_2 = (double)linea[4]-48;
                  c_X = (double)linea[6]-48;
                  c_Y= (double)linea[8]-48;
                  switch (tipo) {
                  case 1:
                  nombre = "Circulo";
                  pG = new Circulo(p_1,c_X,c_Y);
                  break;

                  case 2:
                  nombre = "Cuadrado";
                  pG = new Cuadrado(p_1,c_X,c_Y);
                  break;

                  case 3:
                  nombre = "Triangulo";
                  pG = new Triangulo(p_1,p_2,c_X,c_Y);
                  break;

                  case 4:
                  nombre = "Pentagono";
                  pG = new Pentagono(p_1,p_2,c_X,c_Y);
                  break;

                  default:
                  cout<<"figura incorrecta"<<endl;
                   break;
              }
                  vNom.push_back(nombre);
                  vFig.push_back(pG);
              }

            }while(!archivo.eof());
            cout<<"numero de figuras creadas: "<<vFig.size()<<endl;
            for(int i=0; i< vFig.size();i++){
                cout<<vNom.at(i)<<", (x,y)--> "<<vFig.at(i)->getX()<<","<<vFig.at(i)->getY();
                cout<<"-->perimetro: "<<vFig.at(i)->perimetro()<<" y area: "<<vFig.at(i)->area()<<endl;
                archSal<<vNom.at(i)<<", (x,y)--> "<<vFig.at(i)->getX()<<","<<vFig.at(i)->getY();
                archSal<<"-->perimetro: "<<vFig.at(i)->perimetro()<<" y area: "<<vFig.at(i)->area()<<endl;

            }
            for(int i=0; i< vFig.size();i++){

                delete vFig.at(i);
            }
            archSal.close();
        }
    }

    archivo.close();
    return 0;

}
