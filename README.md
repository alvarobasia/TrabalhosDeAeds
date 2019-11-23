TrabalhosDeAeds
===============
EXERCÍCIO 1
------------
- Na notação usual de expressões aritméticas, os operadores são escritos entre os operandos;
  por isso, a notação é chamada infixada. Na notação pós-fixada, ou polonesa, os operadores
  são escritos depois dos operandos. A Tabela 1 apresenta exemplos de expressões infixadas
  e correspondentes expressões pós-fixadas.
  
  | **Expressão Infixada**                       | **Expressão Pós-fixada**      |
  |:--------------------------------------------|------------------------------|
  | (A + B ∗ C)                                  | ABC ∗ +                       |
  | (A ∗ (B + C)/D − E)                          | ABC + ∗D/E−                   |
  | (A + B ∗ (C − D ∗ (E − F ) − G ∗ H) − I ∗ 3) | ABCDEF − ∗ − GH ∗ − ∗ +I3 ∗ − |
  | (A + B ∗ C/D ∗ E − F )                       | ABC ∗ D/E ∗ +F −              |
  | (A + B + C ∗ D − E ∗ F ∗ G)                  | AB + CD ∗ +EF ∗ G ∗ −         |
  | (A + (B − (C + (D − (E + F )))))             | ABCDEF + − + −+               |
  | (A ∗ (B + (C ∗ (D + (E ∗ (F + G))))))        | ABCDEF G + ∗ + ∗ + ∗          |

`Table 1: Exemplo de tradução de uma expressão infixada para pós-fixada.`<BR>
**Observe que os operandos (A, B, C, etc.) aparecem na mesma ordem na expressão infixada
e na correspondente expressão pós-fixada. Veja também que a notação pós-fixada dispensa
parênteses e regras de precedência entre operadores (como a precedência de ∗ sobre + por
exemplo), que são indispensáveis na notação infixada.
O problema aqui é traduzir para notação pós-fixada a expressão infixada armazenada em
uma string. Para simplificar, assuma que:**
- a expressão na string é válida e contém apenas caracteres ASCII, parênteses, e os
símbolos das quatro operações aritméticas;
- todas as operações têm dois operandos, em particular − e +;
- os nomes das variáveis têm apenas uma letra cada;
- a expressão da string está embrulhada em um par de parênteses, ou seja, o primeiro
caractere é “(” e os dois últimos são “)” e “\0”.
O algoritmo lê a expressão string caractere por caractere e use uma pilha para fazer
a tradução. Todo parêntese esquerdo é colocado na pilha. Ao encontrar um parêntese 
direito, o algoritmo desempilha tudo até encontrar um parêntese esquerdo, que também é
desempilhado. Ao encontrar um + ou um −, o algoritmo desempilha tudo até encontrar
um parêntese esquerdo, que não é desempilhado. Ao encontrar um ∗ ou um /, o algoritmo
desempilha tudo até encontrar um parêntese esquerdo ou um + ou um −. Constantes e
variáveis são transferidos diretamente da expressão contida na string para a expressão
pós-fixada. Diante disso, construa uma função que traduza uma expressão infixada de uma
string para uma expressão pós-fixada utilizando uma pilha.
