#include <iostream>
#include <string>

using namespace std;
  const int max_items = 100; 
 
 
int main() {
   // const int max_items = 100; 
    string item[max_items]; 
    //string variableValues[max_items];
    int quantity[max_items];
    int cost[max_items];
    int itemNum;
    int item_cost[max_items];
    int total = 0;
    
    cout << "Enter the number of items: "<< endl;
    cin >> itemNum;

    if (itemNum > max_items) {
        cout << "Error: Maximum number of item is " << max_items << ".\n";
    }

    for (int i = 0; i < itemNum; ++i) {
        cout << "Enter the name for item " << i + 1 <<": "<<endl;
        cin >> item[i];

        cout << "Enter the quantity of  " << item[i] <<": " << endl;
        cin >> quantity[i];
       // cin.ignore();
       // getline(cin,variableValues[i]); 
        
        cout << "Enter the cost per quantity of "<<item[i]<< ":"<< endl;
        cin >> cost[i];
        
        item_cost[i]= quantity[i] * cost[i];
        total = total + item_cost[i];
    }

    cout << "\nReciept:\n";
  for (int i = 0; i < itemNum; ++i) {
        cout << item[i] << "\t" << quantity[i] << "\t\t" << cost[i] << "\t\t" << item_cost[i] << "\n";
      
    }
cout << "                                Total = " <<total;
}