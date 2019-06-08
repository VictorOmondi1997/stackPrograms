/*Implementing Stack*/

#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

class Stack{
    int stk[5],
        top;
    public:
        Stack(){
            top=-1;
        }
        void push(int x){
            if(top>4){
                cout<< "Stack Over Flow";
                return;
            }
            stk[++top]=x;
            cout << "Inserted: " << x;
        }
        void pop(){
            if(top<0){
                cout << "Stack Under Flow!";
                return;
            }
            cout << "Deleted: " << stk[top--];
        }
        void display(){
            if(top<0){
                cout << "Stack empty";
                return;
            }
            for(int i=top; i>=0; i--){
                cout<< stk[i];
            }
        }
};

int main()
{
    int ch;
    Stack st;

    while(true){
        cout<< "\n1.push \t\t2.pop \n3.display \t4.exit\n\nEnter Your Choice: ";
        cin>>ch;
        switch(ch){
            case 1:
                cout<< "\nEnter the element: ";
                cin>>ch;
                st.push(ch);
                break;
            case 2:
                st.pop();
                break;
            case 3:
                st.display();
            break;
            case 4: exit(0);
        }
    }
    return 0;
}
