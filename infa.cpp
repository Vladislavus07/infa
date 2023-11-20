#include <iostream>
#include <string>

using namespace std;
long long itc_len(string str){
    int length = 0;
    for (int i = 0; str[i] != '\0'; ++i) {
        length++;
    }
    return length;
}
string summa(string a, string b){
string result;
int c = a.size();
int d = b.size();
int dlina;
if (d > c) {
    result = b;
    dlina = d - c;
    for (int i = 0; i < dlina; i++) {
        a = '0' + a;
    }
}
