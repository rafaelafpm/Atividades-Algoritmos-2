struct cadastro{
int x,y;
};
struct cadastro cadastro[2];
int i;
for(i=0;i<2;i++){
    printf("\nDigite seu DDD:\n");
    scanf("%d",&cadastro[i].x);
    fflush(stdin);
    printf("\nDigite o seu telefone:\n");
    scanf("%d",&cadastro[i].y);
    fflush(stdin);
}
for(i=0;i<2;i++){
        printf("\nTelefones cadastrados:%d\t %d\n",cadastro[i].x,cadastro[i].y);
}
return 0;
}

