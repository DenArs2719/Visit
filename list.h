#ifndef LIST_H
#define LIST_H

template<typename T>
class List
{
    class Node
    {
       public:

        T dane; ///type d (data type)
        Node* next; ///pointer for next element in our list

        Node(T D ,Node* n = nullptr) ///constructor for Node
        {
            dane = D;
            next = n;
        }
    };

    Node* head; ///head of our element
    int ilosc;  /// size of elements

public:

    List(); ///constructor
    ~List(); ///destructor

    void insert(T d); ///function to insert element
    T pop(); /// function to pop element
    void showList() const ; ///show our list
    int getSize()  const; /// return our size of list

};

template<typename T>
List<T>::List()
{
    head = nullptr; /// inicialization head
    ilosc = 0;/// inicialization ilosc
}

template<typename T>
List<T>::~List()
{
    Node *killer;
    while(head!=nullptr)
    {
        killer = head;
        head = head->next;
        ilosc--;
        delete killer;

    }
}


template<typename T>
void List<T>::insert(T d)
{
    Node *new_element = new Node(d);
    if(head == nullptr)
    {
        head = new_element;
    }
    else if(head->dane > new_element->dane)
    {
        new_element->next = head;
        head = new_element;
    }
    else
    {
        Node *succ = head;
        Node *pred = nullptr;

        while(succ!=nullptr && succ->dane < d) /// instruction of stop
        {
            pred = succ;
            succ = succ->next;
        }

        pred->next = new_element;
        new_element->next = succ;
    }
    ilosc++;
}

template<typename T>
T List<T>::pop()
{
    Node *killer;
    T rezult;

    if(head!=nullptr)
    {
        killer = head;
        rezult = killer->dane;
        head = head->next;
        ilosc--;
        return rezult;
    }
    else
    {
        throw logic_error("List is empty ");
    }

}

template<typename T>
void List<T>::showList() const
{
    Node *running = head;

    while(running!=nullptr)
    {
        cout<<running->dane<<"->";
        running = running->next;
    }
}

template<typename T>
int List<T>::getSize() const
{
    return ilosc;
}




#endif // LIST_H
