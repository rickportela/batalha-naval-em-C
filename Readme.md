Projeto: Batalha Naval em C 

Olá! Esse projeto foi desenvolvido como parte de um desafio da disciplina de Linguagem de Programação (C) no curso de Análise e Desenvolvimento de Sistemas. O objetivo era criar uma versão simplificada do jogo Batalha Naval, focando principalmente no uso de matrizes e vetores, validações básicas e boas práticas de codificação.

O que esse programa faz?
Ele cria um tabuleiro 10x10 representado por uma matriz bidimensional
Permite posicionar dois navios de tamanho 3 no tabuleiro
O usuário escolhe as coordenadas iniciais e a orientação (horizontal ou vertical) de cada navio
O programa valida se a posição é válida (não sai do tabuleiro nem sobrepõe outro navio)
Exibe o tabuleiro de forma organizada no terminal, com números nas linhas e colunas

Tecnologias usadas: Linguagem C, Compilador GCC, Terminal/Console.
Exemplo de execução:

==== BATALHA NAVAL - POSICIONAR 2 NAVIOS ====

O tabuleiro tem tamanho 10x10 (linhas e colunas de 0 a 9).
Cada navio ocupa 3 espaços. Use H para horizontal e V para vertical.

== Posicionando o Navio 1 ==
```

Digite a linha inicial: 
2 Digite a coluna inicial: 
4 Digite a orientacao (H ou V): H
Navio 1 posicionado com sucesso!

```

== Posicionando o Navio 2 ==
```
Digite a linha inicial: 
5 Digite a coluna inicial: 
4 Digite a orientacao (H ou V): V
Navio 2 posicionado com sucesso!
```


```
==== TABULEIRO FINAL ====
  0 1 2 3 4 5 6 7 8 9 0 0 0 0 0 0 0 0 0 0
  0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 2 0 0
  0 0 0 0 0 0 2 0 0 0 3 3 3 3 0 0 3 0 0 0
  0 0 0 0 0 4 0 0 0 0 0 0 0 0 0 5 0 0 0 3
  0 0 0 0 0 0 0 6 0 0 0 3 0 0 0 7 0 0 0 8
  0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 9

```

O que aprendi com esse projeto ? Representação de matrizes em C, estruturação de funções para melhor organização do código, validação de posições dentro dos limites de uma matriz, reforço da lógica condicional e laços de repetição, boas práticas com nomes de variáveis e comentários. 
Autor: Rickson Portela
Estudante de Análise e Desenvolvimento de Sistemas
