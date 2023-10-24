int *endereco;
int variavel = 90;
endereco = &variavel;
printf("Variavel: %d\n", variavel);
printf("Variavel: %d\n", *endereco);
printf("Endereço: %p\n", endereco);
printf("Endereço: %p\n", &variavel);
