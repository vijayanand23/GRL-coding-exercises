#include <bits/stdc++.h>
using namespace std;

class DataSet {
public:
    float distance;
    float time;

public:
    DataSet() {
        distance = 0;
        time = 0;
    }
    DataSet(int distance, int time) {
        distance = distance;
        time = time;
    }
};

class ShowResults {
public:
    static void print(DataSet inputs[]) {
        for(int i = 0; i < 10; i++) {
            cout << inputs[i].distance << " " << inputs[i].time << endl;
        }
    }
};

class Measure {
public:
    static void calculate(DataSet inputs[]) {
        float speed[10] = {0};
        for(int i = 0; i < 10; i++) {
            speed[i] = inputs[i].distance / inputs[i].time;
        }
        ofstream myfile;
        myfile.open ("example.csv");
        myfile << "distance, time, speed, \n";
        for(int i = 0; i < 2; i++) {
            myfile << inputs[i].distance << ","<< inputs[i].time << ","<<  speed[i] << ","<< "\n";
        }
        myfile.close();
    }
};

class UserInput {
public:
    DataSet inputs[10];

    void getInput() {
        float distance, time;
        for(int i = 0; i < 10; i++) {
            cout << "Enter Distance: ";
            cin >> distance;
            cout << "Enter Time: ";
            cin >> time;
            inputs[i].distance = distance;
            inputs[i].time = time;
        }
        Measure::calculate(inputs);
        ShowResults::print(inputs);
    }
};

int main() {
    UserInput one1;
    one1.getInput();
    return 0;
}
