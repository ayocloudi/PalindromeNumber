#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter an integer: ";
    cin >> num;//takes in an integer
//converting the integer to string
    string rev = to_string(num);
    string rev1 = "";
    string rev2 = to_string(num);
	//reverses the integer
    for(int i = rev.length()-1; i >= 0; i--){
      rev1 = rev1 + rev[i];
    }
//prints out the output and compares the reversed integer to the original.
    if(rev1==rev2 ){
        cout << num << " is a palindrome" << endl;
    }
    else{
        cout << num << " is not a palindrome" << endl;
    }

    return 0;
}