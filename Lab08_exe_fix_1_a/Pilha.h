#ifndef PILHA_H
#define PILHA_H

typedef char Item; //using Item = char;

class Pilha {
private:
	size_t tam; //tamanho m�ximo
	Item *itens; //armazenamento de itens
	size_t topo; //�ndice do item no topo

	void Expandir(); //expande a capacidade da pilha

public:
	Pilha();
	Pilha(size_t tam); //construtor
	~Pilha();

	bool Vazia() const; //verifica se est� vazia

	void Empilhar(const Item&); //adiciona item na pilha
	bool Desempilhar(Item&); //remove item da pilha

};
#endif