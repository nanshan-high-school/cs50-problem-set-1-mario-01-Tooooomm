#include <iostream>
using namespace std;
int main(){
    int i, counter = 1, counter2 = 0, counter3, counter4;
    // counter和counter2決定輸出幾個米字號
    // counter3和counter4決定輸出幾個空格
    do{
        cout << "請輸入階梯高：";
        cin >> i;
        counter3 = i - 1;
        while(counter <= i){
            for(counter4 = counter3; counter4 > 0; counter4--){
                cout << " ";
            }
            counter3--;

            for(counter2 = 0; counter2 < counter; counter2++){
                cout << "*";
            }
            counter++;

            cout << endl;
        }
        if(i < 0){
            cout << "輸入錯誤。請重新輸入。\n";
        }
    } while(i < 1);
}
