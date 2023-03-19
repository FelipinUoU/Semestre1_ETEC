Algoritmo "Média"
//  
//  
// 
//  
// Descrição   :
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 18/03/2022
Var
// Seção de Declarações das variáveis 

nomealuno:caractere
tri1,tri2,tri3,tri4,media:real

Inicio
// Seção de Comandos, procedimento, funções, operadores, ...

escreva("Insira seu nome: ")
leia(nomealuno)
escreva("Digite Nota do 1º trimestre: ")
leia(tri1)
escreva("Digite Nota do 2º trimestre: ")
leia(tri2)
escreva("Digite Nota do 3º trimestre: ")
leia(tri3)
escreva("Digite Nota do 4º trimestre: ")
leia(tri4)
media := (tri1+tri2+tri3+tri4) /4
escreva("TOMA SEU ",nomealuno, " QUE FICOU MEIA HORA NUM NEGOCIO BASICO", media)


Fimalgoritmo