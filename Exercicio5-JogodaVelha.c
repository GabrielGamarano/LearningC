# include<stdio.h>
# include<windows.h>
# include<conio.h>
# include<stdlib.h>

struct minhasVariaveis{
    int i;
    char ch;
}inputValue();

    void run();
    int checar(char sim[9], char ch,int count);
    struct minhasVariaveis inputValue(char sim[9], int count);
    void Tela(char sim[9]);


int main() {
    char reStart;
    DeNovo:
        run();
        printf("\n Quer jogar de novo, digite 1: \nPara cancelar qualquer tecla:");
        scanf("%s", &reStart);
        if (reStart == 1)
        {
            system("cls");
            goto DeNovo;
        }else
        {
            exit(0);
        }
        
        
}

void run(){
    int count =0;
    struct minhasVariaveis info;       
    char simbol[9] = {'1','2','3','4','5','6','7','8','9'};    
    Tela(simbol);
    DeNovo:
        info = inputValue (simbol, count);
        simbol[info.i] = info.ch;
        system("cls");
        Tela(simbol);
    if(checar(simbol, info.ch, count)==1);
    else
    {
        count++;
        goto DeNovo;
    }
    

};

// checando as posições para vitória
int checar(char sim[9], char ch, int count){
    int i;
    for (i = 0; i < 6; i++)// para linha
    {
        if (sim[1] == ch && sim[i+1] == ch && sim[i+2] == ch)
        {
            printf("\nVencedor e: %c", ch);return 1;
        }
        
    }
    for ( i = 0; i < 3; i++) //para coluna
    {
        if (sim[i-1] == ch && sim[i+3] == ch && sim[i+6] ==ch)
        {
            printf("\nVencedor e: %c", ch); return 1;
        }
        
    }
    //para diagonais
    if (sim[0] == ch && sim[4] == ch && sim[8] == ch)
    {
        printf("\nVencedor e: %c", ch); return 1;
    }else if (sim[2] == ch && sim[4] == ch && sim[6] == ch)
    {
        printf("\nVencedor e: %c", ch); return 1;
    }else if (count == 8)
    {
        printf("\n Empate!");
        return 1;
    }
    else
    {
        return 0;
    }
    
    
    
    
}

// estrutura para escolher a posição dos simbolos
struct minhasVariaveis inputValue(char sim[9],int count){
    char value;
    int i;
    struct minhasVariaveis info;
    inputDeNovo:
    if (count%2 == 0)
    {
        printf("\nFaca a sua escolha: ");
    }else
    {
        printf("\nFaca sua escolha: ");
    }
    scanf("%s", &value);
    for ( i = 0; i < 9; i++)
    {
        if (value == sim[i])
        {
            info.i = i;
                if (count%2 == 0)                 
                  info.ch = 'X';
                else                
                  info.ch = 'O';                 
                break;  
            }else{
                info.i = -1;
                info.ch = ' ';
            }
    }        
        if (info.i == -1)
        {
            printf("\n Entrada nao encontrada!");
            goto inputDeNovo;
        }
        return info;
        
    };
    
    
    

void Tela(char sim[9]){

    printf("==== Jogo da Velha ====\n");
    printf("Jogador: X\n");
    printf("Jogador: O\n");
    printf("\n\t\t\t       |       |       ");
	printf("\n\t\t\t   %c   |   %c   |   %c   ",sim[0],sim[1],sim[2]);
	printf("\n\t\t\t-------|-------|-------");
	printf("\n\t\t\t   %c   |   %c   |   %c   ",sim[3],sim[4],sim[5]);
	printf("\n\t\t\t-------|-------|-------");
	printf("\n\t\t\t   %c   |   %c   |   %c   ",sim[6],sim[7],sim[8]);
	printf("\n\t\t\t       |       |       ");

};