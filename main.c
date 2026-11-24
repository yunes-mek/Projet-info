#include <stdio.h>

int main() {
    
    int choix;  
    
    
    while(1) {
      
        printf("\n╔════════════════════╗\n");
        printf("║  CRASH TEST        ║\n");
        printf("╠════════════════════╣\n");
        printf("║ 1. Year Data       ║\n");
        printf("║ 2. Age Data        ║\n");
        printf("║ 3. Crash Data      ║\n");
        printf("║ 4. Quitter         ║\n");
        printf("╚════════════════════╝\n");
        printf("Choix: ");

        
        if (scanf("%d", &choix) != 1) {
           viderTampon();  
            printf("Veuillez entrer un chiffre valide.\n");
            continue;       
        }
        
        
        if(choix == 1) {
            YearData();  
        }
        else if(choix == 2) {
           AgeData();      
        }
        else if(choix == 3) {
            CrashData();      
        }
        else if(choix == 4) {
            printf("\nAu revoir!\n");
            break;           
        }
        else {
            printf("\nOption invalide\n");
        }
    }
