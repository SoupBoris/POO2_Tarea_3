//
// Created by rudri on 9/12/2020.
//
#include <stdlib.h>
#include <initializer_list>
using namespace std;

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

    void killSelf(){
        delete this;
    }

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
    
    template <typename ...Packet>
    linked_list(Packet... package){
        ((this->push_back(package)), ...);
    }

    Node<T>* first() {
        return this->head;
        }
        
    Node<T>* back() {

        Node<T>* temp = this->head;

        if(this->head == nullptr){
            return nullptr;
        }
        else{
            while(temp->next_n != nullptr){
            temp = temp-> next_n;
            }
        return temp;
        }
    }

    void push_back(T value) {
        Node<T>* temp = new Node<T>;

        if(this->head == nullptr){
            temp->data = value;
            this->head = temp;
        }
        else{
            temp = this->head;
            while(temp->next_n != nullptr){
                temp = temp->next_n;
            }
            Node<T>* temp2 = new Node<T>(value);
            temp->next_n = temp2;
        }    
    }
    
    T pop_back() {
        Node<T>* temp = this->head;
        T value;
        
        if(temp == nullptr){
            return 0;
        }
        else if(temp->next_n == nullptr){
            value = temp->data;
            temp->killSelf();
            this->head = nullptr;
        }
        else{
            while(temp->next_n->next_n != nullptr){
            temp = temp->next_n;
            }
            value = temp->next_n->data;
            temp->next_n->killSelf();
            temp->next_n = nullptr;
        }
        return value;
    }

    void push_front(T value) {
        Node<T>* temp = new Node<T>;
        

        if (this->head == nullptr){
            this->head = temp;
            temp->data = value;
        }
        else{
            temp->next_n = this->head;
            temp->data = value;
            this->head = temp;
        }
    }

    T pop_front() {
        Node<T>* temp = this->head;
        T value;

        if(temp == nullptr){
            return 0;
        }
        else if(temp->next_n == nullptr){
            value = temp->data;
            temp->killSelf();
            this->head = nullptr;
        }
        else{
            value = temp->data;
            this->head = this->head->next_n;
            temp->killSelf();
        }

        return value;        
    }
    
    T insert(int posicion, T value) {
        if(this->head == nullptr || this->head->next_n == nullptr){
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
            for(int i = 0; i < posicion - 1; i++){
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
