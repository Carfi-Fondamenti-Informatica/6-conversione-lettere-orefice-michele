#include <iostream>
using namespace std;
bool ris=0;
void riconoscimento(char &a){
  if(a<91&&a>64) {
    ris=true;
    a=a+32;
  }
  else if (a<123&&a>96){
    ris=true;
    a=a-32;
  }
  else {
    ris=false;
  }
  
 int main(){
  char input=0;
   cin>> input;
   riconoscimento(input);
   if(ris==true){
     cout<<"true"<<endl;
     cout<<input<<endl;
   }
   else{
     cout<<"false"<<endl;
   }
     
   return 0;
}
