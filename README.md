# Banco Geraldo - Sistema Bancário e de Investimentos em C

Este é um projeto de terminal em C que simula um caixa eletrônico integrado a uma plataforma de investimentos (Home Broker). Desenvolvi esse programa para praticar e consolidar toda a base de lógica de programação.

## 🕹️ O que o programa faz:

* **Depósito Inicial:** O sistema começa simulando o carregamento e pede para você definir o saldo inicial da conta.
* **Menu Principal:** Um menu que roda em loop e permite navegar por todas as opções sem o programa fechar.
* **Consulta de Saldo:** Mostra o saldo da conta corrente e pergunta se você quer ver o saldo detalhado dos seus investimentos. Se você digitar 0 (Não), ele volta para o menu principal de forma limpa.
* **Depósitos:** Adiciona dinheiro ao saldo principal (com trava para não aceitar valores menores ou iguais a zero).
* **Saques:** Permite sacar da conta corrente (com limite de R\$ 10 a R\$ 1000 por operação).
* **Painel de Investimentos:** Permite aplicar o dinheiro da conta em Renda Fixa (CDB e Tesouro Direto) ou Renda Variável (Fundos Imobiliários e Criptomoedas).
* **Resgate Seguro:** Dá para tirar o dinheiro dos investimentos e mandar de volta para a conta corrente. O sistema tem uma trava que não deixa você resgatar mais dinheiro do que tem aplicado naquele ativo.

## 🛠️ O que utilizei de lógica no código:

* **Variáveis (`int` e `float`):** Para controlar as opções dos menus e garantir a precisão dos valores em dinheiro.
* **Formatação (`%.2f`):** Para exibir todos os valores financeiros com duas casas decimais.
* **Condicionais (`if / else if / else`):** Para criar todas as regras de segurança do banco.
* **Menus (`switch-case` com `default`):** Para criar os menus e sub-menus, tratando erros caso o usuário digite uma opção inválida.
* **Loops (`for` e `do-while`):** O `for` serve para simular a inicialização do sistema e o `do-while` mantém o jogo rodando até que o usuário decida sair digitando 0.
* **Operadores Lógicos (`&&` e `||`):** Usados para validar as regras do banco (ex: checar se o saque está entre R\$ 10 e R\$ 1000, e se há saldo suficiente na conta).
* **Limpeza de Tela:** Usei o comando universal `printf("\033[H\033[J");` para limpar o terminal no VS Code sem quebrar os acentos ou dar erro no Linux/Windows.

## 💻 Como rodar o projeto:

1. Abra o terminal na pasta onde você salvou o arquivo do código.
2. Compile o arquivo usando o GCC com o comando:
   ```bash
   gcc banco_geraldo.c -o banco
   ```
3. Execute o programa no seu terminal:
   ```bash
   ./banco
   ```
*(Se estiver utilizando o Dev-C++, basta abrir o arquivo `banco_geraldo.c` e pressionar a tecla **F11** para compilar e rodar automaticamente).*
