#include <stdio.h>

int main()
{
    int oldal1;
    int oldal2;
    
    printf("Adja meg a teglalap egyik oldalat(cm):");
    scanf("%d", &oldal1);
    printf("Adja meg a teglalap masik oldalat(cm):");
    scanf("%d", &oldal2);
    
    int kerulet=2*(oldal1+oldal2);
    int terulet=oldal1*oldal2;
    
    printf("Kerulet: %d cm\n", kerulet);
    printf("Terulet: %d cm2\n", terulet);
    
    return 0;
}