#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;
#define SIZE 10000

int main(){
  char *pa, *pb, i, temp;
  char a[SIZE];
  cout<<"Input string : ";
  cin>>a;
  pa = &a[0]; //pa =a;
  cout<<"Original: ";
  for (i=0; i<strlen(a)-1; i++ ,pa++){
    cout<<setw(3)<<*pa;
  }
  cout<<setw(3)<<*pa<<endl;
  pa = a;
  pb = &a[strlen(a)-1];
  for (i=0; i<strlen(a)/2; i++){
  temp = *pa;
  *pa = *pb;
  *pb = temp;
  pa++; pb--;
  }
  pa = a;
  cout<<"Reverse: ";
  for (i=0; i<strlen(a)-1; i++ ,pa++){
    cout<<setw(3)<<*pa;
  }
  cout<<setw(3)<<*pa<<endl;
}