#include <iostream>
#include <string>

using namespace std;
long long itc_len(string str){
    int len = 0;
    for (int i = 0; str[i] != '\0'; ++i) {
        len++;
    }
    return len;
}
string summ(string st, string st1){
string res;
int z = st.size();
int f = st1.size();
int dlin;
if (f > z) {
    res = st1;
    dlin = f - z;
    for (int i = 0; i < dlin; i++) {
        st = st + '0';
    }
    cout << st << endl;
}
else if (f < z)
{
    res = st;
    dlin = z - f;
    for (int i = 0; i < dlin; i++)
    {
        st1 = st1 + '0';
    }
}
else{
    res = st;
}
int dlin1 = res.size();
bool odin = false;

for (int i = dlin1 - 1; i >= 0; i--) {
    int summ = (st[i] - '0') + (st1[i] - '0') + odin;
    res[i] = (summ % 10) + '0';
    odin = summ / 10;
}

if (odin) {
    res = '1' + res;
}

return res;
}
