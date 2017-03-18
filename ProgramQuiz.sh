#!/bin/bash	
clear
echo "Bem vindo(a) ao GEARS-QUIZ!"
sleep 3
clear

resposta(){
read resposta;
}
exerci1(){
echo "1) Em quantas camadas de divite o modelo OSI?"
echo ""
echo "a) 12 camadas."
echo "b) 5 camadas."
echo "c) 3 camadas."
echo "d) 7 camadas."
resposta;
clear
}

exerci2() {
echo "2) Qual a ordem correta das camadas?"
echo ""
echo "a) Sessao, apresentacao,fisica,enlace,rede,transporte e aplicacao."
echo "b) Apresentacao, aplicacao, sessao, rede, transporte, enlace e fisica"
echo "c) Aplicacao, apresentacao, sessao, transporte, rede, enfisica"
echo "d) Fisica, enlace, rede, transporte, sessao,apresentacao e aplicacao"
resposta;
clear
}

exerci1;
exerci2;
