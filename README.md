Algoritmos de ordenação e busca

# Algoritmo de Busca Binária (Binary Search)

A busca binária (Binary Search) depende de uma lista ordenada porque, ao dividir a lista em duas metades, ela assume que todos os elementos à esquerda de um ponto central são menores e todos os elementos à direita são maiores. Isso permite que a busca seja feita de forma eficiente, descartando metade da lista a cada comparação.

Exemplo:

Lista: [1, 3, 5, 7, 9]

A busca começa no meio. Se o número procurado for 5, a busca verifica o meio e encontra o número. Se for menor, a busca vai para a metade esquerda, se for maior, vai para a metade direita. O que não aconteceria em uma lista desordenada.


# Interpolation Search VS Binary Search
O Interpolation Search é mais eficiente que o Binary Search quando os dados estão uniformemente distribuídos, pois estima melhor a posição do valor. O Binary Search é eficaz em qualquer distribuição.

# Exponential Search (Jump Search + Binary Search)
O Exponential Search começa verificando índices em saltos exponenciais (1, 2, 4, 8, 16, etc...) e, quando encontra um intervalo onde o elemento pode estar, usa o Binary Search para localizá-lo precisamente. Ele combina a rapidez do Jump Search com a precisão do Binary Search.

# Shell Sort e sequência de intervalos
A escolha da sequência de intervalos afeta a eficiência de algoritmos como o Shell Sort porque ela determina como os elementos serão comparados e trocados.

- Shell (original): Usa intervalos fixos, mas os maiores intervalos no início ajudam a mover os elementos mais distantes rapidamente para suas posições corretas.
- Knuth: Uma sequência mais eficiente que reduz gradualmente os intervalos de forma que o algoritmo tenha melhor desempenho para uma maior variedade de dados.
- Hibbard: Outra sequência que melhora a eficiência em comparação com a original, ao usar intervalos de potências de 2, o que reduz a quantidade de operações de troca.

# Merge Sort: "dividir para conquistar" 
O conceito de "dividir para conquistar" no algoritmo Merge Sort é simples: ele divide o problema em partes menores, resolve essas partes de forma independente e depois as combina para obter a solução final.

- Dividir: O algoritmo divide a lista ou array em duas metades.
- Conquistar: Recursivamente, ele ordena essas metades até que cada sublista tenha apenas um elemento (que já está ordenado por definição).
- Combinar: Depois, as sublistas ordenadas são combinadas de forma ordenada, até que toda a lista esteja ordenada.

# Bucket Sort 
O Bucket Sort funciona da seguinte maneira:

Distribuição: Os elementos são distribuídos em "baldes" (buckets) com base em seu valor. Cada balde representa um intervalo de valores.

Ordenação interna: Cada balde é ordenado individualmente, geralmente usando um algoritmo simples como a ordenação por inserção, já que os elementos dentro de cada balde tendem a ser poucos e próximos em valor.

Coleta: Os elementos de todos os baldes são recolhidos de volta, agora em ordem.

# Radix Sort (Bases)
O Radix Sort é um algoritmo de ordenação que lida com bases diferentes, como base 10 (decimal) e base 2 (binária), processando os números dígito por dígito, da menor para a maior ordem.

Aqui está como ele lida com bases diferentes de forma simples:

Divisão em dígitos: O algoritmo considera cada número como uma sequência de dígitos. No caso da base 10, os dígitos são de 0 a 9, enquanto na base 2 são 0 e 1.

Ordenação por cada dígito: O Radix Sort ordena os números inicialmente pelo dígito menos significativo (à direita). Em seguida, repete o processo para os próximos dígitos, até que todos os dígitos tenham sido considerados.

Uso de contagem: Para ordenar os números de acordo com cada dígito, o Radix Sort usa o Counting Sort, que é eficiente para números com um número limitado de dígitos, como 0-9 ou 0-1, dependendo da base.

# Tabela Comparativa de Tempos de Execução

Esta tabela compara os tempos de execução estimados para diferentes algoritmos de busca em listas de tamanhos variados.

