#include <iostream>
#include<string>

using namespace std;

int main()
{
    int n,count = 0;
    string str;
    cin >> n ;
    while(n--){
        cin >> str;
        if(str == "--X"){
            count--;
        }
        else if(str == "X--"){
            count--;
        }
        else if(str == "X++"){
            count++;
        }
        else if(str == "++X"){
            count++;
        }
        if(count < 0){
            count = 0;
        }
    }
    cout << count << "\n";
    
    return 0;
}