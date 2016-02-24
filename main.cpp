#include "stack.h"
#include "queue.h"
#include "vector_t.hpp"

#include<string>

using namespace std;

int main(void)
{
    stack_t pila;
    queue_t cola;
    
    cout << "************ PILA ************" << endl;
    
    int a[10] = {1,2,3,4,5,6,7,8,9,0};
    
    int i = 0;
    
    while(i < 10){
        pila.push(a[i]);
        i++;
    }
    
    while(!pila.empty())
        cout << pila.pop() << " ";
        
    cout << endl;
    cout << endl;
    
    cout << "************ COLA ************" << endl;
    
    i = 0;
    
    while(i < 10){
        cola.put(a[i]);
        i++;
    }
    
    while(!cola.empty())
        cout << cola.get() << " ";
        
    cout << endl;
    cout << endl;
    
    cout << "************ VECTOR ************" << endl;
    
    vector_t A(10);
	vector_t B;
	B.resize(10);
	for(int i = 0; i < 10; i++){
		A[i] = i;
		B[i] = i + 5;
	}

	B[3] = 25;

	for(int i = 0; i < 10; i++){
		cout << A[i] << " | ";
	}

	cout << endl;

	for(int i = 0; i < 10; i++){
		cout << B[i] << " | ";
	}

	cout << endl;
	
	return 0;
    
    
}
