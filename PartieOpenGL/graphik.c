#include "graphik.h"



int inputIndex = 0;
char input[100] = ""; 
int validation = 0;
int avancement = 0;
int borne1;
int borne2;

void myKey(int c) {
   switch (avancement)
   {
   case 0:
   if (c==13)
   {
       avancement++;
       c = 0;

   }
    break;
   
    case 1:
    switch (c) {
        case 8: 
        case 46: // Touche suppr
            if(inputIndex>0){
            input[--inputIndex] = '\0';}

            
            break;
        case 13://entrée
            validation = 1;
            avancement++;
            break;
        default:
            if (inputIndex < 99) {
                input[inputIndex++] = c; // Ajouter le caractère à l'entrée
                input[inputIndex] = '\0'; // Terminer la chaîne
                // printf("%s \n", input1);
            }
            break;
    }
    break;
    
   case 2:
   //bornes
   break;
   default:
    break;
   }
    
    
    
    
    
}
// -1----------> x
// |    
// |               
// |      0
// |
// |
// v y          1

void myDraw(void) {
    setcolor(0.0F, 0.0F, 0.0F);
    char avance[10];
    sprintf(avance, "%d", avancement);    
    outtextxy(0,0,avance);
    if (avancement==0)
    {
        outtextxy(-0.9F, 0.9F, "entrer pour formule");

    }
    else if (avancement==1)
    {
        outtextxy(-0.9F, 0.9F, input);

    }
    else if (avancement == 2)
    {
        outtextxy(-0.9F, 0.9F, input);
        outtextxy(-0.9, -0.7, "borne 1");
        outtextxy(0.6,-0.7, "borne 2" );
    }
    
    
    
    
}
