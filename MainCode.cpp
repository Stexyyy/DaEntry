include<iostream>
using namespace std;
int main (){

int age;
  
age = int(input("How old are you? \n -- "))
if age <= 12:
    print("You are not old enough yet.")
if age > 12 and age <= 17:
    print("you need Parent permission.")
if age >= 18:
    print("Welcome!")
      
      
  }
