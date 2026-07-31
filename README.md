# 🔎 Binary Search

Implementação do algoritmo de **Busca Binária (Binary Search)** utilizando a linguagem **C**.

O programa procura um número dentro de uma lista ordenada, reduzindo progressivamente o intervalo de busca até encontrar o valor desejado ou determinar que ele não está presente na lista.

Além de realizar a busca, o programa exibe no terminal os elementos que ainda fazem parte do intervalo de busca a cada etapa.

---

## 🚀 Funcionalidades

* 🔢 Permite informar um número entre **1 e 100**
* 🔎 Realiza uma **Busca Binária**
* 📉 Reduz o intervalo de busca a cada tentativa
* 🖥️ Exibe no terminal os passos realizados pelo algoritmo
* ✅ Informa quando o número é encontrado
* ❌ Informa quando o número não está presente na lista

---

## 🛠️ Tecnologia utilizada

* ⚙️ **C**
* 📚 Biblioteca **stdio.h**

---

## 🧠 Como funciona

A Busca Binária funciona sobre uma **lista ordenada**.

Em vez de verificar cada elemento individualmente, o algoritmo verifica o elemento localizado no meio do intervalo atual.

Dependendo do valor procurado:

```text
Número procurado > elemento do meio
        ↓
Descarta a metade esquerda
```

ou:

```text
Número procurado < elemento do meio
        ↓
Descarta a metade direita
```

Esse processo continua até que o número seja encontrado ou não existam mais possibilidades.

### Exemplo

Considerando a lista:

```text
8  9  11  15  23  42  53  54  64  66
67 68  69 70 82 83 84 90 91 100
```

Se procurarmos pelo número `84`:

```text
Etapa 1
8 9 11 15 23 42 53 54 64 66 67 68 69 70 82 83 84 90 91 100
                         ↑
                        66
```

Como `84 > 66`, a primeira metade pode ser descartada.

```text
Etapa 2
67 68 69 70 82 83 84 90 91 100
             ↑
            82
```

Como `84 > 82`, o intervalo é reduzido novamente.

```text
Etapa 3
83 84 90 91 100
       ↑
      84
```

🎯 **Número encontrado!**

---

## 📊 Complexidade

A Busca Binária possui complexidade de tempo:

```text
O(log n)
```

Isso significa que o número de elementos analisados cresce de forma logarítmica conforme o tamanho da lista aumenta.

Para uma lista com `n` elementos, o algoritmo consegue descartar aproximadamente metade das possibilidades a cada etapa.

---

## 📂 Estrutura do projeto

```text
BinarySearch/
│
├── BinarySearch.c
└── README.md
```

---

## 🎯 Objetivo do projeto

Projeto desenvolvido para praticar:

* 🔎 Algoritmos de busca
* 🧠 Lógica de programação
* 📊 Complexidade de algoritmos
* 🔢 Manipulação de arrays
* 🔄 Estruturas de repetição
* ⚙️ Funções em C
* 💻 Entrada e saída de dados no terminal

Este projeto também foi utilizado para compreender, na prática, como a **Busca Binária reduz o espaço de busca a cada iteração**, tornando a pesquisa muito mais eficiente que uma busca linear em listas ordenadas.
