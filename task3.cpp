#include <stdio.h>

int main (){
int num1;
printf("Enter the number: ") ; 
scanf("%d" , &num1);

 if (num1 % 6 == 0 ) {
    printf("Excellent!\n") ;
} else if (num1 % 2 == 0 || num1 % 3 == 0) {
    printf("OK.\n") ;
} else {
    printf("Noo.\n") ;
}

return 0 ;

}