| Tamanho da Lista (\( n \)) | Binary Search (\( O(\log n) \)) | Interpolation Search (\( O(\log \log n) \)) | Jump Search (\( O(\sqrt{n}) \)) | Exponential Search (\( O(\log n) \)) |
|----------------------------|----------------------------------|---------------------------------------------|----------------------------------|---------------------------------------|
| \( 10^2 \)                | 0.1 ms                          | 0.08 ms                                    | 0.5 ms                          | 0.1 ms                               |
| \( 10^3 \)                | 0.15 ms                         | 0.1 ms                                     | 1.6 ms                          | 0.15 ms                              |
| \( 10^4 \)                | 0.2 ms                          | 0.12 ms                                    | 5 ms                            | 0.2 ms                               |
| \( 10^5 \)                | 0.25 ms                         | 0.15 ms                                    | 16 ms                           | 0.25 ms                              |
| \( 10^6 \)                | 0.3 ms                          | 0.2 ms                                     | 50 ms                           | 0.3 ms                               |
| \( 10^7 \)                | 0.4 ms                          | 0.3 ms                                     | 160 ms                          | 0.4 ms                               |

### Notas:
1. **Binary Search** e **Exponential Search** são eficientes para listas ordenadas.
2. **Interpolation Search** funciona melhor com dados uniformemente distribuídos.
3. **Jump Search** tem um desempenho inferior em listas muito grandes.

# Análise de Complexidade de Algoritmos de Busca e Ordenação

Este repositório apresenta a análise de complexidade de tempo e espaço de diversos algoritmos de busca e ordenação.

## Algoritmos de Busca

| Algoritmo              | Melhor Tempo    | Médio Tempo       | Pior Tempo       | Espaço Extra                     |
|------------------------|-----------------|-------------------|------------------|-----------------------------------|
| **Binary Search**      | \( O(1) \)      | \( O(\log n) \)   | \( O(\log n) \)  | \( O(1) \) ou \( O(\log n) \) recursivo |
| **Interpolation Search** | \( O(1) \)    | \( O(\log \log n) \) | \( O(n) \)      | \( O(1) \)                       |
| **Jump Search**        | \( O(1) \)      | \( O(\sqrt{n}) \) | \( O(\sqrt{n}) \)| \( O(1) \)                       |
| **Exponential Search** | \( O(1) \)      | \( O(\log n) \)   | \( O(\log n) \)  | \( O(1) \)                       |
| **Ternary Search**     | \( O(1) \)      | \( O(\log n) \)   | \( O(\log n) \)  | \( O(1) \) ou \( O(\log n) \) recursivo |

## Algoritmos de Ordenação

| Algoritmo              | Melhor Tempo       | Médio Tempo       | Pior Tempo       | Espaço Extra |
|------------------------|--------------------|-------------------|------------------|--------------|
| **Shell Sort**         | \( O(n \log n) \)  | \( O(n^{3/2}) \)  | \( O(n^2) \)     | \( O(1) \)   |
| **Merge Sort**         | \( O(n \log n) \)  | \( O(n \log n) \) | \( O(n \log n) \)| \( O(n) \)   |
| **Selection Sort**     | \( O(n^2) \)       | \( O(n^2) \)      | \( O(n^2) \)     | \( O(1) \)   |
| **Bucket Sort**        | \( O(n + k) \)     | \( O(n + k) \)    | \( O(n^2) \)     | \( O(n + k) \) |
| **Radix Sort**         | \( O(d(n + k)) \)  | \( O(d(n + k)) \) | \( O(d(n + k)) \)| \( O(n + k) \) |
| **Quick Sort**         | \( O(n \log n) \)  | \( O(n \log n) \) | \( O(n^2) \)     | \( O(\log n) \) |

