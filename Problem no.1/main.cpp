//Name:Jameson M. Villaluna
//Date: November 8,2018
#include<cstdlib>
#include<cstring>
#include<iostream>


using namespace std;
int qoutient(int a, int b){
   return a/b;
}
int main(){
    cout << "Enter the Six None Zero Integer:\n";
 int n[6];
    for (int i = 0; i < 6; i++){
        
       cout << "Number["<< i+1 <<"]:";
       cin >> n[i];
    }
    cout << "Number[1] devided by Number[2] = "<< qoutient(n[0],n[1]) << "\n";
    cout << "Number[3] devided by Number[4] = "<< qoutient(n[2],n[3]) << "\n";
    cout << "Number[5] devided by Number[6] = "<< qoutient(n[4],n[5]) << "\n";
    cout << endl;
    
    system("pause");
    return EXIT_SUCCESS;
}