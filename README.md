Algoritmos de ordenação e busca

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
‎‎‎‎‎‎‎‎ㅤ
‎‎‎‎‎‎‎‎ㅤ
‎‎‎‎‎‎‎‎ㅤ
‎‎‎‎‎‎‎‎ㅤ
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
‎‎‎‎‎‎‎‎ㅤ
‎‎‎‎‎‎‎‎ㅤ
 ‎‎‎‎‎‎‎‎ㅤ 
‎‎‎‎‎‎‎‎ㅤ
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
‎‎‎‎‎‎‎‎ㅤ
‎‎‎‎‎‎‎‎ㅤ
‎‎‎‎‎‎‎‎ㅤ
‎‎‎‎‎‎‎‎ㅤ
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

