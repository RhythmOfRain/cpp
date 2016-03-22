struct node{
    int data;
    node *next;
};
class list{
    public:
        list();
        list(int array[], int len);
        ~list();
        void print();
        bool insert(int pos, int num);
        bool  remove(int pos);
        int  getEleByKey(int num);
        int  getEleByPos(int pos);
        bool changeByPos(int pos, int num);
        bool changeByNum(int orginal, int newer);
    private:
        node *first;
        int length; 
};
