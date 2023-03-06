#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>                         

int main(){
    int option;
    int lena,lenb;
    int wsa,wsb;
    char stra[101],strb[101],strab[202];
    gets(stra);
    gets(strb);
    while(scanf("%d",&option)!= EOF){
        wsa = 0;
        wsb = 0;        
        if(option == 1){
            lena = strlen(stra);
            lenb = strlen(strb);
            printf("Reverse A: ");
            for(int i = lena-1;i>=0;i--){
                printf("%c",stra[i]);
            }
            printf("\n");
            printf("Reverse B: ");
            for(int i = lenb-1;i>=0;i--){
                printf("%c",strb[i]);
            }
            printf("\n");
        }else if(option == 2){
            lena = strlen(stra);
            lenb = strlen(strb);
            printf("The length of A: %d\n",lena);
            printf("The length of B: %d\n",lenb);
        }else if(option == 3){
            strcpy(strab,stra);
            strncat(strab,strb,sizeof(strab) - strlen(strab) - 1);
            printf("The string after concatenates: ");
            printf("%s\n",strab);
        }else if(option == 4){
            lena = strlen(stra);
            lenb = strlen(strb);
            if(strcmp(stra,strb)>0){
                printf("A is greater than B.\n");            
            }else if(strcmp(stra,strb)==0){
                printf("A is equal to B.\n");
            }else{
                printf("A is less than B.\n");
            }
        }else if(option == 5){
            lena = strlen(stra);
            for(int i=0;i<lena;i++){
                if(stra[i] ==' '){
                    wsa++;
                }
            }
            printf("Whitespace of A: %d\n",wsa);
        }else if(option == 6){
            lenb = strlen(strb);
            for(int i=0;i<lenb;i++){
                if(strb[i] ==' '){
                    wsb++;
                }
            }
            printf("Whitespace of B: %d\n",wsb);
        }else{
            printf("Error!\n");
        }
    }
}
