//
// Created by rudri on 9/12/2020.
//

#ifndef POO2_UNIT2_WEEK_3_2020_2_MY_LINKED_LIST_H
#define POO2_UNIT2_WEEK_3_2020_2_MY_LINKED_LIST_H

namespace utec{


template <typename T>
struct Node{
    T data;
    Node<T>* next_n;

    Node(){ 
        next_n = nullptr;
        data = 0;
    }

    Node(T value){
        next_n = nullptr;
        data = value;
    }

    Node(Node<T>* node){
        this->next_n = node->next_n;
        this->data = node->data;
    }

    void killSelf();

    Node<T>* next(){
        return this->next_n;
    }

    T value(){
        return this->data;
    }

};


template <typename T>
class linked_list{

    Node<T>* head;

public:

    linked_list(){
        head = nullptr;
    }

    Node<T>* first() {
        return this->head;
        }
        
    Node<T>* back() {

        Node<T>* temp = this->head;
        
        while(temp->next_n != nullptr){
            temp = temp-> next_n;
        }

        return temp;
        }

    void push_back(T value) {
        Node<T>* temp = this->head;

        while(temp->next_n != nullptr){
            temp = temp->next_n;
        }

        Node<T>* temp2 = new Node<T>(value);

        temp->next_n = temp2;
        }
    
    T pop_back() {
        Node<T>* temp = this->head;

        while(temp->next_n->next_n != nullptr){
            temp = temp->next_n;
        }

        T value = temp->next_n->data;
        temp->next_n->killSelf();
        temp->next_n = nullptr;

        return value;
        }

    void push_front(T value) {
        Node<T>* temp = new Node<T>;
        temp->data = value;

        if (this->head == nullptr){
            temp = this->head;
        }
        else{
            temp->next_n = this->head;
            this->head = temp;
        }
    }

    T pop_front() {
        Node<T>* temp = this->head;

        this->head = this->head->next_n;
        temp->killSelf();
    }
    
    T insert(T value, int posicion) {
        if(this->size() == 1 || this->size() == 0){
            if(posicion == 0){
                push_front(value);
            }
            else{
                push_back(value);
            }
        }
        else
            {
            Node<T>* temp = this->head;
            for(int i = 0; i < posicion; i++){
                temp = temp->next_n;
            }

            Node<T>* tempNode = new Node<T>(value);

            tempNode->next_n = temp->next_n;
            temp->next_n = tempNode;
            }   
        }

    void remove(int posicion) {
        if(this->size() == 1 || this->size() == 0){
            if(posicion == 0){
                pop_front();
            }
            else{
                pop_back();
            }
        }
        else
        {
            Node<T>* temp = this->head;
            for(int i = 0; i < posicion; i++){
                temp = temp->next;
            }

            Node<T>* tempDelete = temp->next;
            
            temp->next = temp->next->next;
            tempDelete->killSelf();
        }
        
    }

    int size() {
        Node<T>* temp = this->head;
        int size = 0;
        while(temp != nullptr){
            size++;
            temp = temp->next_n;
        }
        return size;
    }
};

}

#endif //POO2_UNIT2_WEEK_3_2020_2_MY_LINKED_LIST_H
