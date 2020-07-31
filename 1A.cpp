
//Theatre Square


//https://codeforces.com/problemset/problem/1/A

//Theatre Square in the capital city of Berland has a rectangular shape with the size n × m meters. On the occasion of the city's anniversary, a decision was taken to pave the Square with square granite flagstones. Each flagstone is of the size a × a.
//What is the least number of flagstones needed to pave the Square? It's allowed to cover the surface larger than the Theatre Square, but the Square has to be covered. It's not allowed to break the flagstones. The sides of flagstones should be parallel to the sides of the Square.
//Input
//The input contains three positive integer numbers in the first line: n,  m and a (1 ≤  n, m, a ≤ 10^9).
//Output
//Write the needed number of flagstones.




#include <iostream>
#include <math.h>
using namespace std;

int main() {
    
    
    double n, m, a;

    cin>>n>>m>>a;
    cout<<(long long)ceil(n/a)*(long long)ceil(m/a);
    return 0;
}


// 1. ceil can be used only with float, double, long double etc ie point value data types
// 2. long long int typecasting to preserve int result format

