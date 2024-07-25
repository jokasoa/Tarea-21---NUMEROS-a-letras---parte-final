#include <iostream>
#include <string>

using namespace std;

string UNIDADES[] = {"", "uno", "dos", "tres", "cuatro", "cinco", "seis", "siete", "ocho", "nueve"};
string DECENAS[] = {"diez", "once", "doce", "trece", "catorce", "quince", "dieciséis", "diecisiete", "dieciocho", "diecinueve"};
string DIEZ_DIEZ[] = {"", "", "veinte", "treinta", "cuarenta", "cincuenta", "sesenta", "setenta", "ochenta", "noventa"};
string CENTENAS[] = {"", "cien", "doscientos", "trescientos", "cuatrocientos", "quinientos", "seiscientos", "setecientos", "ochocientos", "novecientos"};

string convertir_cientos(int numero);

string numero_a_letras(int numero) {
    if (numero < 0 || numero > 999999999) {
        return "Número fuera de rango";
    }

    if (numero == 0) {
        return 0;
    }