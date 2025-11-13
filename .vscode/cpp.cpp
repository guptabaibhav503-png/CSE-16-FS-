#include<iostream>
using namespace std;
int main() {
    int arr[60];
      for(int i=0;i<60;i++){
         arr[i]=i+1;
      }  
      int idx=-1;
      int search=55;
      for(int i=0;i<60;i++){
         if(arr[i]==search){
            idx=i;
         }
      }
}
