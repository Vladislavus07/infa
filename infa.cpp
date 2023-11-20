#include <iostream>
#include <string>
using namespace std;

long long itc_len(string str)
{
	int a = 0;
	for (int b = 0; str[b] != '\0'; b++)
	{
        	a++;
	}
	return a;
}

string itc_reverse_str(string str)
{
    string perev = "";
    for (int i = itc_len(str) - 1; i >= 0; i--) {
        perev += str[i];
    }
    return perev;
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
    st = itc_reverse_str(st);
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
    st1 = itc_reverse_str(st1);
    cout << st1 << endl;
}
else{
    res = st;
    res = itc_reverse_str(res);
}
int dlin1 = res.size();
bool odin = false;

for (int i = dlin1 - 1; i >= 0; i--) {
    int summ = (st[i] - '0') + (st1[i] - '0') + odin;
    res[i] = (summ % 10) + '0';
    odin = summ / 10;
}


if (odin) {
    res = res + '1';
}
//res = itc_reverse_str(res);
return res;
}





int main()
{
    string st, st1, res, str;
    cin >> st >> st1;
    res = str;
    cout << summ(st, st1) << endl;
}
