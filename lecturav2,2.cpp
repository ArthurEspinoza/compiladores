#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
using namespace std;
class AL{
private:
    char letras[27] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char digitos[10] = {'0','1','2','3','4','5','6','7','8','9'};
    string palabrasReservadas[20]= {"LEER","ESCRIBIR","DIMENSIONAR","SI","SINO","ENTONCES","SEGUN","HACER","DEOTROMODO","MIENTRAS","FINMIENTRAS","REPETIR","HASTAQUE","PARA","HASTA","FINPARA","FINSI","ALGORITMO","INICIO","FIN"};
    int r0[22] = {1,3,7,-1,9,15,18,19,-1,27,28,29,30,31,32,33,34,35,36,37,38,-1};
    int r1[22] = {1,1,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2};
    int r2[22] = {-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2};
    int r3[22] = {1,3,4,5,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4};
    int r4[22] = {-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2};
    int r5[22] = {6,5,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6};
    int r6[22] = {-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2};
    int r7[22] = {7,7,8,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7};
    int r8[22] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int r9[22] = {10,10,10,10,10,14,13,10,10,10,10,11,10,10,10,10,10,10,10,10,10,10};
    int r10[22] = {-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2};
    int r11[22] = {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,12,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
    int r12[22] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int r13[22] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int r14[22] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int r15[22] = {16,16,16,16,16,16,17,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16};
    int r16[22] = {-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2};
    int r17[22] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int r18[22] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int r19[22] = {20,20,20,20,20,20,20,21,20,23,20,20,20,20,20,20,20,20,20,20,20,20};
    int r20[22] = {-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2};
    int r21[22] = {21,21,21,21,21,21,21,21,22,21,21,21,21,21,21,21,21,21,21,21,21,21};
    int r22[22] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int r23[22] = {23,23,23,23,23,23,23,23,23,24,23,23,23,23,23,23,23,23,23,23,23,23};
    int r24[22] = {23,23,23,23,23,23,23,26,23,25,23,23,23,23,23,23,23,23,23,23,23,23};
    int r25[22] = {24,24,24,24,24,24,24,26,24,24,24,24,24,24,24,24,24,24,24,24,24,24};
    int r26[22] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int r27[22] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int r28[22] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int r29[22] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int r30[22] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int r31[22] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int r32[22] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int r33[22] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int r34[22] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int r35[22] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int r36[22] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int r37[22] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int r38[22] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int indice;
public:
    int evaluar(char obj){
        cout << "Este es el char que llego ..."<< obj<<endl;
        int bandera = -1;
        for(int i = 0; i<= 27; i++){
            //cout << "letras["<<i<<"]= "<<letras[i]<<endl;
            if(letras[i]==obj)
                {bandera =0;break;}
        }
        for(int j = 0; j<10; j++){
            //cout << "digitos["<<j<<"]= "<<digitos[j]<<endl;
            if(digitos[j]==obj)
                {bandera=1;break;}
        }
        //cout << "bandera despues de los for"<<bandera<<endl;
        if(bandera == -1){
            switch(obj){
        case '"':
            bandera = 2;
            break;
        case '<':
             bandera = 4;
            break;
        case '=':
            bandera = 6;
            break;
        case '>':
            bandera = 5;
            break;
        case '&':
            bandera = 15;
            break;
        case '|':
            bandera = 16;
            break;
        case '~':
            bandera = 14;
            break;
        case '+':
            bandera = 10;
            break;
        case '-':
            bandera = 11;
            break;
        case '*':
            bandera = 9;
            break;
        case '/':
            bandera = 7;
            break;
        case '^':
            bandera = 12;
            break;
        case '.':
            bandera = 3;
            break;
        case ';':
            bandera = 13;
            break;
        case '\n':
            bandera = 8;
            break;
        case '(':
            bandera = 17;
            break;
        case ')':
            bandera = 18;
            break;
        case '[':
            bandera = 19;
            break;
        case ']':
            bandera = 20;
            break;
        default:
            bandera = 21;
            break;
        }
        }
        cout << "esta es la bandera"<< bandera<<endl;
        return bandera;
    }
    int devolverValor(int edo,int index){
        //cout<<"este el indice"<<index<<" este es el estado "<<edo<<endl;
        int nuevoEdo;
        switch(edo){
            case 0:
                nuevoEdo = r0[index];
                return nuevoEdo;
            break;
            case 1:
                nuevoEdo = r1[index];
                return nuevoEdo;
            break;
            case 2:
                nuevoEdo = r2[index];
                return nuevoEdo;
            break;
            case 3:
                nuevoEdo = r3[index];
                return nuevoEdo;
            break;
            case 4:
                nuevoEdo = r4[index];
                return nuevoEdo;
            break;
            case 5:
                nuevoEdo = r5[index];
                return nuevoEdo;
            break;
            case 6:
                nuevoEdo = r6[index];
                return nuevoEdo;
            break;
            case 7:
                nuevoEdo = r7[index];return nuevoEdo;
            break;
            case 8:
                nuevoEdo = r8[index];
                return nuevoEdo;
            break;
            case 9:
                nuevoEdo = r9[index];
                return nuevoEdo;
            break;
            case 10:
                nuevoEdo = r10[index];
                return nuevoEdo;
            break;
            case 11:
                nuevoEdo = r11[index];
                return nuevoEdo;
            break;
            case 12:
                nuevoEdo = r12[index];
                return nuevoEdo;
            break;
            case 13:
                nuevoEdo = r13[index];
                return nuevoEdo;
            break;
            case 14:
                nuevoEdo = r14[index];
                return nuevoEdo;
            break;
            case 15:
                nuevoEdo = r15[index];
                return nuevoEdo;
            break;
            case 16:
                nuevoEdo = r16[index];
                return nuevoEdo;
            break;
            case 17:
                nuevoEdo = r17[index];
                return nuevoEdo;
            break;
            case 18:
                nuevoEdo = r18[index];
                return nuevoEdo;
            break;
            case 19:
                nuevoEdo = r19[index];
                return nuevoEdo;
            break;
            case 20:
                nuevoEdo = r20[index];
                return nuevoEdo;
            break;
            case 21:
                nuevoEdo = r21[index];
                return nuevoEdo;
            break;
            case 22:
                nuevoEdo = r22[index];
                return nuevoEdo;
            break;
            case 23:
                nuevoEdo = r23[index];
                return nuevoEdo;
            break;
            case 24:
                nuevoEdo = r24[index];
                return nuevoEdo;
            break;
            case 25:
                nuevoEdo = r25[index];
                return nuevoEdo;
            break;
            case 26:
                nuevoEdo = r26[index];
                return nuevoEdo;
            break;
            case 27:
                nuevoEdo = r27[index];
                return nuevoEdo;
            break;
            case 28:
                nuevoEdo = r28[index];
                return nuevoEdo;
            break;
            case 29:
                nuevoEdo = r29[index];
                return nuevoEdo;
            break;
            case 30:
                nuevoEdo = r30[index];
                return nuevoEdo;
            break;
            case 31:
                nuevoEdo = r31[index];
                return nuevoEdo;
            break;
            case 32:
                nuevoEdo = r32[index];
                return nuevoEdo;
            break;
            case 33:
                nuevoEdo = r33[index];
                return nuevoEdo;
            break;
            case 34:
                nuevoEdo = r34[index];
                return nuevoEdo;
            break;
            case 35:
                nuevoEdo = r35[index];
                return nuevoEdo;
            break;
            case 36:
                nuevoEdo = r36[index];
                return nuevoEdo;
            case 37:
                nuevoEdo = r37[index];
                return nuevoEdo;
            break;
        }
    }
    string devolverPatron(int index){
        //cout << "Este es el index que llego "<<index<<endl;
        switch(index){
        case 2:
            return "Identificador";
            break;
        case 8:
            return "Cte Char";
            break;
        case 4:
            return "Entero";
            break;
        case 6:
            return "Cte_Numerico";
            break;
        case 10:
            return "Menor que";
            break;
        case 12:
            return "Asignación";
            break;
        case 13:
            return "Menor igual";
            break;
        case 14:
            return "Distinto";
            break;
        case 16:
            return "Mayor que";
            break;
        case 17:
            return "Mayor igual";
            break;
        case 18:
            return "Igual";
            break;
        case 33:
            return "Conjuncion";
            break;
        case 34:
            return "Disyuncion";
            break;
        case 32:
            return "Negacion";
            break;
        case 28:
            return "Suma";
            break;
        case 29:
            return "Resta";
            break;
        case 27:
            return "Multiplicacion";
            break;
        case 20:
            return "Division";
            break;
        case 26:
            return "ComentarioMultiple";
            break;
        case 22:
            return "ComentarioSimple";
            break;
        case 30:
            return "Potencia";
            break;
        case 31:
            return "PuntoyComa";
            break;
        case 35:
            return "ParentesisI";
            break;
        case 36:
            return "ParentesisD";
            break;
        case 37:
            return "CorcheteI";
            break;
        case 38:
            return "CorcheteD";
            break;
        }
    }
    int checarAceptacion(int pos){
        int checa=90;
        //cout << "Esto quiero checar: "<<pos<<endl;
        if(pos == 2|pos==4||pos==6||pos==10||pos==16||pos==20)
            checa = -2;
        if(pos == 8||pos==12||pos==13||pos==14||pos==17||pos==18||pos==22||pos==26||pos==27||pos==28||pos==29||pos==30||pos==31||pos==32||pos==33||pos==34||pos==35||pos==36||pos==37||pos==38)
            checa = 0;
        if(pos == -1)
            checa = -1;
        //cout << "checa = "<<checa<<endl;
        return checa;
    }
    bool buscarPR(string obj){
        bool bandera=false;
        for(int i  = 0;i<20;i++){
            if(palabrasReservadas[i]==obj)
                {bandera=true;break;}
        }
        return bandera;
    }
};



class Archivo{
private:
    string nombre;
    ifstream fuente;
    int posicion;
public:
    void lectura(){
    //string texto;
    char caracter;
    int bandera=0;
    int ubicacion;
    //string textAuxiliar;

    fuente.open("prueba1.txt",ios::in);

    if(fuente.fail()){
        cout<<"no se pudo abrir el archivo"<<endl;
        exit(1);
    }

    while(!fuente.eof()){
        //getline(fuente,texto);
        fuente >> std::noskipws>>caracter;//lee el caracter sin omitir los espacios en blanco
        cout << caracter;cout << endl;
        cout << "Ubicacion: "<<fuente.tellg()<<endl;
        if(caracter == 'M'&&bandera ==0)
            {
                ubicacion = fuente.tellg();
                cout << "Esta es la ubicacion del if: "<<ubicacion<<endl;
                fuente.seekg(ubicacion-1);//Omite el caracter deseado y regresa al lugar en que se quedo
                //cout << caracter;
                //system("pause");
                bandera = 1;
                //cout << "Es un espacio en blanco" << endl;
            }/*else{
                texto = texto +caracter;
                cout << texto<<endl;
            }*/
        if(caracter == '\n')
            cout << "Es un salto de linea" << endl;
        /*if(caracter == '\t')
            cout << "Es un tabulador"<<endl;*/
        //estado = evaluar(caracter);
    }
    fuente.close();
}
};
int main(){
Archivo p1;
p1.lectura();
return 0;

}
