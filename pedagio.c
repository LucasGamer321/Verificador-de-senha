// atividade 3 da faculdade.
 #include <stdio.h>
 #include <string.h>
 
 int main(){
 	printf("CONTAGEM DO PEDAGIO SEMANAL!\n");
 	printf("");
 	int carros[7]; // vetor com a quantidade de veiculos que sera perguntado ao usuario
 	int i; // um contador para os dias da semana
 	int pico = 0; // um contador para achar o dia de pico
 	int soma = 0; // uma variavel soma, pra somar os valores que o usuario colocar
 	int maior = carros[0]; // uma variavel maior, para mostrar o valor do maior dia de pico.
 	char dias[7][30] = {"Segunda Feira", "Terca Feira", "Quarta Feira", "Quinta Feira", "Sexta Feira", "Sabado", "Domingo"};
 	// variavel char para printar o dia da semana em formato string e nao numeral.
 	for(i=0;i<7;i++){
 		printf("Qual foi o trafego de veiculos na %s:\n", dias[i]);
 		scanf("%d", &carros[i]);;
 		fflush(stdin);
 		printf("------------------------------------------------\n");
 	// laco de repeticao for para repetir a pergunta ao usuario 7 vezes.	
 		
 	}
	for(i=0;i<7;i++){
		printf("%s: %d carros \n", dias[i], carros[i]);
		soma += carros[i];
		
	//laco de repeticao para mostrar na tela o resultado das respostas 7 vezes e fazer a soma de todos eles.
	}
	for(i=0;i<7;i++){
		if (carros[i] > maior){
			maior = carros[i];
			pico = i;
		// laco de repeticao para identificar o dia da semana com maior numero de carros
		}
	}
	printf("------------------------------------------------\n");
	printf("total de Carros na semana: %d\n", soma); // mostrar o total de carros na semana toda
	printf("Maior pico de movimento: %s com  %d carros\n", dias[pico], maior);// mostrar o dia da semana com maior trafego.
	printf("");
	printf("Dados analisados e arquivados, ate semana que vem!!");
	
 	
 }