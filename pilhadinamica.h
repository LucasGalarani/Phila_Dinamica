// Pilha Dinâmica = Dynamic Stack

typedef int TipoItem;

struct No //Node
{
    TipoItem valor;
    No* proximo;
};

class pilhadinamica{
    private:
    No* NoTopo;

    public:
    pilhadinamica(); //construtor //dynamic stack
    ~pilhadinamica(); //destrutor
    bool estavazio(); //isempty
    bool estacheio(); //tem memoria //isfull
    void inserir(TipoItem item); //push
    TipoItem remover(); //pop
    void imprimir(); //print


};