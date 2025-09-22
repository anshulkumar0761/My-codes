//  #include<stdio.h>
// int main() {
//     int arr[5]={10,20,30,40,50};
//     int a=arr[0];
//     for (int i = 0; i < 5; i++)
//     {
//         arr[i] = arr[i+1];
//     }
//     arr[4]=a;
//     for ( int j = 0; j < 5; j++)
//     {
//         printf("%d\n",arr[j]);
//     }
    
// }




#include <stdio.h>
int main (){

int arr [5]={1,2,3,4,5};
int maxsum=arr[0];
for (int i = 0; i < 5 ; i++)
{
     
       for (int j = 0; j < 5 ; i++)
 {
    int currentsum=+arr[j];
    if (currentsum>maxsum){
        maxsum=currentsum;
    }
 }
 
}
printf("%d",maxsum);
return 0;
}













