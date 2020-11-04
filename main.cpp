#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> enteros;
    string op;

    while (true)
    {
        cout << "...........Administrador de Numeros........."<< endl;
        cout << endl;
        cout << "1) Agregar al final" << endl;
        cout << "2) Mostrar"<< endl;
        cout << "3) Inicializar"<<endl;
        cout << "4) Frente"<< endl;
        cout << "5) Ultimo"<<endl;
        cout << "6) Ordenar"<<endl;
        cout << "7) Insertar"<<endl;
        cout << "8) Eliminar"<<endl;
        cout << "9) Eliminar ultimo"<<endl;
        cout << "0) Salir" << endl;
        cout << endl << endl;
        cout << "Opcion: ";
        getline(cin,op);


        if(op == "1"){
            system("cls");
            int entero;

            cout << "Entero: ";
            cin>>entero; cin.ignore();

            enteros.push_back(entero);
            system("PAUSE");
            system("cls");
        }
        else if(op == "2"){
                system("cls");
            for(size_t i=0; i < enteros.size(); i++){
                cout << enteros[i] << ",";
            }
            cout << endl;
            system("PAUSE");
            system("cls");
        }
        else if(op == "3"){
            system("cls");
            size_t n;
            int entero;

            cout << "Tamano: ";
            cin>>n;
            cout << "entero: ";
            cin>>entero; cin.ignore();

            enteros = vector<int>(n, entero);
            system("PAUSE");
            system("cls");
        }
        else if(op == "4")
        {   system("cls");
            if(enteros.empty()){
                cout << "vector esta vacio" << endl;
                system("PAUSE");
                system("cls");
            }
            else{
                cout << enteros.front() << endl;
                system("PAUSE");
                system("cls");
            }
        }
        else if(op == "5")
            {system("cls");
            if(enteros.empty()){
                cout << "vector esta vacio" << endl;
                system("PAUSE");
                system("cls");
            }
            else{
                cout << enteros.back() << endl;
                system("PAUSE");
                system("cls");
            }
        }
        else if(op == "6")
        {    system("cls");
             sort(enteros.begin(), enteros.end());
            system("PAUSE");
            system("cls");
        }
        else if(op == "7")
        {   system("cls");
            size_t p;
            int entero;

            cout << "posicion: ";
            cin>>p;
            cout << "entero: ";
            cin>>entero; cin.ignore();

            if(p >= enteros.size()){
                cout << "posición no valida" << endl;
                system("PAUSE");
                system("cls");
            }
            else{
                enteros.insert(enteros.begin()+p, entero);
                system("PAUSE");
                system("cls");
            }
        }
        else if(op == "8")
        {   system("cls");
            size_t p;

            cout << "posicion: ";
            cin>>p; cin.ignore();

            if(p >= enteros.size()){
                cout << "posicion no valida" << endl;
                system("PAUSE");
                system("cls");
            }
            else{
                enteros.erase(enteros.begin()+p);
                system("PAUSE");
                system("cls");
            }

        }
        else if(op == "9")
        {   system("cls");
            if(enteros.empty()){
                cout << "vector está vacio" << endl;
                system("PAUSE");
                system("cls");
            }
            else {
                enteros.pop_back();
                system("PAUSE");
                system("cls");
            }
        }
        else if(op == "0"){
            break;
        }
    }


    return 0;
}
