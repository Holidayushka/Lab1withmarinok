#include <iostream>
#include <string>
using namespace std;
class Atbash {
private:
    string line;
public:
    Atbash() {
        string emptystr("");
        line = emptystr;
    }
    Atbash(string new_line) {
        line = new_line;
    }
    ~Atbash() {
        string emptystr("");
        line = emptystr;
    }
    void set_line() {
        cout << "Enter text without spaces and punctuation marks: ";
        cin >> line;
    }
    string get_line() {
        return line;
    }
    void encryprion_table() {
        cout << "a b c d e f g h i j k l m" << endl;
        cout << "z y x w v u t s r q p o n" << endl;
    }
    string encryto() {
        for (int i = 0; i < line.length(); i++) {
            switch (line[i]) {
            case 'a': 
                line[i] = 'z';
                break;
            case 'b': 
                line[i] = 'y';
                break;
            case 'c': 
                line[i] = 'x';
                break;
            case 'd': 
                line[i] = 'w';
                break;
            case 'e': 
                line[i] = 'v';
                break;
            case 'f': 
                line[i] = 'u';
                break;
            case 'g': 
                line[i] = 't';
                break;
            case 'h': 
                line[i] = 's';
                break;
            case 'i': 
                line[i] = 'r';
                break;
            case 'j': 
                line[i] = 'q';
                break;
            case 'k': 
                line[i] = 'p';
                break;
            case 'l': 
                line[i] = 'o';
                break;
            case 'm': 
                line[i] = 'n';
                break;
            case 'n': 
                line[i] = 'm';
                break;
            case 'o': 
                line[i] = 'l';
                break;
            case 'p': 
                line[i] = 'k';
                break;
            case 'q': 
                line[i] = 'j';
                break;
            case 'r': 
                line[i] = 'i';
                break;
            case 's': 
                line[i] = 'h';
                break;
            case 't': 
                line[i] = 'g';
                break;
            case 'u': 
                line[i] = 'f';
                break;
            case 'v': 
                line[i] = 'e';
                break;
            case 'w': 
                line[i] = 'd';
                break;
            case 'x': 
                line[i] = 'c';
                break;
            case 'y': 
                line[i] = 'b';
                break;
            case 'z': 
                line[i] = 'a';
                break;
            }  
        }
        return line;
    }
};

int main()
{
    Atbash first_line("someline");
    first_line.set_line();
    cout << first_line.get_line() << endl;
    first_line.encryto();
    cout << first_line.get_line() << endl;
    first_line.encryprion_table();
    Atbash empty_line();
}