#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h> 
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,i=0,j=0; 
    string str;
    cin>>n; 

    for (i=0;i<n;i++)
    {

        string left="\0",right="\0";


        getline(cin,str);

         while (str.length()==0 ) 
            getline(cin, str); 

        for(j=0;j<str.length();j++)
        {
            if(j==0)
                left=str[j];
            else if (j%2==0)
                left=left+str[j];
            else if(j==1)
                right=str[j];
            else
                right=right+str[j];
        }
        str=left+" "+right;
        cout<<str<<endl;
    }

        

    return 0;
}