## Notas
- **\( n \)**: Número de elementos no array.
- **\( k \)**: Número de buckets ou base (no caso de Radix Sort).
- **\( d \)**: Número de dígitos no maior número (para Radix Sort).
ㅤ‎‎‎‎‎‎‎‎ㅤ
ㅤ‎‎‎‎‎‎‎‎ㅤ
ㅤ ‎‎‎‎‎‎‎‎ㅤ 
ㅤ‎‎‎‎‎‎‎‎ㅤ
# Algoritmos de Ordenação e Estabilidade

## Estabilidade em Algoritmos de Ordenação

Um algoritmo de ordenação é considerado **estável** se, ao ordenar elementos com valores iguais, a ordem original desses elementos for mantida.

## Análise dos Algoritmos

### 1. **Shell Sort**: Não estável
O **Shell Sort** não é estável porque pode alterar a ordem relativa de elementos iguais durante a ordenação, ao realizar trocas com intervalos variáveis.

**Exemplo**:
- Lista original: `[3a, 1, 3b]`
- Após ordenação com Shell Sort: `[1, 3b, 3a]`  
  (A ordem de `3a` e `3b` foi alterada.)

### 2. **Merge Sort**: Estável
O **Merge Sort** é estável, pois durante a fusão dos elementos, ele mantém a ordem dos elementos iguais conforme estavam originalmente.

**Exemplo**:
- Lista original: `[3a, 1, 3b]`
- Após ordenação com Merge Sort: `[1, 3a, 3b]`  
  (A ordem de `3a` e `3b` foi mantida.)

### 3. **Selection Sort**: Não estável
O **Selection Sort** não é estável, pois pode trocar a ordem de elementos iguais durante o processo de seleção.

**Exemplo**:
- Lista original: `[3a, 1, 3b]`
- Após ordenação com Selection Sort: `[1, 3b, 3a]`  
  (A ordem de `3a` e `3b` foi alterada.)

### 4. **Bucket Sort**: Estável
O **Bucket Sort** pode ser estável dependendo da implementação. Normalmente, ele utiliza um algoritmo estável (como o **Insertion Sort**) para ordenar os itens dentro dos "buckets".

**Exemplo**:
- Lista original: `[3a, 1, 3b]`
- Após ordenação com Bucket Sort: `[1, 3a, 3b]`  
  (A ordem de `3a` e `3b` foi mantida.)

### 5. **Radix Sort**: Estável
O **Radix Sort** é estável, pois ele processa cada dígito em ordem, mantendo a ordem relativa dos elementos durante cada passagem.

**Exemplo**:
- Lista original: `[3a, 1, 3b]`
- Após ordenação com Radix Sort: `[1, 3a, 3b]`  
  (A ordem de `3a` e `3b` foi mantida.)

### 6. **Quick Sort**: Não estável
O **Quick Sort** não é estável, pois ele pode alterar a ordem relativa de elementos iguais durante o processo de partição.

**Exemplo**:
- Lista original: `[3a, 1, 3b]`
- Após ordenação com Quick Sort: `[1, 3b, 3a]`  
  (A ordem de `3a` e `3b` foi alterada.)

## Resumo

- **Estáveis**: Merge Sort, Bucket Sort (geralmente), Radix Sort
- **Não Estáveis**: Shell Sort, Selection Sort, Quick Sort
ㅤ‎‎‎‎‎‎‎‎ㅤ
ㅤ‎‎‎‎‎‎‎‎ㅤ
ㅤ‎‎‎‎‎‎‎‎ㅤ
ㅤ‎‎‎‎‎‎‎‎ㅤ
![Gráfico](https://github.com/user-attachments/assets/c0a9ae79-37d0-427f-a022-449e81721612)

- **Merge Sort** e **Quick Sort** têm uma complexidade média de 
𝑂
(
𝑛
log
⁡
𝑛
)
O(nlogn), o que resulta em uma curva mais suave e eficiente para tamanhos grandes de vetor.

- **Selection Sort** tem uma complexidade 
𝑂
(
𝑛
^
2
)
, mostrando um crescimento muito mais acentuado à medida que o tamanho do vetor aumenta, tornando-o ineficiente para vetores grandes.

---

## Licença
Este projeto está licenciado sob a [MIT License](LICENSE).

