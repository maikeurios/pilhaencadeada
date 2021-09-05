#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

#include <iostream>
#include <stack>

using namespace std;

int main(){
	stack <string> cartas;
	
	cartas.push("Rei de Copas");
	cartas.push("Rei de Ouros");
	cartas.push("Rei de espadas");
	cartas.push("Rei de Paus");
	
	count << "Tamanho da Pilha: " << cartas.size() << "\n";
	
	count << "Cartas do Topo: " << cartas.topo() << "\n";
	
	cartas.pop();
	cartas.pop();
	
	count << "Nova carta do topo: " << cartas.top() << "\n";
	
	retun 0;
}


