#include <iostream>
using namespace std;
int main(){
    double n;
    int a, b, c;
    while(cin >> n){
    c = n;
    n = 100*n;
    b = n;
    cout << "NOTAS:\n";
    cout << c/100 << " nota(s) de R$ 100.00\n";
    a = (c%100);
    cout << a/50 << " nota(s) de R$ 50.00\n";
    a = (a%50);
    cout << a/20 << " nota(s) de R$ 20.00\n";
    a = (a%20);
    cout << a/10 << " nota(s) de R$ 10.00\n";
    a = (a%10);
    cout << a/5 << " nota(s) de R$ 5.00\n";
    a= (a%5);
    cout << a/2 << " nota(s) de R$ 2.00\n";
    a = (a%2);
    cout << "MOEDAS:\n";
    cout << a/1 << " moeda(s) de R$ 1.00\n";
    b = b%100;
    cout <<  b/50 << " moeda(s) de R$ 0.50\n";
    b = b%50;
    cout <<  b/25 << " moeda(s) de R$ 0.25\n";
    b = b%25;
    cout <<  b/10 << " moeda(s) de R$ 0.10\n";
    b = b%10;
    cout <<  b/5 << " moeda(s) de R$ 0.05\n";
   b= b%5;
    cout <<  b/1 << " moeda(s) de R$ 0.01\n";
    }
    return 0;
}
