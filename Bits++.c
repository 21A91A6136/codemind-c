#include <iostream>
  using namespace std;
  char s[3];
  int main(){
      int n;
      while(cin>>n){
          int x=0;
          for(int i=0;i<n;i++){
              cin>>s;
             if(s[1]=='+') x++;
             else x--;
         }
         cout<<x<<endl;
     }
     return 0;
 }