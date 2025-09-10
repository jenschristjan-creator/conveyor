#include <stdio.h>
#include <stdbool.h>

int antalmotor;
float vaegtpakke;
bool beltekorer;
float kgmotor = 5.6;

void submitinfo(int m, float p){
    float kapasitet = kgmotor * antalmotor;

    if(p<=kapasitet) {
        printf("beltet kan haandtere vaegten");
    } else {
        printf("beltet kan ikke haandtere vaegten");
    }
    return;
}
int main(void){

printf("Hvor mange motorer koerer i dag: ");
scanf("%d", &antalmotor);

printf("Hvad vejer pakkerne: ");
scanf("%f" , &vaegtpakke);

submitinfo(antalmotor, vaegtpakke);
    return 0;
}