/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n ,count = 0,a,b,c;
    cin >> n ;
    while(n--){
        cin >> a >> b >> c;
        if(a == 1 && b == 1 && c == 1){
            count++;
        }
        if(a == 1 && b == 1 && c == 0){
            count++;
        }
        if( b == 1 && c == 1 && a == 0){
            count++;
        }
        if(c == 1 && a == 1 && b == 0){
            count++;
        }
        
    }
    
    cout << count ;

    return 0;
}
