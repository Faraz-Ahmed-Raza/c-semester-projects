#include<iostream>
using namespace std;

int main()
{
    cout<<"====================== Restaurant Billing System ==================="<<endl;

    int burger = 100;
    int pizza = 400;
    int biryani = 300;
    int fries = 50;
    int drinks = 80;

    int grandtotal = 0;
    string word;
    cin>>word;

    while(word == "again")
    {
        cout<<"Burger "<<burger<<endl;
        cout<<"Pizza "<<pizza<<endl;
        cout<<"Biryani "<<biryani<<endl;
        cout<<"Fries "<<fries<<endl;
        cout<<"Drinks "<<drinks<<endl;

        int choice;
        cout<<"Enter the choice ";
        cin>>choice;

        if(choice == 1)
        {
            cout<<"You have chosen the burger"<<endl;

            int quantity;
            cout<<"How many burgers do you want ";
            cin>>quantity;

            grandtotal = grandtotal + (burger * quantity);
        }

        else if(choice == 2)
        {
            cout<<"You have chosen the pizza"<<endl;

            int quantity;
            cout<<"How many pizzas do you want ";
            cin>>quantity;

            grandtotal = grandtotal + (pizza * quantity);
        }

        else if(choice == 3)
        {
            cout<<"You have chosen the biryani"<<endl;

            int quantity;
            cout<<"How many biryani do you want ";
            cin>>quantity;

            grandtotal = grandtotal + (biryani * quantity);
        }

        else if(choice == 4)
        {
            cout<<"You have chosen the fries"<<endl;

            int quantity;
            cout<<"How many fries do you want ";
            cin>>quantity;

            grandtotal = grandtotal + (fries * quantity);
        }

        else if(choice == 5)
        {
            cout<<"You have chosen the drinks"<<endl;

            int quantity;
            cout<<"How many drinks do you want ";
            cin>>quantity;

            grandtotal = grandtotal + (drinks * quantity);
        }

        else
        {
            cout<<"Invalid choice"<<endl;
        }

        cout<<"\nEnter again to order another item"<<endl;
        cout<<"Enter stop to calculate total bill"<<endl;
        cin>>word;
    }

    cout<<"\nThe final bill is "<<grandtotal<<endl;

    return 0;
}

	
	
	
	
	
	
	
	
	
	



	





	

