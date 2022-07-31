#include <bits/stdc++.h>
#include "StacksQueue.h"

StacksQueue::StacksQueue(){ tam = 0;}
StacksQueue::~StacksQueue(){}
void StacksQueue::push(int n){
	s1.push(n);
	if(tam == 0) frente = s1.top();
	tam++;
}
void StacksQueue::pop(){
	while(!s1.empty()){
		s2.push(s1.top());
		s1.pop();
	}
	s2.pop();
	if(!s2.empty()) frente = s2.top();
	while(!s2.empty()){
		s1.push(s2.top());
		s2.pop();
	}
	if(tam > 0) tam --;
}
int StacksQueue::front(){
	return frente;
} 
int StacksQueue::size(){
	return tam;
} 
bool StacksQueue::empty(){
	return s1.empty();
}
void StacksQueue::printQueue(){
	while(!s1.empty()){
		cout << s1.top() << endl;
		s1.pop();
	}
}