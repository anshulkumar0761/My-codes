// #include <stdio.h>
// int main(){
//     int x=100;
//     int y=200;
//     swap(x,y);
//     }
//     int swap(int x,int y){
//          x = x+y;
//          y = x-y;
//          x = x-y;
//         printf("%d , %d " ,x,y);
//     }




#include <stdio.h>
int main (){
    int arr[5]={1,2,3,4,5};
    int *p=arr;
    for (int  i = 0; i < 5; i++)
    {
        printf("%d\t",*(p+i));
    }
    printf("\n");
    for(int j=5 ; j >= 0 ; j--)
    {
        printf("%d\t",*(p+j));
    }
    
}

