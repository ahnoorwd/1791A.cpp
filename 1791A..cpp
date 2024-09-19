#include<iostream>
#include<string>
using namespace std;
int main()
{
     int t;
     cin>>t;
     while(t--){
          string s;
          cin>>s;
           if (s == "c" || s == "o" || s == "d" || s == "e" || s == "f" || s == "r" || s == "s") {
            cout << "YES" << endl;
        }
          else
               cout<<"NO"<<endl;
     }

}
