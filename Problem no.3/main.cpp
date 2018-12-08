//Name:Jameson M. Villaluna
//Date: December 8,2018
#include<cstdlib>
#include<iostream>


using namespace std;
int sum(int a, int b){
   return a+b;
}
int main(){
   int First = 0,Second = 1,Third;
   int n;
   cout << "Enter the nth Fibonacci number: ";
   cin >> n;
   cout << Second << ", ";
    for (int i = 0; i < n-1; i++){
     
          Third = sum(First, Second);
          First = Second;
          Second = Third;
   
       cout << Third << ", ";
    }
    cout << endl;
    
    system("pause");
    return EXIT_SUCCESS;
}