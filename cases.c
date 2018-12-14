#include <stdio.h>

void main (){

    char opcao, op_case5, menu_case5 = 's', menu = 's';
    int num, i, g, num_case5[1];
    float temp[3], soma, media;

    while(menu == 's'){
        printf("Digite um numero conrrepondente do menu \n");
        printf("1 - If   2 - If/Else   3 - While  4 - For  5 - switch\n");
        scanf("%c", &opcao);

        switch(opcao){
    case '1':

        printf("Digite um numero negativos ou positivos:\n");
        scanf("%d", &num);
        if(num > 0 ){
            printf("O numero e positivo\n");
            }else{
            printf("O numero e negativo\n");
            }
        printf("Volta ao menu?\n");
        scanf("%d", &menu);
        fflush(stdin);
        break;

    case '2':
        printf("if/else");
        printf("\nVolta ao menu?\n");
        scanf("%d", &menu);
        fflush(stdin);
        break;

    case '3':
        printf("while");
        printf("\nVolta ao menu?\n");
        scanf("%d", &menu);
        fflush(stdin);
        break;

    case '4':

        for(i=0;i<=2;i++){
            printf("Digite a 3 numero e volta a media\n");
            scanf("%f", &temp[i]);
            fflush(stdin);
            soma=soma+temp[i];
        }
        media=soma/3;
        printf("\nMedia dos numeros %10.1f\n", media);
        printf("\nVolta ao menu?\n");
        scanf("%d", &menu);
        fflush(stdin);
        break;

    case '5':
        while(menu_case5=='s'){
            for(g=0;g<=1;g++){
                printf("Digite a 2 numero \n");
                scanf("%f", &num_case5[g]);
                fflush(stdin);
            }
            printf("digite uma operacao matematica  + - * /\n");
            scanf("%c", &op_case5);
            fflush(stdin);
            switch(op_case5){
            case '+':
                printf("\n+\n");
                printf("\nDeseja fazer uma nova operacao?\n");
                scanf("%c", &menu_case5);
                fflush(stdin);
                break;
            case '-':
                printf("\n-\n");
                printf("\nDeseja fazer uma nova operacao?\n");
                scanf("%c", &menu_case5);
                fflush(stdin);
                break;
            case '*':
                printf("\n*\n");
                printf("\nDeseja fazer uma nova operacao?\n");
                scanf("%c", &menu_case5);
                fflush(stdin);
                break;
            case '/':
                printf("\n/\n");
                printf("\nDeseja fazer uma nova operacao?\n");
                scanf("%c", &menu_case5);
                fflush(stdin);
                break;
            default :
                printf("\nOpcao errada - digite uma opcao correta");
                printf("\nDeseja fazer uma nova operacao?\n");
                scanf("%c", &menu_case5);
                fflush(stdin);
                break;
        }




        }


    default:
        printf("Operador invalido!n");
        printf("\nVolta ao menu?\n");
        scanf("%d", &menu);
        fflush(stdin);
        break;

        }
    }


}
