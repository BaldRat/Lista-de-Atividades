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

