/* /1
#include <iostream>
using namespace std;
int main(){
    float celcius;
    cout << "enter temperatrue in celcius";
    cin >> celcius;

    float farheneit = ((9.0 / 5.0) * celcius) + 32;
    cout << "temperature in farheneit is "<< farheneit << endl;

    return 0;
}
*/

//2
#include <iostream>
using namespace std;

int main(){
    float temp;
    cout << "enter temperature in celcius ";
    cin >> temp;

    if (temp < 0) {
        cout << "state of water: Solid (ice)" << endl;
    } else if (temp >=0 && temp <= 100) {
        cout << "state of water; liquid(water)" << endl;
    } else {
        cout <<"state of water: Gas(steam)" <<endl;
    }
     
    return 0;
    }
