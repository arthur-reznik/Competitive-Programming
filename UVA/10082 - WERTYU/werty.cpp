#include <bits/stdc++.h>

using namespace std;

int main(){

    char V[255];
    string palavra;
    //simbolos
    V[' '] = ' ';

    //numeros
    V['0'] = '9';
    V['9'] = '8';
    V['8'] = '7';
    V['7'] = '6';
    V['6'] = '5';
    V['5'] = '4';
    V['4'] = '3';
    V['3'] = '2';
    V['2'] = '1';
    V['1'] = '`';
    V['-'] = '0';
    V['='] = '-';
    //letras
    V['W'] = 'Q';
    V['E'] = 'W';
    V['R'] = 'E';
    V['T'] = 'R';
    V['Y'] = 'T';
    V['U'] = 'Y';
    V['I'] = 'U';
    V['O'] = 'I';
    V['P'] = 'O';
    V['['] = 'P';
    V[']'] = '[';
    V['\\'] = ']';

    V['S'] = 'A';
    V['D'] = 'S';
    V['F'] = 'D';
    V['G'] = 'F';
    V['H'] = 'G';
    V['J'] = 'H';
    V['K'] = 'J';
    V['L'] = 'K';
    V[';'] = 'L';
    V['\''] = ';';

    V['X'] = 'Z';
    V['C'] = 'X';
    V['V'] = 'C';
    V['B'] = 'V';
    V['N'] = 'B';
    V['M'] = 'N';
    V[','] = 'M';
    V['.'] = ',';
    V['/'] = '.';


    while(getline(cin,palavra)){
        for(int i=0;i<palavra.size(); i++){
            printf("%c",V[palavra[i]]);
        }
        cout << endl;
    }
}
