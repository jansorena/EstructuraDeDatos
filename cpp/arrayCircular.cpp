#include <iostream>
using namespace std;

int n = 10;
int array[10];
int front, rear = 0;

void enqueue(int number){
	array[rear] = number;
	rear = (rear + 1) % n;
}

int dequeue(){
	int number = array[front];
	front = (front + 1) % n;
	return number;
}

int main(){

	enqueue(1);
	enqueue(2);
	enqueue(3);
	dequeue();
	enqueue(4);
	enqueue(5);
	enqueue(6);
	dequeue();
	dequeue();

	int i = front;
	while(i != rear){
		cout << array[i] << " ";
		i = (i + 1) % n;
	}
	
	return 0;
}