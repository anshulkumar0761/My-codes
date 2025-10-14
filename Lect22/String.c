// #include <stdio.h>
// #include <string.h>
// int main (){
//     char name[20] = "MADAM";
//     int Palindrome ;
//     int len = strlen(name);
//     for (int i = 0; i < len / 2; i++)
//     {
//         if (name[i] != name[len - i - 1]) {
//           Palindrome = 0 ;
//             break;
//         }   
//     }
//  if (Palindrome)
//         printf("The string is a palindrome.\n");
//     else
//         printf("The string is not a palindrome.\n");
// return 0;
// }


// #include <stdio.h>
// int main() {
//     char str[] = "HELLO" ;
//     int ln = strlen(str);
//     int count = 0;

//     for (int i = 0; i < ln ; i++)
//     {
//         for (int j = 0; j < i ; j++)
//     {
//        if (str [i] == str [j])
//        {
//         count ++ ;
//         break ;
//        }
       
//     }
//     if (count==0){
//         printf("%c",str[i]);

//        }
    
        
//     }
    
// }

#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "dhruv";
    int vcount = 0;
    int Ccount = 0;
    int ln = strlen(str);

    for (int i = 0; i < ln; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            vcount++;
        } else {
            Ccount++;
        }
    }

    printf("vowels = %d\n", vcount);
    printf("consonants = %d\n", Ccount);

    return 0;
}