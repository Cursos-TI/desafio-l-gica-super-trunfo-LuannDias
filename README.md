# Instruções para executar o programa

Você pode executar o programa de duas formas:  
1 - Pelo terminal, digitando o comando para executar o arquivo `logicaSuperTrunfo.exe`.  
2 - Abrindo o código em um editor como o VSCode, compilando (buildando) e executando o programa diretamente.

---

# Exemplo de Teste

## Entrada De Dados

Foram usadas as seguintes informações para as cartas:

**Carta 1:**  
País: Brasil  
População: 212600000  
Área km²: 8510345.538  
PIB: 4101000000000.00  
Pontos turísticos: 50

**Carta 2:**  
País: Argentina  
População: 47300000  
Área km²: 2780000.00  
PIB: 640000000000.00  
Pontos turísticos: 30

No menu de comparação, foram escolhidos os atributos **População** e **PIB**.

---

## Sáida de Dados

```text
Carta 1:
Nome do país: Brasil
População: 212600000
Área: 8510346.00 km²
PIB: 4100999872512.00
Número de pontos turísticos: 50
Densidade demográfica: 24.98 hab/km²

Carta 2:
Nome do país: Argentina
População: 47300000
Área: 2780000.00 km²
PIB: 640000000000.00
Número de pontos turísticos: 30
Densidade demográfica: 17.01 hab/km²

### Resultado das comparações ###
Brasil versus Argentina
Comparação entre populações
Brasil = 212600000 e Argentina = 47300000 (Carta 1 vence!)
Comparação entre PIBs
Brasil = 4100999872512.00 e Argentina = 640000000000.00 (Carta 1 vence!)
Valor da soma dos atributos escolhidos da Carta 1: 4101212471296.00
Valor da soma dos atributos escolhidos da Carta 2: 640047316992.00
A Carta 1 (Brasil) venceu a comparação da soma dos atributos!
```


# Conteúdo que já estava no arquivo README:
# ⚠️ Importante!!!
Você pode escolher qualquer um dos desafios para desenvolver. Sinta-se à vontade para começar pelo desafio que mais lhe interessa.

# Desafio Super Trunfo - Países - Comparação das Cartas

Bem-vindo ao desafio "Super Trunfo - Países"! Neste projeto, você desenvolverá um sistema para comparar cartas baseadas em atributos de cidades. O desafio é dividido em três níveis: Novato, Aventureiro e Mestre. Cada nível adiciona novas funcionalidades e complexidades, permitindo um aprendizado progressivo.

## 🏅 Nível Novato

No nível Novato, você começará implementando a lógica básica de comparação entre cartas utilizando estruturas de decisão `if` e `if-else`.

### 🚩 Objetivos:
- **Cadastro de Cartas:** O sistema permitirá ao usuário cadastrar cartas de cidades, incluindo informações como estado, código da carta, nome da cidade, população, área, PIB e número de pontos turísticos.
- **Comparação de Cartas:** O sistema comparará os atributos de duas cartas e determinará a vencedora com base em uma propriedade específica (população, área, PIB, etc.), escolhida no código.
- **Exibição de Resultados:** Após a comparação, o sistema exibirá qual carta venceu com base na regra: maior valor vence, exceto em densidade populacional, onde o menor valor é o vencedor.

### 📥 Entrada de Dados:
- Os dados das cartas serão inseridos manualmente via terminal.
- O sistema solicitará interativamente as informações de cada carta.

### 📤 Saída de Dados:
- Após o cadastro, as propriedades da cidade serão exibidas de forma organizada.
- O resultado da comparação será mostrado, indicando a carta vencedora.

---

## 🏅 Nível Aventureiro

No nível Aventureiro, você expandirá o sistema para incluir a comparação aninhada e a criação de um menu interativo usando `switch`.

### 🆕 Diferença em relação ao Nível Novato:
- **Menu Interativo:** O usuário poderá escolher diferentes atributos para comparação através de um menu.
- **Comparação Aninhada:** Implementação de lógica de comparação mais complexa, utilizando estruturas aninhadas para tomar decisões baseadas em múltiplos atributos.

### 🚩 Novas Funcionalidades:
- **Cadastro de Cartas:** Similar ao nível Novato, com a adição de comparação de múltiplos atributos.
- **Menu Interativo:** Uso de `switch` para criar um menu que permite ao jogador escolher os atributos a serem comparados.
- **Exibição de Resultados:** O sistema exibirá o resultado da comparação, indicando qual carta venceu e qual atributo foi utilizado.

---

## 🏅 Nível Mestre

No nível Mestre, o desafio se intensifica com a adição de funcionalidades avançadas, como menus dinâmicos e lógica de decisão complexa com operadores ternários.

### 🆕 Diferença em relação ao Nível Aventureiro:
- **Escolha de Dois Atributos:** O usuário poderá escolher dois atributos para comparação entre as cartas.
- **Lógica de Decisão Complexa:** Implementação de estruturas de decisão aninhadas e encadeadas, além do uso de operadores ternários para determinar a carta vencedora.
- **Menus Dinâmicos:** Os menus serão dinâmicos, permitindo uma navegação fluida entre as opções de comparação.

### 🚩 Novas Funcionalidades:
- **Comparação de Dois Atributos:** O sistema comparará dois atributos simultaneamente para determinar a carta vencedora.
- **Lógica Avançada:** Uso de operadores ternários e lógica aninhada para lidar com comparações complexas.
- **Empates:** O sistema será capaz de lidar com empates, exibindo mensagens apropriadas.
- **Exibição de Resultados:** Exibição dos resultados das comparações de forma clara e interativa.

---

## 📋 Requisitos Funcionais Comuns
- **Cadastro de Cartas:** O sistema deve permitir o cadastro de cartas com as informações necessárias.
- **Comparação:** O sistema deve comparar as cartas e determinar a vencedora com base nas regras estabelecidas.
- **Exibição de Resultados:** Os resultados devem ser exibidos de forma clara, indicando a carta vencedora.

## 📌 Requisitos Não Funcionais Comuns
- **Usabilidade:** A interface do usuário deve ser simples e intuitiva.
- **Performance:** O sistema deve executar operações sem atrasos perceptíveis.
- **Manutenibilidade:** O código deve ser bem estruturado e documentado.
- **Confiabilidade:** O sistema deve ser robusto e capaz de lidar com entradas inválidas de forma adequada.

---

Boa sorte no desenvolvimento deste desafio e aproveite para aprender e se divertir enquanto progride pelos níveis!

Equipe de Ensino - MateCheck
