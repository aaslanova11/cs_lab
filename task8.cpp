#include <stdio.h>
int main (){
int stick1, stick2, stick3 ;
printf("Enter the length of stick1, stick2, stick3: ");
scanf("%d%d%d", &stick1, &stick2, &stick3) ;

if(stick1 + stick2 > stick3 && stick1 + stick3 > stick2 && stick2 + stick3 > stick1){
printf("Yes.\n");
} else {
printf("No.\n");
}
    return 0;

}