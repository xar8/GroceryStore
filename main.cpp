//Author: Jason Evans
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
  vector <string> list; //vector
  char input;
  string groceryitem;
  int vectorsize;

  do
  {        
    if(list.size()>0)
      {
        cout<<"\n==GROCERY LIST MANAGER==";
        cout<<"\nEnter your choice: ";
        cout<<"\n (A)dd an item";
        cout<<"\n (D)elete last item";
        cout<<"\n (Q)uit";
        cout<<"\nYour choice (A/Q): ";
      }  
    else
      {
        cout<<"\n==GROCERY LIST MANAGER==";
        cout<<"\nEnter your choice: ";
        cout<<"\n (A)dd an item";
        cout<<"\n (Q)uit";
        cout<<"\nYour choice (A/Q): ";
      }
  cin>>input;
  if (input =='D' || input == 'd' )
    {      
      if(list.size() > 0)
        {
          vectorsize = list.size()-1;
          cout<<list[vectorsize]<<" was deleted from the list."<<endl;
          list.pop_back();
        }
    }        
  else if (input == 'A' || input == 'a' )
    {         
      cout<<"What is the item?" << endl;
      cin>> groceryitem;
      list.push_back(groceryitem);              
    }
  } while (input != 'q' && input != 'Q'); 
  
  if (list.empty())
    {         
      cout<<"No items to buy!"<< endl;
    }
  else
    {
      cout<<"==ITEMS TO BUY==" <<endl;
      for(int index = 0;index < list.size();index++)
        {
          cout<<index+1<< " " << list[index] << endl;  
        }
    }

  return 0;
}
