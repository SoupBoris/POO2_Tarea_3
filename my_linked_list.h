//
// Created by rudri on 9/12/2020.
//

#ifndef POO2_UNIT2_WEEK_3_2020_2_MY_LINKED_LIST_H
#define POO2_UNIT2_WEEK_3_2020_2_MY_LINKED_LIST_H

namespace utec{


template <typename T>
class Node{
    T data;
    Node<T>* next;

public:

    void killSelf();

    Node<T>* next_node(){
        return this->next;
    }

    T value(){
        return this->data;
    }

};


template <typename T>
class linked_list{

    Node<T>* head;

public:

    Node<T>* first() {
        return this->head;
        }
        
    Node<T>* back() {

        Node<T>* temp = this->head;
        
        while(temp->next != nullptr){
            temp = temp-> next;
        }

        return temp;
        }

    void push_back(T value) {
        Node<T>* temp = this->head;

        while(temp->next != nullptr){
            temp = temp->next;
        }

        Node<T>* temp2 = new Node<T>(value);

        temp->next = temp2;
        }
    
    T pop_back() {
        Node<T>* temp = this->head;

        while(temp->next->next != nullptr){
            temp = temp->next;
        }

        T value = temp->next->data;
        temp->next->killSelf();
        temp->next = nullptr;

        return value;
        }
    
    T insert(T value, int posicion) {
        if(this->head == this->tail){
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
                temp = temp->next;
            }

            Node<T>* tempNode = new Node<T>(value);

            tempNode->next = temp->next;
            temp->next = tempNode;
            }   
        }

    void remove(int posicion) {
        if(this->head == this->tail){
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
            temp = temp->next;
        }
        return size;
    }
};

}

#endif //POO2_UNIT2_WEEK_3_2020_2_MY_LINKED_LIST_H
