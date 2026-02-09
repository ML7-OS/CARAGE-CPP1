

#include <iostream>
#include <vector>
#include <array>
#include <math>
using namespace std;

void LA (vector<int> locate) {

    for (int i = 0; i < locate.size(); i++) {

        cout << locate.at(i);

        if (i  < locate.size()-1) {

            cout << ", ";

        }

    };

}

int main()
{
    array <int, 10> car = { 1, 0, 1, 0, 1, 0, 0, 1, 0, 0 };
    vector <int> loca;

    bool flag = false;
    int count = 0;

    for (int i = 0; i < car.size(); i++) {

        if (car.at(i) == 1) {

            flag = true;
            break;

        }

    }

    if (!flag) {

        cout << "There are no empty parks at this carage! ";
        return 1;

    }

    for (int i = 0; i < car.size(); i++) {

        if (car.at(i) == 1) {

            loca.push_back(i + 1);
            count++;
        }

    }

    cout << "[" << count << "] Available locations";

    cout << "\n=====================================\n";

    cout << "Park address [";
    LA(loca);
    cout << "]";
   
    int ask;

    int flag2 = false;

    cout << "\nWhere you wanna leave you car?: ";
    cin >> ask;

    for (int i = 0; i < loca.size(); i++) {

        if (ask == loca.at(i)) {

            flag2 = true;
            break;

        }

    }

    if (flag2) {

        car.at(ask - 1) = 0;
        cout << "Operation Is Done!";

    }
    else
        cout << "Something went wrong";

    

}
