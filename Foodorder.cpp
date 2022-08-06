//First Project for creating an food ordering system by Lokesh Panwar//
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char fullname[30], piz1[]="Magneeta" ,piz2[]="Corn+Onion" ,piz3[]="Mix veg" ,piz4[]="Non- veg", drinks1[]="Lassi", drinks2[]="Jeera lemon shake", drinks3[]="Special Mix",burger_1[]="Veg Burger",burger_2[]="Non-veg",burger_3[]="Salty Burger";
	char sandwich_1[]="Club Sandwich", sandwich_2[]="Chicken Crispy Sandwich", sandwich_3[]="Extream Veg Sandwich";
	char fried1[]="Chicken Fried", fried2[]="Prawn Fried", fried3[]="Beef Fried",gotobeginning ;
	int option=0,pizzaoption,pizzaoption1, qty;// time=40;
	starting:
	system("cls");
	cout<<"\t\t\t|-------------------------------------------------------|\n";
	cout<<"\t\t\t|              Zomataoo  Fast Food Ordering System      |\n";
	cout<<"\t\t\t|-------------------------------------------------------|\n\n";
	cout<<"Please Enter Your Name: ";
	cin.getline(fullname, 20);
	cout<<"Hello "<<fullname<<"\n\nWhat would you like to order from our delicious menu?\n\n";

	cout<<"\t\t\t|-------------------------------------------------------|\n";
	cout<<"\t\t\t|                      Your loveable Food Menu         |\n";
	cout<<"\t\t\t|-------------------------------------------------------|\n\n";

	cout<<"[Choice 1] Pizzas\n";
	cout<<"[Choice 2] Burgers\n";
	cout<<"[Choice 3] Sandwich\n";
	cout<<"[Choice 4] Drinks\n";
	cout<<"[Choice 5] Fried\n\n";
	cout<<"\nPlease Enter your Choice: ";
	cin>>option;

	if(option==1)
	 {
		cout<<"\n1) "<<piz1<<"\n";
		cout<<"2) "<<piz2<<"\n";
		cout<<"3) "<<piz3<<"\n";
		cout<<"4) "<<piz4<<"\n";
		cout<<"\nPlease Enter which Pizza Flavor would you like to have?:";
		cin>>pizzaoption;
		if(pizzaoption>=1 && pizzaoption<=5)
		{
			cout<<"\n1) Small P750.00\n"<<"2) Regular P2000.00\n"<<"3) Large P8700.00\n";
			cout<<"\nChoose Size Please:";
			cin>>pizzaoption1;
			if(pizzaoption1>=1 && pizzaoption1<=3)
			cout<<"\nPlease Enter Quantity: ";
			cin>>qty;
			switch(pizzaoption1)
			{
			case 1: option = 750.00*qty;
			break;

			case 2: option = 2000.00*qty;
			break;

			case 3: option = 8700.00*qty;
			break;


			      }
			system("cls");
			switch (pizzaoption1)
			{
			 case 1:
			 cout<<"\t\t\t--------Your Order---------\n";
			 cout<<""<<qty<<" "<<piz1;
			 cout<<"\nYour Total Bill is \nP"<<option<<"\nYour Order Will be delivered in 20 Minutes. Enjoy our super fast delivery";
			 cout<<"\n\nThank you For Ordering From Zomataoo Fast Food Ordering\n";
			 break;
			 case 2:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<qty<<"  "<<piz2;
			 cout<<"\nYour Total Bill is \nP"<<option<<"\nYour Order Will be delivered in 20 Minutes. Enjoy our super fast delivery";
			 cout<<"\nThank you For Ordering From Zomataoo Fast Food\n";
			 break;
			 case 3:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<qty<<" "<<piz3;
			 cout<<"\nYour Total Bill is \nP"<<option<<"\nYour Order Will be delivered in 20 Minutes. Enjoy our super fast delivery";
			 cout<<"\nThank you For Ordering From Zomataoo Fast Food\n";
			 break;
			 case 4:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<qty<<" "<<piz4;
			 cout<<"\nYour Total Bill is \nP"<<option<<"\nYour Order Will be delivered in 20 Minutes. Enjoy our super fast delivery";
			 cout<<"\nThank you For Ordering From Zomataoo Fast Food\n";
			 break;

			}
			cout<<"Would you like to order anything else? Y / N:";
			cin>>gotobeginning;
			if(gotobeginning=='Y' || gotobeginning=='y')
			{
			  goto starting;
			  //return 0;
			}



		}

	 }


	 else if(option==2)
	 {
		cout<<"\n1 "<<burger_1<<" P180"<<"\n";
		cout<<"2 "<<burger_2<<" P150"<<"\n";
		cout<<"3 "<<burger_3<<" P160"<<"\n";
		//cout<<"4 "<<pizza4<<"\n";
		cout<<"\nPlease Enter which Burger you would like to have?: ";
		cin>>pizzaoption1;
		if(pizzaoption1>=1 && pizzaoption1<=3)
		{
			cout<<"\nPlease Enter Quantity: ";
			cin>>qty;
			switch(pizzaoption1)
			{
			case 1: option = 180.00*qty;
			break;

			case 2: option = 150.00*qty;
			break;

			case 3: option = 160.00*qty;
			break;

			}
			system("cls");
			switch (pizzaoption1)
			{
			 case 1:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<qty<<" "<<burger_1;
			 cout<<"\nYour Total Bill is \nP"<<option<<"\nYour Order Will be delivered in 20 Minutes. Enjoy our super fast delivery";
			 cout<<"\nThank you For Ordering From Zomataoo Fast Food \n";
			 break;
			 case 2:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<qty<<"  "<<burger_2;
			 cout<<"\nYour Total Bill is \nP"<<option<<"\nYour Order Will be delivered in 20 Minutes. Enjoy our super fast delivery";
			 cout<<"\nThank you For Ordering From Zomataoo Pizza\n";
			 break;
			 case 3:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<qty<<" "<<burger_3;
			 cout<<"\nYour Total Bill is \nP"<<option<<"\nYour Order Will be delivered in 20 Minutes. Enjoy our super fast delivery";
			 cout<<"\nThank you For Ordering From Zomataoo Fast Food\n";
			 break;


			}
			cout<<"\nWould you like to order anything else? Y / N:";
			cin>>gotobeginning;
			if(gotobeginning=='Y' || gotobeginning=='y')
			{
			  goto starting;
			  //return 0;
			}

 }
}
	else if(option==3)
	 {
		cout<<"\n1  "<<sandwich_1<<" P240.00"<<"\n";
		cout<<"2  "<<sandwich_2<<" P160.00"<<"\n";
		cout<<"3  "<<sandwich_3<<" P100.00"<<"\n";
		//cout<<"4 "<<pizza4<<"\n";
		cout<<"\nPlease Enter which Sandwich you would like to have?:";
		cin>>pizzaoption1;
		if(pizzaoption1>=1 && pizzaoption1<=3)
		{
			cout<<"\nPlease Enter Quantity: ";
			cin>>qty;
			switch(pizzaoption1)
			{
			case 1: option = 240.00*qty;
			break;

			case 2: option = 160.00*qty;
			break;

			case 3: option = 100.00*qty;
			break;

			}
			system("cls");
			switch (pizzaoption1)
			{
			 case 1:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<qty<<" "<<sandwich_1;
			 cout<<"\nYour Total Bill is \nP"<<option<<"\nYour Order Will be delivered in 20 Minutes. Enjoy our super fast delivery";
			 cout<<"\nThank you For Ordering From Zomataoo Fast Food\n";
			 break;
			 case 2:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<qty<<"  "<<sandwich_2;
			 cout<<"\nYour Total Bill is \nP"<<option<<"\nYour Order Will be delivered in 20 Minutes. Enjoy our super fast delivery";
			 cout<<"\nThank you For Ordering From Zomataoo Fast Food\n";
			 break;
			 case 3:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<qty<<" "<<sandwich_2;
			 cout<<"\nYour Total Bill is \nP"<<option<<"\nYour Order Will be delivered in 20 Minutes. Enjoy our super fast delivery";
			 cout<<"\nThank you For Ordering From Zomataoo Fast Food\n";
			 break;


			}
			cout<<"Would you like to order anything else? Y / N:";
			cin>>gotobeginning;
			if(gotobeginning=='Y' || gotobeginning=='y')
			{
			  goto starting;
			  //return 0;
			}
			}
			}


	 else if(option==4)
	 {
		cout<<"\n1 "<<drinks1<<" P15.00"<<"\n";
		cout<<"2 "<<drinks2<<" P20.00"<<"\n";
		cout<<"3 "<<drinks3<<" P30.00"<<"\n";
		//cout<<"4 "<<pizza4<<"\n";
		cout<<"\nPlease Enter which you would like to have?: ";
		cin>>pizzaoption1;
		if(pizzaoption1>=1 && pizzaoption1<=3)
		{
			cout<<"\nHow Much Drinks Do you want: ";
			cin>>qty;
			switch(pizzaoption1)
			{
			case 1: option = 150.00*qty;
			break;

			case 2: option = 100.00*qty;
			break;

			case 3: option = 120.00*qty;
			break;

			}
			system("cls");
			switch (pizzaoption1)
			{
			 case 1:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<qty<<" "<<drinks1;
			 cout<<"\nYour Total Bill is \nP"<<option<<"\nYour Order Will be delivered in 20 Minutes. Enjoy our super fast delivery";
			 cout<<"\nThank you For Ordering From Zomataoo Fast Food\n";
			 break;
			 case 2:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<qty<<"  "<<drinks2;
			 cout<<"\nYour Total Bill is \nP"<<option<<"\nYour Order Will be delivered in 20 Minutes. Enjoy our super fast delivery";
			 cout<<"\nThank you For Ordering From Zomataoo Fast Food\n";
			 break;
			 case 3:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<qty<<" "<<drinks3;
			 cout<<"\nYour Total Bill is \nP"<<option<<"\nYour Order Will be delivered in 20 Minutes. Enjoy our super fast delivery";
			 cout<<"\nThank you For Ordering From Zomataoo Fast Food\n";
			 break;


			}

 }
}
	else if(option==5)
	 {
		cout<<"\n1 "<<fried1<<" P160.00"<<"\n";
		cout<<"2 "<<fried2<<" P220.00"<<"\n";
		cout<<"3 "<<fried3<<" P140.00"<<"\n";
		//cout<<"4 "<<pizza4<<"\n";
		cout<<"\nPlease Enter which Fried you would like to have?:";
		cin>>pizzaoption1;
		if(pizzaoption1>=1 && pizzaoption1<=3)
		{
			cout<<"\nPlease Enter Quantity: ";
			cin>>qty;
			switch(pizzaoption1)
			{
			case 1: option = 160.00*qty;
			break;

			case 2: option = 220.00*qty;
			break;

			case 3: option = 140.00*qty;
			break;

			}
			system("cls");
			switch (pizzaoption1)
			{
			 case 1:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<qty<<" "<<fried1;
			 cout<<"\nYour Total Bill is \nP"<<option<<"\nYour Order Will be delivered in 20 Minutes. Enjoy our super fast delivery";
			 cout<<"\nThank you For Ordering From Zomataoo Fast Food \n";
			 break;
			 case 2:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<qty<<"  "<<fried2;
			 cout<<"\nYour Total Bill is \nP"<<option<<"\nYour Order Will be delivered in 20 Minutes. Enjoy our super fast delivery";
			 cout<<"\nThank you For Ordering From Zomataoo Fast Food\n";
			 break;
			 case 3:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<qty<<" "<<fried3;
			 cout<<"\nYour Total Bill is \nP"<<option<<"\nYour Order Will be delivered in 20 Minutes. Enjoy our super fast delivery";
			 cout<<"\nThank you For Ordering From Zomataoo Fast Food\n";
			 break;


			}
			cout<<"Would you like to order anything else? Y / N:";
			cin>>gotobeginning;
			if(gotobeginning=='Y' || gotobeginning=='y')
			{
			  goto starting;
			  //return 0;
			}
			}
			}

			else
			{
				system("cls");
				cout<<"Please Select Right Choice: \n";
				cout<<"Would You like to Start the program again? Y / N: " ;
				cin>>gotobeginning;

				if(gotobeginning=='Y' || gotobeginning=='y')
				{
				  goto starting;
			  //return 0;
			}
			}

     getch();
}