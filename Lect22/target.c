// #include <stdio.h>
// #include <string.h>
// int main(){
//     char str[] ="hello";
//     char target ='e';
//     char str2[100] ;
//     int ln = strlen(str);
//     int j =0;
//     for (int i = 0; i < ln ; i++)
//     {
//       if (str[i]!=target)
//       {
//         str2[j]=str[i];
//         j++;
//       }
      
//     }
//     str2[j]='\0';
//     printf("%s",str2);
//     return 0;

// }




// #include <stdio.h>
// #include <string.h>
// int main () {
//     char str[] = "abade";
//     char str2[100];
//     int ln = strlen(str);
//     int j = 0 ;
//     int freq[256]={0};
//     for (int i = 0; i < ln ; i++)
//     {
//       freq[str[i]]++;
        
//     }
//     for (int i = 0; i < ln ; i++)
//     {
//         if (freq[str[i]]==1)
//         {
//            printf("%c",str[i]);
//            break;
//         }
        
        
//     }
    
// }






#include <stdio.h>
#include <string.h>
int main (){
    char str[] = "abade";
    char str2[] ="aerty";
    char str3[100];
    int ln = strlen(str);
    int j = 0 ;
    int freq[256]={0};
    for (int i = 0; i < ln ; i++)
    {
        if (str[i]==str2[j])
        {
          printf("%s",str3);
          break;
        }
        
    }
    return 0 ;

}
