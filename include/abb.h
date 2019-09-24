/**
 * @file abb.h
 * @author Ranna Raabe
 */ 

#include <iostream>
using namespace std;

/**
 * Struct que representa o nó
 */
struct node
{
    int chave;
    int conteudo;
    struct node *esq;
    struct node *dir;      
};

class abb
{
private:
    /* data */
public:
    typedef struct node no;     // Definindo um nó do tipo node
    typedef no *pont_no;        // Definindo um ponteiro para o nó

    no *raiz;    // Nó raiz

    /**
     * Função de busca por um valor em árvore binária
     */ 
    void search(pont_no pt, int value, int f){
        if(pt != nullptr){
            if(pt->chave = value)
                f = 1;      // Chave encontrada e pt aponta para nó onde a chave se encontra
            else
            {
                if(value < pt->chave){
                    if(pt->esq = nullptr)
                        f = 2;      // Chave não encontrada e pt aponta para nó cuja árvore esquerda é vazia
                    else 
                        pt = pt->esq;
                } else {
                    if(pt->dir = nullptr)
                        f = 3;      // Chave não encontrada e pt aponta para nó cuja árvore direita é vazia
                    else
                        pt = pt->dir;
                }
                if(f < 1)
                    search(pt, value, f);
            } 
        } else 
            f = 0;      // Árvore vazia
    }

    /**
     * Função de inserção de um nó em uma árvore binária
     */ 
    void insert(pont_no pt, int value, int f){
        pont_no pt_aux = nullptr; 
        
        search(pt, value, f);   // Busca o valor na árvore, antes de adicionar
        if(f == 1)
            cout << "Valor já está na árvore";
        else {
            // ocupar(pt1);
            pt_aux->chave = value;
            pt_aux->esq = nullptr;
            pt_aux->dir = nullptr;

            if(f == 0)
                this->raiz = nullptr; // Árvore vazia
            else {
                if(f == 2)
                    pt->esq = pt_aux;
                else 
                    pt->dir = pt_aux;
            }
        }
            
    }

    /**
     * Função de remoção de um nó em uma árvore binária
     */ 
    void remove(pont_no pt, int value, int f){

    }
};