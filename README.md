# Sistema de Fila Dinâmica para Caminhões 🚚

Este é um projeto desenvolvido em **C++** que implementa uma estrutura de dados de **Fila Dinâmica** (FIFO - *First In, First Out*) para o gerenciamento de caminhões. O sistema permite controlar a entrada, pesagem, consulta e remoção de veículos de forma dinâmica na memória.

---

## 🚀 Funcionalidades do Sistema

O menu interativo do sistema oferece as seguintes opções:

1. **[A] Inserir Caminhão:** Adiciona um novo caminhão à fila informando a placa.
2. **[B] Remover Caminhão:** Remove o próximo caminhão da fila (atendimento/saída).
3. **[C] Listar Fila:** Exibe todos os caminhões atualmente na fila e suas posições.
4. **[D] Pesar Caminhão:** Atribui um peso ao primeiro caminhão da fila.
5. **[E] Ver Próximo Caminhão:** Mostra a placa do próximo caminhão a ser atendido.
6. **[F] Verificar se está vazia:** Confere o status atual da fila.

---

## 📂 Estrutura de Arquivos

O projeto está modularizado da seguinte forma:

* **`main.cpp`:** Arquivo principal contendo a função `main()` e o loop do menu interativo.
* **`FilaDin.cpp`:** Implementação dos métodos da classe `fila` (lógica de inserção, remoção, listagem, etc.).
* **`FilaDin.h`:** Arquivo de cabeçalho contendo a definição das estruturas (`caminhao`, `no`) e da classe `fila`.

---

## 🛠️ Tecnologias e Requisitos

* **Linguagem:** C++
* **Bibliotecas utilizadas:** `<iostream>`, `<string>`, `<bits/stdc++.h>`, `<conio2.h>` (dependência de ambiente para funções de console como `getch()` e `system("cls")`).
* **Compilador:** Um compilador C++ moderno compatível com C++11 ou superior (como MinGW/GCC no Windows).

---

## 💻 Como Compilar e Executar

Como o projeto utiliza a biblioteca `<conio2.h>` (comum em ambientes Windows com Dev-C++ ou Code::Blocks), recomenda-se abri-lo diretamente em uma IDE compatível:

1. Baixe ou clone este repositório.
2. Abra o projeto na sua IDE de preferência (ex: **Dev-C++** ou **Code::Blocks**).
3. Certifique-se de que os três arquivos (`main.cpp`, `FilaDin.cpp` e `FilaDin.h`) estão no mesmo projeto/diretório.
4. Compile e execute o programa.

---

## 👨‍💻 Autor

Feito por Guilherme Gust Carlis.
Sinta-se à vontade para contribuir com melhorias!