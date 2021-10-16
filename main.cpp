#include <iostream>
#include <fstream>
using namespace std;

int readFile(string path = "input.txt", int * arr = {}) {
    ifstream fin;
    fin.open(path);

    if (!fin.is_open())
        return {};

    int i = 0;
    while (!fin.eof()) {
        fin >> arr[i];
        ++i;
    }
    fin.close();
    return i;
}
void writeToFile(int arr[]) {

}


void A_B() {
    ifstream fin("input.txt");
    ofstream fot("output.txt");
    int arr[2];

    if (fin.is_open())
        for (size_t i = 0; !fin.eof(); ++i)
            fin >> arr[i];

    fot << arr[0] + arr[1];
    fin.close(); fot.close();
}

void sum() {
    ifstream fin("input.txt");
    ofstream fot("output.txt");
    long num = 0, result = 0;

    if (fin.is_open())
        fin >> num;

    for (long i = 0; i <= num; ++i)
        result += i;

    fot << result;
    fin.close(); fot.close();
}

void umnoshitb() {
    ifstream fin("input.txt");
    ofstream fot("output.txt");
    long num = 0;

    if (fin.is_open())
        fin >> num;

    fot << (num * num);
}



int main() {
    umnoshitb();

    int result;
    ifstream fin("output.txt");
    fin >> result;
    cout << result << endl;
    return 0;
}
