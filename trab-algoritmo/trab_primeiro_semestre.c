#include <stdio.h>
main()
{
	int cargo,ano;         //coloquei pro usuario escolher o ano atual (ja que a porcetagem a mais é baseada em anos de empresa)
	float salario,temposervico,p10,p9,p8,p11,p12,p7;     //eu escolhi colocar uma variavel para cada porcentagem exigida, ficando mais facil na hora de distribuir
	char nome[30],outro[30];
	
	printf("Digite seu nome: ");
	gets(nome);
	printf("\nDigite seu salario atual: ");
	scanf("%f",&salario);
	printf("\nDigite o ano de admissao na empresa: ");
	scanf("%f",&temposervico);
	printf("\nDigite o ano atual: ");
	scanf("%d",&ano);
	printf("\nDigite 1,2 ou 3 para escolher o cargo:\n\n1-Gerente\n2-Engenheiro\n3-Analista de TI\n4-Outro\n\nNumero: ");  //numerei cada cargo, tornando mais facil para fazer o switch
	scanf("%d",&cargo);
	temposervico=ano-temposervico;   //calculei o tempo de servico, para usar no "if"
	
	p10=(salario*0.1)+salario;
	p9=(salario*0.09)+salario;
	p8=(salario*0.08)+salario;            //calculei todas as porcentagens sobre o salario q o usuario colocou
	p11=(salario*0.11)+salario;
	p12=(salario*0.12)+salario;
	p7=(salario*0.07)+salario;
	
	//no switch eu escolhi utilizar o if e else if, para as 3 opcoes q cada cargo dava (porcentagens)
	switch(cargo){
		case 1: if (temposervico >=5)
		printf("\nNome:%s \nSalario antigo:%.2f \nNovo salario:%.2f \nDiferenca entre o salario antigo:%.2f",nome,salario,p10,p10-salario);
		else if (temposervico >=3 && temposervico <5)
		printf("\nNome:%s \nSalario antigo:%.2f \nNovo salario:%.2f \nDiferenca entre o salario antigo:%.2f",nome,salario,p9,p9-salario);
		else if (temposervico <3)
		printf("\nNome:%s \nSalario antigo:%.2f \nNovo salario:%.2f \nDiferenca entre o salario antigo:%.2f",nome,salario,p8,p8-salario);
		break;
		case 2: if (temposervico>=5) 
		printf("\nNome:%s \nSalario antigo:%.2f \nNovo salario:%.2f \nDiferenca entre o salario antigo:%.2f",nome,salario,p11,p11-salario);
		else if (temposervico >=3 && temposervico <5)
		printf("\nNome:%s \nSalario antigo:%.2f \nNovo salario:%.2f \nDiferenca entre o salario antigo:%.2f",nome,salario,p10,p10-salario);
		else if (temposervico <3)
		printf("\nNome:%s \nSalario antigo:%.2f \nNovo salario:%.2f \nDiferenca entre o salario antigo:%.2f",nome,salario,p9,p9-salario);
		break;
		case 3: if (temposervico>=5) 
		printf("\nNome:%s \nSalario antigo:%.2f \nNovo salario:%.2f \nDiferenca entre o salario antigo:%.2f",nome,salario,p12,p12-salario);
		else if (temposervico >=3 && temposervico <5)
		printf("\nNome:%s \nSalario antigo:%.2f \nNovo salario:%.2f \nDiferenca entre o salario antigo:%.2f",nome,salario,p11,p11-salario);
		else if (temposervico <3)
		printf("\nNome:%s \nSalario antigo:%.2f \nNovo salario:%.2f \nDiferenca entre o salario antigo:%.2f",nome,salario,p10,p10-salario);
		break;
		case 4: printf("\nDigite seu cargo atual: ");   //aqui eu achei mais interessante perguntar o cargo do usuario, caso o cargo dele n seja nenhum dos exigidos no trabalho
				scanf("%s",outro);   //usei o "scanf" pq nao consegui utilizar o "gets", caso fosse o numero 4, utilizando o "gets" ele n pedia pro usuario entrar com o cargo, entao utilizei o scanf
			printf("\nNome:%s \nSalario antigo:%.2f \nNovo salario:%.2f \nDiferenca entre o salario antigo:%.2f",nome,salario,p7,p7-salario);
			break;
	}
	//acredito que tenha formas melhores de fazer esse programa, mas usei só o que eu tenho conhecimento no momento
	// Gabriel Henrique Massuia de Queiroz
		
}   

//meu primeiro trabalho em linguagem C, feito no primeiro semestre de algoritmo e utilizando apenas o que foi passado em sala de aula.
