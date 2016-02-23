#include "stack.h"
#include "queue.h"

#include<string>

using namespace std;

int main(void)
{
    stack_t pila;
    
    int a[10] = {1,2,3,4,5,6,7,8,9,0};
    
    int i = 0;
    
    while(i < 10){
        pila.push(a[i]);
        i++;
    }
    
    while(!pila.empty())
        cout << pila.pop() << endl;
}
