#include<iostream>
#include<windows.h>
using namespace std;
void start();
int menu();
int k=0;
	
int main()
{
	start();
	string name[100];
	string no[100];
	int check;
	int Total_contacts=0;
	check=menu();
	do
	{
		  if(check==1)  // Add Contacts
		  {
		  	cout<<"\t\t\t\t\t\tName :";
			        cin>>name[k];
					cout<<"\t\t\t\t\t\tPhone No :";
					cin>>no[k];
					k++; 
					Total_contacts++;
		  }
			
		  else if(check==2)   //Display Contacts
		  {
		  	int check2=0;
		  	         for(int i=0;i<100;i++)
			         {
			         	if(name[i]!="\0")
			         	cout<<"\t\t\t\t\t Name : "<<name[i]<< "        Phone :"<<no[i]<<endl;
			         	check2++;
					 }		
				if(check2==0)
				{
					cout<<"\t\t\t\t\tContact List is Empty\n";
				}
		  }
		  
		  else if(check==3) //Search By Number
		  {
		  	string temp;
		  	cout<<"\t\t\t\t\tNumber :";
		  	cin>>temp;
		  	int check2=0;
		  	for(int i=0;i<100;i++)
		  	{
		  	  if(temp==no[i])
		  	  {
		  	  	 cout<<"\t\t\t\t\tNumber is Found\n";
		  	  	 cout<<"\t\t\t\t\tName  : "<<name[i]<<"     Phone : "<<no[i]<<endl;
		  	  	 check2++;
			  }
			}
			if(check2==0)
			{
				cout<<"\t\t\t\t\tNumber not Found in your Contact List\n";
			}			
		  }
		  
		  else if(check==4) // Search By Name
		  {
		  	string temp;
		  	cout<<"\t\t\t\t\tName :";
		  	cin>>temp;
		  	int check2=0;
		  	for(int i=0;i<100;i++)
		  	{
		  	  if(temp==name[i])
		  	  {
		  	  	 cout<<"\t\t\t\t\tName is Found\n";
		  	  	 cout<<"\t\t\t\t\tName  : "<<name[i]<<"     Phone : "<<no[i]<<endl;
		  	  	 check2++;
			  }
			}
			if(check2==0)
			{
				cout<<"\t\t\t\t\tName not Found in your Contact List\n";
			}
		  }
		  
		  else if(check==5) //Update 
		  {
		  	string temp,temp2,temp3;
		  	cout<<"\t\t\t\t\tName :";
		  	cin>>temp;
		  	int check2=0;
		  	for(int i=0;i<100;i++)
		  	{
		  	  if(temp==name[i])
		  	  {
		  	  	 cout<<"\t\t\t\t\tNew Name : ";
		  	  	 cin>>temp2;
		  	  	 cout<<"\t\t\t\t\tNew Number : ";
		  	  	 cin>>temp3;
		  	  	 name[i]=temp2;
		  	  	 no[i]=temp3;
		  	  	 check2++;
		  	  	 cout<<"\t\t\t\t\tUpdated Successfully : ";
			  }
			}
			if(check2==0)
			{
				cout<<"\t\t\t\t\tName not Found in your Contact List\n";
			}

		  }
		  
		  else if(check==6) //Delete
		  {
		  	string temp;
		  	cout<<"\t\t\t\t\tFor Delete Enter Name : ";
		  	cin>>temp;
		  	int check2=0;
		  	for(int i=0;i<100;i++)
		  	{
		  	  if(temp==name[i])
		  	  {
		  	  	 cout<<"\t\t\t\t\tDeleted Successfully\n";
		  	  	 cout<<"\t\t\t\t\tName  : "<<name[i]<<"     Phone : "<<no[i]<<endl;
		  	  	 name[i]="\0";
		  	  	 no[i]="\0";
		  	  	 check2++;
		  	  	 Total_contacts--;
			  }
			}
			if(check2==0)
			{
				cout<<"\t\t\t\t\tName not Found in your Contact List\n";
			}
		  }
		  
		  else if(check==7) //Delete All
		  {
		  	  	 cout<<"\t\t\t\t\tAll Deleted Successfully\n";
		  	  	 for(int i=0;i<k;i++)
		  	  	 {
		  	  	 	name[i]="\0";
		  	  	 	no[i]="\0";
				 }
				 k=0;
		  	  	Total_contacts=0;
		  }
		  else if(check==8) //Display Number Of Contacts
		  {
		  	cout<<"\t\t\t\t\tTotal Number of Contact List are : "<<Total_contacts<<endl;
		  }
		  
		  check=menu();	 
		}while(check!=9);
		 
}

int menu()
{
	cout<<"\n\n\n\n\n\n";
	cout<<"\t\t\t\t\t\t---------------------------------------\n";
	cout<<"\t\t\t\t\t\t---------------------------------------\n";
	cout<<"\t\t\t\t\t\t|       PHONE BOOK APPLICATION        |\n";
	cout<<"\t\t\t\t\t\t---------------------------------------\n";
	cout<<"\t\t\t\t\t\t|-------------------------------------|\n";
	cout<<"\t\t\t\t\t\t|       [1] Add Contacts              |\n";
	cout<<"\t\t\t\t\t\t|       [2] Display All Contacts      |\n";
	cout<<"\t\t\t\t\t\t|       [3] Search By Number          |\n";
	cout<<"\t\t\t\t\t\t|       [4] Search By Name            |\n";
	cout<<"\t\t\t\t\t\t|       [5] Update                    |\n";
	cout<<"\t\t\t\t\t\t|       [6] Delete                    |\n";
	cout<<"\t\t\t\t\t\t|       [7] Delete All                |\n";
	cout<<"\t\t\t\t\t\t|       [8] Number Of Contacts        |\n";
	cout<<"\t\t\t\t\t\t|                                     |\n";
	cout<<"\t\t\t\t\t\t---------------------------------------\n";
	cout<<"\t\t\t\t\t\t|           [9]   Exit                |\n";
	cout<<"\t\t\t\t\t\t---------------------------------------\n";
	
	int a;
	cin>>a;
	system("cls");
	return a;
}

void start()
{
	system("Color 0B");
	cout<<"\n\n\n\n\n\n\n\n\n";
	cout<<"\t\t\t\t--------------------------------\n";
	cout<<"\t\t\t\t--------------------------------\n";
	cout<<"\t\t\t\t PHONE BOOK APPLICATION\n";
	cout<<"\t\t\t\t--------------------------------\n\n";
	cout<<"\t\t\t\tLoading ";
	char x = 219;
	for(int i=0;i<35;i++)
	{
		cout<<x;
		if(i<10)
		Sleep(300);
		if(i>=10 && i<20)
		Sleep(150);
		if(i>=10)
		Sleep(25);
	}
	system("cls");
}

















