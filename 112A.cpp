//Petya and Strings
//https://codeforces.com/problemset/problem/112/A
//
//Little Petya loves presents. His mum bought him two strings of the same size for his birthday. The strings consist of uppercase and lowercase Latin letters. Now Petya wants to compare those two strings lexicographically. The letters' case does not matter, that is an uppercase letter is considered equivalent to the corresponding lowercase letter. Help Petya perform the comparison.
//
//Input
//Each of the first two lines contains a bought string. The strings' lengths range from 1 to 100 inclusive. It is guaranteed that the strings are of the same length and also consist of uppercase and lowercase Latin letters.
//
//Output
//If the first string is less than the second one, print "-1". If the second string is less than the first one, print "1". If the strings are equal, print "0". Note that the letters' case is not taken into consideration when the strings are compared.

#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int ans=0;
    string str1,str2;
    cin>>str1>>str2;
    int len=str1.length();
    for(int i=0;i<len;i++){
        str1[i]=tolower(str1[i]);
        str2[i]=tolower(str2[i]);
    }
    for(int i=0;i<len;i++)
    {
        if((str1[i]-str2[i])==0 || abs(str1[i]-str2[i])==32)
        {
            ans=ans+0;
        }else if((str1[i]-str2[i])>0 ){
            ans=1;
            break;
        }else if((str1[i]-str2[i])<0 ){
            ans=-1;
            break;
        }
    }
    
    cout<<ans;
    
    return 0;
}
