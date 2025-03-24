#include "graphik.h"



int inputIndex = 0;
char input[100] = ""; 
int input2Index = 0;
char input2[100] = "Borne 2"; 
int input1Index = 0;
char input1[100] = "Borne 1"; 
int avancement = 0;


float xformule = -0.9;
float yformule = 0.4;
float xborne1 = -0.9;
float yborne1 = -0.7;
float xborne2 = 0.6;
float yborne2 = -0.7;
float xtitre = -1;
float ytitre = 0.8;


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
            avancement++;
            break;
            case 27:
            avancement--;
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
    case 2://borne 1
    switch (c) {
        case 27:
        avancement--;
        break;
        case 8: 
        case 46: // Touche suppr
            if(input1Index>0){
            input1[--input1Index] = '\0';}

            
            break;
        case 13://entrée
            avancement++;
            break;
        default:
            if (input1Index < 99) {
                input1[input1Index++] = c; // Ajouter le caractère à l'entrée
                input1[input1Index] = '\0'; // Terminer la chaîne
                // printf("%s \n", input11);
            }
            break;
    }break;

   case 3: //borne 2
   switch (c) {
    case 27:
        avancement--;
        break;
    case 8: 
    case 46: // Touche suppr
        if(input2Index>0){
        input2[--input2Index] = '\0';}

        
        break;
    case 13://entrée
        avancement++;
        break;
    default:
        if (input2Index < 99) {
            input2[input2Index++] = c; // Ajouter le caractère à l'entrée
            input2[input2Index] = '\0'; // Terminer la chaîne
            // printf("%s \n", input21);
        }
        break;
}
   break;
   default:
    break;
    case 4:
    switch (c)
    {
        case 27:
        avancement--;
        break;
    default:
        break;
    }
   }
    
    
    
    
    
}
// -1;1  ----------> x  1;1
// |    
// |               
// |      0
// |
// |
// v y          
// -1;-1                1;-1

void myDraw(void) {
    setcolor(0.0F, 0.0F, 0.0F);
    char avance[10];
    sprintf(avance, "%d", avancement);    
    outtextxy(0.9,-0.8,avance);
    outtextxy(-0.9, 0.9, "enter pour avancer, esc pour revenir");
    if (avancement==0)
    {
        outtextxy(xtitre,ytitre, "TITRE 1");

    }
    else if (avancement==1)
    {           outtextxy(xtitre,ytitre, "Entrez la formule");

        outtextxy(xformule,yformule, input);

    }
    else if (avancement == 2 ) // borne 1
    {           outtextxy(xtitre,ytitre, "Entrez la 1ere borne");

        outtextxy(xformule,yformule, input);
        outtextxy(xborne1, yborne1, input1);
        outtextxy(xborne2, yborne2, input2);
    }else if (avancement == 3 ) // borne 2
    {
        outtextxy(xformule,yformule, input);
        outtextxy(xtitre,ytitre, "Entrez la 2eme borne");
        outtextxy(xborne1, yborne1, input1);
        outtextxy(xborne2, yborne2, input2);
        
        

    }
    
    
    
    
}
