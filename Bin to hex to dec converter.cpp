#include <bits/stdc++.h>
using namespace std;

void hexToBin(string hexa) {
    long int i = 0;
    cout<<" The Binary value: ";
    while (hexa[i]){
        switch (hexa[i]){
            case '0':
                cout << "0000";
                break;
            case '1':
                cout << "0001";
                break;
            case '2':
                cout << "0010";
                break;
            case '3':
                cout << "0011";
                break;
            case '4':
                cout << "0100";
                break;
            case '5':
                cout << "0101";
                break;
            case '6':
                cout << "0110";
                break;
            case '7':
                cout << "0111";
                break;
            case '8':
                cout << "1000";
                break;
            case '9':
                cout << "1001";
                break;
            case 'A':
            case 'a':
                cout << "1010";
                break;
            case 'B':
            case 'b':
                cout << "1011";
                break;
            case 'C':
            case 'c':
                cout << "1100";
                break;
            case 'D':
            case 'd':
                cout << "1101";
                break;
            case 'E':
            case 'e':
                cout << "1110";
                break;
            case 'F':
            case 'f':
                cout << "1111";
                break;
            default:
                cout << "please enter valid hexadecimal digit "<< hexa[i];
        }
        i++;
    }
    cout << "\n";
}

void binToHex() {
    int hex[1000];
    int i = 1, j = 0, rem, dec = 0, binaryNumber;
    cin>> binaryNumber;
    while (binaryNumber > 0) {
        rem = binaryNumber % 2;
        dec = dec + rem * i;
        i = i * 2;
        binaryNumber = binaryNumber / 10;
    }
    i = 0;
    while (dec != 0) {
        hex[i] = dec % 16;
        dec = dec / 16;
        i++;
    }
    
    cout<<" The hexadecimal value: ";
    for (j = i - 1; j >= 0; j--) {
        if (hex[j] > 9) 
        cout<<(char)(hex[j] + 55)<<"\n";
        else
        cout<<hex[j];
    }
}

void binToDec() {
    long long n;
    cin >> n;
    int dec = 0, i = 0, rem;
    
    while (n!=0) {
        rem = n % 10;
        n /= 10;
        dec += rem * pow(2, i);
        ++i;
    }
    cout << "The Decimal value: "; << dec << "\n";
}

void decToBin() {
    int n;
    cin >> n;
    long long bin = 0;
    int rem, i = 1;
    
    while (n!=0) {
        rem = n % 2;
        n /= 2;
        bin += rem * i;
        i *= 10;
    }
    cout<< "The Binary value: " << bin << "\n";
}

void decToHex() {
    int num, temp, i = 1, j, r;
    char hex[50];
    cin >> num;
    temp = num;
    while (temp != 0) {
        r = temp % 16;
        if (r < 10)
            hex[i++] = r + 48;
        else
            hex[i++] = r + 55;
        temp = temp / 16;
    }
    cout << "Hexadecimal value: ";
    for (j = i; j > 0; j--)
        cout << hex[j];
}

void hexToDec() {
    string hexVal;
    cin >> hexVal;
    int len = hexVal.size();
    int base = 1;
    int dec_val = 0;
    for (int i = len - 1; i >= 0; i--) {
        if (hexVal[i] >= '0' && hexVal[i] <= '9') {
            dec_val += (int(hexVal[i]) - 48) * base;
            base = base * 16;
        }
        else if (hexVal[i] >= 'A' && hexVal[i] <= 'F') {
            dec_val += (int(hexVal[i]) - 55) * base;
            base = base * 16;
        }
    }
    cout << "The decimal value: " << dec_val << "\n";
}

int main() {
    int input = 1;
    while(input) {
        cout << "\n1. Binary to Decimal\n2. Binary to hex \n3. decimal to Hex \n4. decimal to Binary \n5. hex to Decimal \n6. Hex to Binary \n";
        cin >> input;
        switch(input) {
            case 1:
                binToDec();
                break;
            case 2:
                binToHex();
                break;
            case 3:
                decToHex();
                break;
            case 4:
                decToBin();
                break;
            case 5:
                hexToDec();
                break;
            case 6: {
                string temp;
                cout << "Enter Hex number\n";
                cin >> temp;
                hexToBin(temp);
                break;
            }
            default:
                cout << "please enter valid input";  
        }
    }
}
