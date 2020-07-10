#include <iostream>

using namespace std;

int main(){
    
    string s;
    cout << "Введите слово: ";
    cin >> s;

    int size = s.size();
    bool result = true;

    for(int i = 0; i < size / 2; i++)
        if(s[i] != s[size - i - 1]){
            result = false;
            break;
        };

    if(result){
        cout << "Слово " << s << " - палиндром" << endl;
    } else {
        cout << "Слово " << s << " - не палиндромом" << endl;
    };

    return(0);
};
