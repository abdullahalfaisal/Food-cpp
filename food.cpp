#include <iostream>
using namespace std;
int main()
{
    double Naga_Burger = 115.00;
    double Chicken_Burger = 80.00;
    double Cheese_Pizza = 600.00;
    double Chicken_BBQ_Pizza = 800.00 ;
    double Chicken_Sandwich = 75.00;
    double Sub_Sandwich = 125.00;
    double Cold_Coffee = 75.00;
    double Special_Locchi = 85.00;
    double Chicken_Chaap = 105.00;
    double Soft_Porota = 12.00;
    double Mad_Drums = 255.00;
    double BBQ_Chicken_Wings = 155.00;
    double Extra_Cheese = 25.00;
    double Egg = 20.00;
    double totalAmount;
    int select;
    int quantity =0;
    int flavour;
    int quantityOfBurger;
    int quantityOfPizza;

    cout<<"\t\t----------Welcome To Mad Chicken---------\n\n";
    string name;
    cout<<" Please Enter Your name: ";
    getline(cin,name);


    cout<<"\n\nHello "<<name<<", What would you like to have?\n\n\n";

    string menu[] = {"\0"," Burger"," Pizza"," Chaap & others"," sandwich"," Naga"," Drinks"," Addons"};
    for(int i = 1; i<=7;i++){
        cout<<i<<")"<<menu[i]<<endl;
    }

    cout<<"\nPlease Select Your Food: ";
    cin>>select; //food selection

if (select==1) //if select burger //Naga Burger //Chicken Burger
{
    string burgerFlavour [] = {"\0","Naga Burger","Chicken Burger"};
    for (int i = 1; i<=2; i++)
{


        cout<<i<<") "<<burgerFlavour[i]<<endl;
}

    cout<<"Enter Your Flavour: ";
    cin>>flavour;
    if (flavour == 1)

        cout<<" Price of Naga Burger: "<<Naga_Burger<<" Tk "<<endl;

if (flavour==2)
        cout<<" Price of Chicken Burger is: "<<Chicken_Burger<<" TK "<<endl;

    cout<<"Select the Quantity: ";
    cin>>quantity;
}


 else if (select==2) //if select pizza //Cheese Pizza // Chicken BBQ Pizza
{
    string pizzaFlavour [] = {"\0","Cheese Pizza","Chicken BBQ Pizza"};
    for(int i = 1; i<=2; i++){
    cout<<i<<") "<<pizzaFlavour[i]<<endl;
}
    cout<<"Enter Your Flavour: ";
    cin>>flavour;

    if (flavour == 1)

        cout<<"\nPrice of Cheese Pizza: "<<Cheese_Pizza<<" Tk "<<endl;

     if (flavour == 2)

        cout<<"\nPrice of Chicken BBQ Pizza is: "<<Chicken_BBQ_Pizza<<" TK "<<endl;

    //cout<<"Select the Quantity: ";
    //cin>>quantity;
}
else if (select==3) //if select chaap & others //Chicken_Chaap // Soft_Porota
{
    string chaapFlavour [] = {"\0","Chicken Chaap","Soft Porota "};
    for (int i = 1; i<=2; i++)
{


        cout<<i<<") "<<chaapFlavour[i]<<endl;
}

    cout<<"Enter Your Flavour: ";
    cin>>flavour;
    if (flavour == 1)

        cout<<"\nPrice of Chicken Chaap: "<<Chicken_Chaap<<" Tk "<<endl;

if (flavour==2)
        cout<<"\nPrice of Soft Porota is: "<<Soft_Porota<<" TK "<<endl;

    cout<<"Select the Quantity: ";
    cin>>quantity;
}


else if (select==4) //if select Sandwich //Chicken_Sandwich // Sub_Sandwich
{
    string sandwichFlavour [] = {"\0","Chicken Sandwich","Sub Sandwich "};
    for (int i = 1; i<=2; i++)
{


        cout<<i<<") "<<sandwichFlavour[i]<<endl;
}

    cout<<"Enter Your Flavour: ";
    cin>>flavour;
    if (flavour == 1)

        cout<<"\nPrice of Chicken Sandwich: "<<Chicken_Sandwich<<" Tk "<<endl;

if (flavour==2)
        cout<<"\nPrice of Sub Sandwich is: "<<Sub_Sandwich<<" TK "<<endl;

    cout<<"Select the Quantity: ";
    cin>>quantity;
}

else if (select==5) //if select naga //Mad_Drums // BBQ_Chicken_Wings
{
    string nagaFlavour [] = {"\0","Mad Drums","Sub Sandwich "};
    for (int i = 1; i<=2; i++)
{


        cout<<i<<") "<<nagaFlavour[i]<<endl;
}

    cout<<"Enter Your Flavour: ";
    cin>>flavour;
    if (flavour == 1)

        cout<<"\nPrice of Mad Drums: "<<Mad_Drums<<" Tk "<<endl;

if (flavour==2)
        cout<<"\nPrice of BBQ Chicken Wings is: "<<BBQ_Chicken_Wings<<" TK "<<endl;

    cout<<"Select the Quantity: ";
    cin>>quantity;
}

else if (select==6) //if select Drinks //Cold_Coffee // Special_Locchi
{
    string drinksFlavour [] = {"\0","Cold Coffee ","Special Locchi "};
    for (int i = 1; i<=2; i++)
{


        cout<<i<<") "<<drinksFlavour[i]<<endl;
}

    cout<<"Enter Your Flavour: ";
    cin>>flavour;
    if (flavour == 1)

        cout<<"\nPrice of Cold Coffee: "<<Cold_Coffee<<" Tk "<<endl;

if (flavour==2)
        cout<<"\nPrice of Special Locchiis: "<<Special_Locchi<<" TK "<<endl;

    cout<<"Select the Quantity: ";
    cin>>quantity;
}

 else if (select==7) //if select Addons //Extra_Cheese // Egg
{
    string addonsFlavour [] = {"\0","Extra Cheese ","Egg "};
    for (int i = 1; i<=2; i++)
{


        cout<<i<<") "<<addonsFlavour[i]<<endl;
}

    cout<<"Enter Your Flavour: ";
    cin>>flavour;
    if (flavour == 1)

        cout<<"\nPrice of Extra Cheese: "<<Extra_Cheese<<" Tk "<<endl;

if (flavour==2)
        cout<<"\nPrice of Egg: "<<Egg<<" TK "<<endl;

    cout<<"Select the Quantity: ";
    cin>>quantity;
}

switch (flavour)
  {

  case 1: flavour = Naga_Burger;
  cin>>quantityOfBurger;
          totalAmount = quantityOfBurger*Naga_Burger;
          break;
  case 2: flavour = Chicken_Burger;

   cin>>quantityOfBurger;
          totalAmount = quantityOfBurger*Chicken_Burger;
          break;
  case 3: flavour = Cheese_Pizza;
  cout<<"Enter The Quantity: ";
  cin>>quantityOfPizza;
          totalAmount = quantityOfPizza*Cheese_Pizza;
          cout<<"Total Amount "<<totalAmount;
          break;

  case 4: flavour = Chicken_BBQ_Pizza;
  cout<<"Enter The Quantity: ";
  cin>>quantityOfPizza;

          totalAmount = quantityOfPizza*Chicken_BBQ_Pizza;
           cout<<"Total Amount "<<totalAmount;
          break;
  case 5: flavour = Chicken_Sandwich;
          totalAmount = quantity*Chicken_Sandwich;
          break;
  case 6: flavour = Sub_Sandwich;
          totalAmount = quantity*Sub_Sandwich;
          break;


  case 7: flavour = Cold_Coffee ;
          totalAmount = quantity*Cold_Coffee ;
          break;
  case 8:   flavour = Special_Locchi;
          totalAmount = quantity*Special_Locchi;
          break;
  case 9: flavour = Chicken_Chaap;
           totalAmount = quantity*Chicken_Chaap;
          break;

 case 10: flavour = Soft_Porota;
          totalAmount = quantity*Soft_Porota;
          break;
  case 11:  flavour = Mad_Drums;
          totalAmount = quantity*Mad_Drums;
          break;
  case 12: flavour = BBQ_Chicken_Wings;
           totalAmount = quantity*BBQ_Chicken_Wings;
          break;

  case 13: flavour = Extra_Cheese;
          totalAmount = quantity*Extra_Cheese;
          break;
  case 14:flavour = Egg;
          totalAmount = quantity*Egg;
          break;
  }



  /*switch (flavour)
  {

  case 1: flavour = Naga_Burger;
          totalAmount = quantity*Naga_Burger;
          break;
  case 2: flavour = Chicken_Burger;
          totalAmount = quantity*Chicken_Burger;
          break;
  case 3: flavour = Cheese_Pizza;
          totalAmount = quantity*Cheese_Pizza;
          break;

  case 4: flavour = Chicken_BBQ_Pizza;
          totalAmount = quantity*Chicken_BBQ_Pizza;
          break;
  case 5: flavour = Chicken_Sandwich;
          totalAmount = quantity*Chicken_Sandwich;
          break;
  case 6: flavour = Sub_Sandwich;
          totalAmount = quantity*Sub_Sandwich;
          break;


  case 7: flavour = Cold_Coffee ;
          totalAmount = quantity*Cold_Coffee ;
          break;
  case 8:   flavour = Special_Locchi;
          totalAmount = quantity*Special_Locchi;
          break;
  case 9: flavour = Chicken_Chaap;
           totalAmount = quantity*Chicken_Chaap;
          break;

 case 10: flavour = Soft_Porota;
          totalAmount = quantity*Soft_Porota;
          break;
  case 11:  flavour = Mad_Drums;
          totalAmount = quantity*Mad_Drums;
          break;
  case 12: flavour = BBQ_Chicken_Wings;
           totalAmount = quantity*BBQ_Chicken_Wings;
          break;

  case 13: flavour = Extra_Cheese;
          totalAmount = quantity*Extra_Cheese;
          break;
  case 14:flavour = Egg;
          totalAmount = quantity*Egg;
          break;


*/
  /*cout<<"Your Total Bill is: "<<totalAmount<<endl;*/


    return 0;

}

