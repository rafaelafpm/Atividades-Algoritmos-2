#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p;
    int i;
    
        p = (int*)malloc(5*sizeof(int));
    if (p == NULL) {
        printf("Erro ao alocar memória.\n");
    return 1;
    }
        printf (" Digite 5 numeros:\n");
    for (i=0;i<5;i++){
        scanf("%d", &p[i]);
    }
    for (i=0;i<5;i++){
        printf("%d\n",p[i]);
    }
        free(p);
}
