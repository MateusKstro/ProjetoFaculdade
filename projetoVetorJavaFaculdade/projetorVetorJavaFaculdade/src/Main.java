import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        String[] alunos = new String[25];

        int i;
        for(i = 0; i<25; i++){
            System.out.println("digite nome do aluno: ");

            alunos[i] = scanner.nextLine();
        }

    }
}

//Qual a dificuldade de inserir os novos alunos nessa estrutura de dados? Justifique a sua resposta direcionando aos conceitos de gerenciamento de memória.
//R: Adicionar mais 5 alunos, após o preenchimento total do vetor, causaria um problema de overflow, pois o vetor não possuí mais espaço livre. Os arrays, em geral, possuem tamanho fixo, que, se estourado, gera overflow.