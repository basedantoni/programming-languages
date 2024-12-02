#ifndef NODE_H
#define NODE_H

template <typename T>
class Node {
public:
	Node(T v);	
	~Node();

	T getValue() const;
	void setValue(T v);
	Node<T>* getNext() const
	void setNext(Node<T>* node);

private:
	T value;
	Node<T>* next;
};

template <typename T>
Node<T>::Node(T v) : value(v), next(nullptr) {}

template <typename T>
Node<T>::~Node() {}

template <typename T>
T Node<T>::getValue() const { return value; }

template <typename T>
void Node<T>::setValue(T v) { value = v; }

template <typename T>
Node<T>* Node<T>::getNext() const { return next; }

template <typename T>
void Node<T>::setNext(Node<T>* node) { next = node; }

#endif
