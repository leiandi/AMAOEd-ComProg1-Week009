//Name:Jameson M. Villaluna
//Date: December 8,2018
#include<cstdlib>
#include<iostream>


using namespace std;
int sum(int a, int b){
   return a+b;
}
int main(){
    for (int i = 9; i < 99; i++){
        
       cout << sum(i, 1) << "\t";
    }
    cout << endl;
    
    system("pause");
    return EXIT_SUCCESS;
}