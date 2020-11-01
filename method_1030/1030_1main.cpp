#include <iostream>
#include "linked.h"

/*homework:
�b 7th ��Ƨ��U�A�i�H���@�Ӻ٬� linked ���l��Ƨ��A
���ոɧ� linked.cpp ���{���X �A
�ϥ��M 7th ��Ƨ��U��list.cpp ���欰�ۦP�C 
*/ 

/**
 *  �ͦ����w���ת� Linked List�C�`�I���e�w�]���� 0 �}�l���y�����C
 *
 *  @param  int:    �n�ͦ��� Linked List ������
 *  @return Node *: ���V�ͦ��� Linked List �Ĥ@�Ӹ`�I������
 **/
Linked::Linked(int len) {
    head = new Node();

    Node *node = head;

    for (int i = 0; i < len; i ++) {
        node->next = new Node();

        node = node->next;

        node->data = i;
        node->next = nullptr;
    }
} // List::List()

/**
 *  ���� Linked List�A
 *
 *  @param  Node *: ���V�n���� Linked List ������
 *  @return none.
 **/
Linked::~Linked() {
    while (head->next != nullptr) {
        Node *dummy = head;

        head = head->next;
        delete dummy;    // ����O����
    }

    delete head; // ����̫�@�Ӹ`�I
} // List::~List()
/**
 *  �b Linked List �̫᭱�A�W�[�@�Ӹ`�I�C
 *
 *  @param  Node *: ���V Linked List �Ĥ@�Ӹ`�I������
 *  @param  int:    �n�s�W���`�I��ƭ�
 *  @return none.
 *  @return none.
 **/
void Linked::append_data(int data) {
	Node *node=head; 
while (node->next != nullptr) {
 node = node->next; // ��̫�@�Ӹ`�I
 }

 node->next = new Node(); // �s�W�@�Ӹ`�I��
                          // Linked List ����
 node->next->data = data; // �]�w .data
 node->next->next = nullptr; // �]�w .next
	
	
} // Linked::append_data()

/**
 *  �b Linked List �̫᭱�A�W�[�@�Ӹ`�I�C
 *
 *  @param  Node *: ���V Linked List �Ĥ@�Ӹ`�I������
 *  @param  int:    �n�j�M���`�I��ƭ�
 *  @return bool:   true  ��Ʀs�b Linked List ��
 *                  false ��� '��' �s�b Linked List ��
 **/
bool Linked::contain_data(int data) {
    Node *node = head;
    bool found = false;

    while (node->next != nullptr) {
        node = node->next;

        if (node->data == data) {
            found = true;

            break;
        }
    }

    return found;
} // Linked::contain_data()

/**
 *  �b Linked List �̫᭱�A*����* �֦��S�w�Ȫ� *�Ĥ@��* �`�I�C
 *
 *  @param  Node *: ���V Linked List �Ĥ@�Ӹ`�I������
 *  @param  int:    �n�������`�I��ƭ�
 *  @return none.
 **/
void Linked::remove_data(int data) {
while (node->next != nullptr) {
    Node *dummy = node->next; // �Կ�`�I

    if (dummy->data == data) { // ���F�H
    node->next = dummy->next;
    delete dummy; // ����O����

    break;
 }

    node = node->next;
 }
	
} // Linked::remove_data()

/**
 *  �N Linked List ���e *�ɦL* (dump) �b�ù��W�C
 *
 *  @param  Node *: ���V Linked List �Ĥ@�Ӹ`�I������
 *  @return none.
 **/
void Linked::dump_list() {
    std::cout << "  Linked List:" << std::endl;
    std::cout << "    ";

    Node *node = head;

    while (node->next != nullptr) {
        node = node->next;

        std::cout << "[" << node->data << "] -> ";
    }

    std::cout << "$" << std::endl;
} // Linked::dump_list()
