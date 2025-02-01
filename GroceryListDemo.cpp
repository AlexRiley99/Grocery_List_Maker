#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    vector <string> items;
    vector <int> quantity;
    vector <int> price;

    string Item;
    int Quantity;
    int Price, totalPrice;
    int count;

    char start;
    int budget, math, total;

//Welcome Message
    cout<<"Welcome!\n\n";

//Start
    cout<<"What's your budget? Please round to the nearest dollar: $"; //Getting budget amount
    cin >> budget;
    cout<<"Awesome! I'll remember that for later!\n\nMoving on. Let's make your list!\n\n";

    cout<<"\n*Instructions: Please enter the name of each item on your list. Type 'end' to stop\n"; //Getting items
  for(count = 0; count <= items.size(); count++){
    while(Item != "end"){
        cout<<"Please enter an item: ";
        getline(cin >> ws, Item);
        items.push_back(Item);
        }
    }   

    cout<<"\n*Instructions: Please enter the quantity of each item. Type '-1' for the quantity of 'end'\n"; //Getting quantities of items
    while(Quantity != -1){
    for(count = 0; count <= items.size(); count++){
        cout<< "How many "<<items[count]<< "?: ";
        cin >> Quantity;
        quantity.push_back(Quantity);
        if(Quantity == -1){
            break;
        }

        }
    }

    cout<<"\n*Instructions: Enter the estimated prices of each item, rounded up to the nearest dollar.\nType '-1' for the price of 'end'\n"; //Getting prices of items
    while(Price != -1){
        for(count = 0; count <= items.size(); count++){
            cout<<items[count]<<": $";
            cin>>Price;
            price.push_back(Price);
            if(Price == -1){
                break;
            }

        }
    }

    items.pop_back();
    quantity.pop_back();
    price.pop_back(); //Removes "end, -1, -1" from vectors

total = 0;
math = 0; //Initializes total and math

for(count = 0; count <= items.size(); ++count){
    math = price[count] * quantity [count];
    total = total + math; //calculates total cost
}

    cout<<"\n\t\t\tGrocery List\n"; //Displaying grocery list
    cout<<"___________________________________________________________________________\n\n";
    for(count = 0; count < items.size(); count++){
        cout<<items[count]<<"\t\t"<<quantity[count]<<"\t\t$"<<quantity[count] * price[count]<<"\t\t$"<<price[count]<<" ea."<<endl;
    }

    cout<<"\n\nYour total is: $"<<total - 1<<"\n\n";

    if(total - 1 <= budget){
        cout<<"You are within your budget!\n";
        cout<<"You should have $"<<budget - total +1<<" remaining.\n";
    }
    else{
        cout<<"You have exceeded your budget by $"<<total -1 - budget<<"\n";
        cout<<"Please choose a few items to remove from your list and reenter your list without those items.\nThank you!";
    }

return 0;
}



