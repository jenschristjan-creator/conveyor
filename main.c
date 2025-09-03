#include <stdio.h>
#include <stdbool.h>

int antalmotor;
int vaegtpakke;
bool beltekorer;
float kgmotor = 5.6;

void submitinfo(int m, int p){
    antalmotor = m;
    vaegtpakke = p;
    float kapasitet = kgmotor * antalmotor;

    if(p<=kapasitet) {
        printf("beltet kan håndtere vægten");
    } else {
        printf("beltet kan ikke håndtere vægten");
    }
    return;
}
int main(void){
    submitinfo(5,100);
    return 0;
}