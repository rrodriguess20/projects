#include <stdio.h>
#include <stdlib.h>

int main(){

    float a, b, c;
    int i;

    printf("Digite um valor para A: ");
    scanf("%f", &a);
    printf("Digite um valor para B: ");
    scanf("%f", &b);
    printf("Digite um valor para C: ");
    scanf("%f", &c);
    printf("Digite um valor para I (1, 2 ou 3): ");
    scanf("%d", &i);

    if(i == 1){

        if(a<b && a<c){

            if(b<c){
                printf("A ordem crescente dos numeros eh: %.0f, %.0f, %.0f\n", a, b, c);

            }

            else{

                printf("A ordem crescente dos numeros eh: %.0f, %.0f, %.0f\n", a, c, b);
            }
        }

        else{

            if(b<a && b<c){
                if(a<c){
                    printf("A ordem crescente dos numeros eh: %.0f, %.0f, %.0f\n", b, a, c);

                }

                else{
                    printf("A ordem crescente dos numeros eh: %.0f, %.0f, %.0f\n", b, c, a); 
                }

            }

            else{

                if(a<b){

                    printf("A ordem crescente dos numeros eh: %.0f, %.0f, %.0f\n", c, a, b);
                }

                else{

                    printf("A ordem crescente dos numeros eh: %.0f, %.0f, %.0f\n", c, b, a);
                }
            }

        }
    }

        else{

        

        if(i == 2){ 
        

            if(a>b && a>c){

                 if(b>c){
                     printf("A ordem decrescente dos numeros eh: %.0f, %.0f, %.0f\n", a, b, c);

                  }

                else{

                    printf("A ordem decrescente dos numeros eh: %.0f, %.0f, %.0f\n", a, c, b);
                 }
                 }

            else{

                if(b>a && b>c){
                    if(a>c){
                        printf("A ordem decrescente dos numeros eh: %.0f, %.0f, %.0f\n", b, a, c);

                    }

                    else{
                        printf("A ordem decrescente dos numeros eh: %.0f, %.0f, %.0f\n", b, c, a); 
                    }

                }

                else{

                    if(a>b){

                        printf("A ordem decrescente dos numeros eh: %.0f, %.0f, %.0f\n", c, a, b);
                    }

                    else{

                        printf("A ordem decrescente dos numeros eh: %.0f, %.0f, %.0f\n", c, b, a);
                    }
                }

            }

        }

        else{

            if(a>b && a>c){

                printf("A ordem desejada eh: %.0f, %.0f, %.0f\n", b, a, c);

            }
            
            else{

                if(b>a && b>c){

                    printf("A ordem desejada eh: %.0f, %.0f, %.0f\n", a, b, c);
                }

                else{
                    printf("A ordem desejada eh: %.0f, %.0f, %.0f\n", a, c, b);
                }
            }

        }

        }

    return 0;
}