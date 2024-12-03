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

### Sugestões de Melhorias
Contribuições são bem-vindas! Se você encontrar algum erro ou quiser sugerir otimizações, sinta-se à vontade para abrir uma _issue_ ou enviar um _pull request_.

---

## Licença
Este projeto está licenciado sob a [MIT License](LICENSE).

