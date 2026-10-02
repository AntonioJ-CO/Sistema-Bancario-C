#include <stdio.h>

int main() {

    float banco_inicial, deposito, saldo_conta, sacar, saldo;
    float cdb = 0, td = 0, fi = 0, crpt = 0, rcdb, rtd, rfi, rcrpt;
    int opcao, i, renda, inv1, inv2, esaques, erendas, sinv;

    printf("Iniciando sistema...\n");
    for(i = 0; i < 999999999; i++){
    }

    printf("================================\n");
    printf("         BANCO GERALDO         \n");
    printf("================================\n");
    printf("Digite um saldo para a sua conta: ");
    scanf("%f", &saldo_conta);

    do {
        printf("\n\n================================\n");
        printf("         BANCO GERALDO         \n");
        printf("================================\n");
        printf("1: Verificar saldo da conta.\n");
        printf("2: Depositar dinheiro.\n");
        printf("3: Sacar dinheiro.\n");
        printf("4: Investimentos.\n");
        printf("0: Sair.\n");
        printf("================================\n");
        printf("Escolha uma opcao: ");
        scanf("%i", &opcao);

        printf("\033[H\033[J");
        

        switch (opcao) {
            case 1:
                printf("\033[H\033[J");
                printf("================================\n");
                printf("         SALDO DA CONTA         \n");
                printf("================================\n");
                printf("\nSeu saldo da conta é %.2f\n", saldo_conta);
                printf("\nDeseja ver o saldo de Investimentos?\nDigite (1 - Sim / 0 - Não): ");
                scanf("%i", &sinv);
                if(sinv == 1){
                    printf("\033[H\033[J");
                    printf("\n================================\n");
                    printf("        SALDO INVESTIMENTOS         \n");
                    printf("================================\n");
                    printf("RENDAS FIXAS\n\n");
                    printf("1: CDB = %.2f\n", cdb);
                    printf("2: Tesouro Direto = %.2f\n\n", td);
                    printf("RENDAS VARIÁVEIS\n\n");
                    printf("3: Fundos Imobiliários = %.2f\n", fi);
                    printf("4: Criptomoedas = %.2f\n", crpt);
                }
                else if(sinv == 0) {
                }else{
                    printf("Digite uma opcao disponivel!");
                }
            break;
            case 2:
                printf("\033[H\033[J");
                printf("================================\n");
                printf("       DEPOSITAR DINHEIRO       \n");
                printf("================================\n");
                printf("Quanto deseja depositar: ");
                scanf("%f", &deposito);
                if (deposito <= 0){
                    printf("Digite um valor válido!");
                }else{
                    saldo_conta = saldo_conta + deposito;
                    printf("Depositado o valor de %.2f", deposito);
                }
            break;
            case 3:
                printf("\033[H\033[J");
                printf("================================\n");
                printf("         SACAR DINHEIRO         \n");
                printf("================================\n");
                printf("1: Sacar da conta.\n");
                printf("2: Sacar dos investimentos.\n");
                printf("Escolha um: ");
                scanf("%i", &esaques);
                if(esaques == 1){
                    printf("Quanto dejesa sacar? ");
                    scanf("%f", &sacar);

                    if (sacar < 10 || sacar > 1000) {
                        printf("Digite um valor entre 10 e 1000! ");
                    }else if(sacar > 0 && sacar <= saldo_conta ){
                        saldo_conta = saldo_conta - sacar;
                        printf("Saque de  %.2f concluído!", sacar);
                    }else{
                        printf("Saldo insuficiente.");
                    }
                }else if(esaques == 2){
                    printf("RENDAS FIXAS\n\n");
                    printf("1: CDB.\n");
                    printf("2: Tesouro Direto.\n\n");
                    printf("RENDAS VARIÁVEIS\n\n");
                    printf("3: Fundos Imobiliários.\n");
                    printf("4: Criptomoedas.\n");
                    printf("Escolha um: ");
                    scanf("%i", &erendas);

                        switch (erendas){
                            case 1:
                                printf("CDB = %.2f\n", cdb);
                                printf("Quanto deseja retirar do CDB? ");
                                scanf("%f", &rcdb);
                                if (rcdb > 0 && rcdb <= cdb) {
                                    cdb = cdb - rcdb;
                                    saldo_conta = saldo_conta + rcdb;
                                    printf("Seu CDB atual: %.2f", cdb);
                                } else {
                                    printf("Valor indisponivel para resgate no CDB.");
                                }
                            break;
                            case 2:
                                printf("TD = %.2f\n", td);
                                printf("Quanto deseja retirar do TD? ");
                                scanf("%f", &rtd);
                                if (rtd > 0 && rtd <= td) {
                                    td = td - rtd;
                                    saldo_conta = saldo_conta + rtd;
                                    printf("Seu TD atual: %.2f", td);
                                } else {
                                    printf("Valor indisponivel para resgate no Tesouro Direto.");
                                }
                            break;
                            case 3:
                                printf("FI = %.2f\n", fi);
                                printf("Quanto deseja retirar dos FI? ");
                                scanf("%f", &rfi);
                                if (rfi > 0 && rfi <= fi) {
                                    fi = fi - rfi;
                                    saldo_conta = saldo_conta + rfi;
                                    printf("Seu FI atual: %.2f", fi);
                                } else {
                                    printf("Valor indisponivel para resgate nos Fundos Imobiliarios.");
                                }
                            break;
                            case 4:
                                printf("CRPT = %.2f\n", crpt);
                                printf("Quanto deseja retirar da Criptomoeda? ");
                                scanf("%f", &rcrpt);
                                if (rcrpt > 0 && rcrpt <= crpt) {
                                    crpt = crpt - rcrpt;
                                    saldo_conta = saldo_conta + rcrpt;
                                    printf("Seu CRPT atual: %.2f", crpt);
                                } else {
                                    printf("Valor indisponivel para resgate em Criptomoedas.");
                                }
                            break;
                        }
                }else{
                    printf("Digite uma opcao disponivel!");
                }

            break;
            case 4:
                printf("\033[H\033[J");
                printf("================================\n");
                printf("         INVESTIMENTOS         \n");
                printf("================================\n");
                printf("1: Reda Fixa.\n");
                printf("2: Renda Variável.\n");
                printf("Escolha um: ");
                scanf("%i", &renda);
                
                if (renda == 1){
                    printf("\n1: CDB.\n");
                    printf("2: Tesouro direto.\n");
                    printf("Escolha um: ");
                    scanf("%i", &inv1);
                        if (inv1 == 1){
                            printf("\nQuanto deseja investir no CDB: ");
                            scanf("%f", &deposito);
                            if(deposito > 0 && deposito <= saldo_conta ){
                                saldo_conta = saldo_conta - deposito;
                                cdb = cdb + deposito;
                                printf("Foi Investido $%.2f no CDB", deposito);
                            }else{
                                printf("Saldo insuficiente.");
                            }
                        }else if (inv1 == 2){
                            printf("\nQuanto deseja investir no TD: ");
                            scanf("%f", &deposito);
                            if(deposito > 0 && deposito <= saldo_conta ){
                                saldo_conta = saldo_conta - deposito;
                                td = td + deposito;
                                printf("Foi Investido $%.2f no TD", deposito);
                            }else{
                                printf("Saldo insuficiente.");
                            }
                        }else{
                            printf("Digite uma opcao disponivel!");
                        }
                }else if(renda == 2){
                    printf("\n1: Fundos imobiliarios.\n");
                    printf("2: Criptomoedas.\n");
                    printf("Escolha um: ");
                    scanf("%i", &inv2);
                        if (inv2 == 1){
                            printf("\nQuanto deseja investir no FI: ");
                            scanf("%f", &deposito);
                            if(deposito > 0 && deposito <= saldo_conta ){
                                saldo_conta = saldo_conta - deposito;
                                fi = fi + deposito;
                                printf("Foi Investido $%.2f no FI", deposito);
                            }else{
                                printf("Saldo insuficiente.");
                            }
                        }else if (inv2 == 2){
                            printf("\nQuanto deseja investir no CRPT: ");
                            scanf("%f", &deposito);
                            if(deposito > 0 && deposito <= saldo_conta ){
                                saldo_conta = saldo_conta - deposito;
                                crpt = crpt + deposito;
                                printf("Foi Investido $%.2f no CRPT", deposito);
                            }else{
                                printf("Saldo insuficiente.");
                            }                   
                        }else{
                            printf("Digite uma opcao disponivel!");
                        }
                }else{
                    printf("Digite uma opcao disponivel!");
                }
            break;
            case 0:
                printf("\n\n================================\n");
                printf("         BANCO GERALDO         \n");
                printf("================================\n");
                printf("\nEncerrando sistema...");
            break;
            default:
                printf("Digite uma opcao disponivel!");
            break;
        }
    }
    while(opcao != 0);
}