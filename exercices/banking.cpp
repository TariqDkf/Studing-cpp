#include <iostream>
#include <iomanip>

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main(){

   double balance = 120;
   int choice = 0;

   do{
      std::cout << "Enter your choice: \n";

      std::cout << "1. Show Balance\n";
      std::cout << "2. Deposit your money\n";
      std::cout << "3. Whitdraw your money\n";
      std::cout << "4. Exit\n";
      std::cout << "N#";
      std::cin >> choice;

      switch (choice)
      {
      case 1:
         showBalance(balance);
         break;
      case 2:
         balance += deposit();
         break;
      case 3:
         balance -= withdraw(balance);
         break;
      case 4:
         std::cout << "Thanks for visiting!";
         break;
      default:
         std::cout << "Invalid option";
         break;
      }
   }while(choice != 4);
   



   return 0;
}

void showBalance(double balance){
   std::cout << "Your balance is $" << std::setprecision(2) << std::fixed << balance << "\n";
}

double deposit(){
   double money;
   std::cout << "How much do you wanna deposit: ";
   std::cin >> money;
   return money;
}
double withdraw(double balance){
   double money;
   std::cout << "How much do you wanna withdraw: ";
   std::cin >> money;

   if (balance < money)
   {
      std::cout << "Sorry you dont have enough money!\n";
      return 0;
   }

   else if (money < 0)
   {
      std::cout << "Please enter a valid amount!\n";
      return 0;
   }

   else
   {
      return money;
   }
}