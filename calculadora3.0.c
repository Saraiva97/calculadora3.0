#include <stdio.h>
#include <stdlib.h>


int main(void){

int nm1, nm2, opc , res,presul;

int ta1,ta2,ta3,ta4,ta5,ta6,ta7,ta8,ta9,ta10;
int ta11,ta12,ta13,ta14,ta15,ta16,ta17,ta18,ta19,ta20;
int valor,percent,percentd, percentm ,percentl;


printf("\n");
printf("\t>>>>>>>>>>> SARAIVA <<<<<<<<<<<<< \n");
printf("\n");
printf("\t>>>>>>>> CALCULADORA 3.0 <<<<<<<< \n");

printf("\n\t[1] -- para somar \n\t");
printf("[2] -- para subtrair \n\t");
printf("[3] -- para multiplicar \n\t");
printf("[4] -- para dividir \n\t");
printf("[5] -- para potencia 2 \n\t");
printf("[6] -- para potencia 3 \n\t");
printf("[7] -- para tabuada \n\t");
printf("[8] -- para porcentagem \n\t");
printf("\n");
printf("\t digite sua opcao \n\t");

scanf("\t %i",&opc);

switch(opc){
    case 1:
    printf("\t digite o primeiro numero: \n");
    scanf(" \t %i",&nm1);

    printf("\t digite o segundo numero: \n");
    scanf("\t %i",&nm2);
    res=nm1+nm2;

    printf("\t %i + %i = %i \n",nm1,nm2,res);
    printf("\t resultado final %i",res);
    break;

    case 2:
    printf("\t digite o primeiro numero: \n");
    scanf(" \t %i",&nm1);

    printf("\t digite o segundo numero: \n");
    scanf("\t %i",&nm2);

    res=nm1-nm2;

    printf("\t %i - %i = %i \n",nm1,nm2,res);
    printf("\t resultado final %i",res);

    break;

    case 3:
    printf("\t digite o primeiro numero: \n");
    scanf(" \t %i",&nm1);

    printf("\t digite o segundo numero: \n");
    scanf("\t %i",&nm2);

    res=nm1*nm2;

    printf("\t %i x %i = %i \n",nm1,nm2,res);
    printf("\t resultado final %i",res);
    break;

    case 4:
    printf("\t digite o primeiro numero: \n");
    scanf(" \t %i",&nm1);

    printf("\t digite o segundo numero: \n");
    scanf("\t %i",&nm2);

    res=nm1/nm2;

    printf("\t %i / %i = %i \n",nm1,nm2,res);
    printf("\t resultado final %i",res);
    break;

    case 5:
    printf("\t digite o numero que sera elevado ao quadrado: \n");
    scanf(" \t %i",&nm1);

    res=nm1*nm1;

    printf("\t %i x %i = %i \n",nm1,nm1,res);
    printf("\t resultado final %i",res);
    break;

    case 6:
    printf("\t digite o numero que sera elevado ao cubo: \n");
    scanf(" \t %i",&nm1);

    presul=nm1*nm1;
    res=presul*nm1;

    printf("\t %i x %i = %i x %i = %i \n",nm1,nm1,presul,nm1,res);
    printf("\t resultado final %i",res);
    break;

    case 7:
    printf("\t digite o numero que sera feito a tabuada : \n");
    scanf(" \t %i",&nm1);

    ta1=nm1*1;
    ta2=nm1*2;
    ta3=nm1*3;
    ta4=nm1*4;
    ta5=nm1*5;
    ta6=nm1*6;
    ta7=nm1*7;
    ta8=nm1*8;
    ta9=nm1*9;
    ta10=nm1*10;
    ta11=nm1*11;
    ta12=nm1*12;
    ta13=nm1*13;
    ta14=nm1*14;
    ta15=nm1*15;
    ta16=nm1*16;
    ta17=nm1*17;
    ta18=nm1*18;
    ta19=nm1*19;
    ta20=nm1*20;

    printf("\t%i x 1 = %i \t%i x 11 = %i \n",nm1,ta1,nm1,ta11);
    printf("\t%i x 2 = %i \t%i x 12 = %i \n",nm1,ta2,nm1,ta12);
    printf("\t%i x 3 = %i \t%i x 13 = %i \n",nm1,ta3,nm1,ta13);
    printf("\t%i x 4 = %i \t%i x 14 = %i \n",nm1,ta4,nm1,ta14);
    printf("\t%i x 5 = %i \t%i x 15 = %i \n",nm1,ta5,nm1,ta15);
    printf("\t%i x 6 = %i \t%i x 16 = %i \n",nm1,ta6,nm1,ta16);
    printf("\t%i x 7 = %i \t%i x 17 = %i \n",nm1,ta7,nm1,ta17);
    printf("\t%i x 8 = %i \t%i x 18 = %i \n",nm1,ta8,nm1,ta18);
    printf("\t%i x 9 = %i \t%i x 19 = %i \n",nm1,ta9,nm1,ta19);
    printf("\t%i x 10 = %i \t%i x 20 = %i \n",nm1,ta10,nm1,ta20);
    printf("\n");

    printf("\t>>>>>>>>>>> SARAIVA <<<<<<<<<<<<< \n");

    break;

    case 8:
        printf("\t digite o percentual\n");
        scanf("%i",&percent);

        printf("\t digite o valor total \n");
        scanf("%i",&valor);

        percentd=valor*percent/100;


        printf("\t %i porcento de %i = %i\n",percent,valor,percentd);

        percentm=valor+percentd;
        percentl=valor-percentd;

        printf("\t %i + %i %= %i\n",valor,percentd,percentm);
        printf("\t %i - %i%= %i\n",valor,percentd,percentl);

    break;




}

return  0;

}
