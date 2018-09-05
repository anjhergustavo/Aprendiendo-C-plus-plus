
#include<iostream>
using namespace std;

int main(){
 int n;
 cout<<"ingrese un numero: "; cin>>n;
 cout<<n<<" = ";
 
 for(int x=2;x<=100;){  //el incremento despues
  if(n%x==0){
   cout<<x;
   n/=x;          //n = n / x
   if(n>=x && n!=1){   
    cout<<" * ";
   }
  }else{
   x++;
  } 
 }
}
