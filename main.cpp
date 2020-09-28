#include <iostream>

using namespace std;
//char int short float double long
int main() {
    string cadena;

    cout << "Dame el tipo de dato " <<endl;
    getline(cin, cadena);

    if(cadena == "int"){
        cout << sizeof(int) << endl;
    }else if(cadena == "char"){
        cout << sizeof(char) << endl;
    }else if(cadena == "short"){
        cout << sizeof(short) << endl;
    }else if(cadena == "float"){
        cout << sizeof(float) << endl;
    }else if(cadena == "double"){
        cout << sizeof(double) << endl;
    }else if(cadena == "long"){
        cout << sizeof(long) << endl;
    }


    return 0;
}
