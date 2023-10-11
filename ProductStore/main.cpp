#include <iostream>
#include <vector>
#include "global.h"
#include "product.h"
#include "productmanager.h"
#include <string>
//using namespace std;

//int global;
vector<Product> products;
ProductManager mgr; 

void acceptProducts(){
	int id;
    string title;
    string description;
    double unitPrice;
    char ch;
	do
    {	
    	cout<<"\n Enter product id: ";
    	cin>>id;
    	cout<<"\n Enter product title: ";
    	getline(cin>>ws, title);
    	cout<<"\n Enter product description: ";
    	getline(cin>>ws, description);
    	cout<<"\n Enter product unit price: ";
    	cin>>unitPrice;
		Product p(id, title, description, unitPrice);
		mgr.Insert(p);
		cout<<"Do you want to add more products? (Y/N)";
		cin>>ch;
	} while(ch != 'N' || ch != 'n');
}

void showProducts(){
 	cout << "\nMy Stored Products"; 
	vector<Product> allProducts=mgr.GetAll();
    for (auto i = allProducts.begin(); i != allProducts.end(); ++i) 
        cout <<"\n"<< (*i).GetId()<< " "<<(*i).GetTitle()<<" "<<(*i).GetDescription()<<" "<<(*i).GetUnitPrice(); 	
    cout<< "\n _____________________________________\n";
}


int main(int argc, char** argv) {
	int choice;
	do{
		cout<< "Choose Option:\n";
		cout<< "1. Show All Products:\n";
		cout<< "2. Find Product:\n";
		cout<< "3. Insert Product:\n";
		cout<< "4. Update existing Product:\n";
		cout<< "5. Delete an existing product:\n";
		cout<< "6. Delete all available products:\n";
		cout<< "7. Exit:\n";
		
		cin>>choice;
		switch(choice){
			case 1:
				  showProducts();
			break;
			case 2:
				  //Find product
				  int iid;
				  cout<<"Enter the product id: ";
				  cin>>iid;
				  FindById(int iid);
				break;
			case 3:
					acceptProducts();
			break;
			case 4:
				  //Update product
			break;
			case 5:
			{
				bool status=mgr.Delete(2);
			}	
			break;
			case 6:{
				bool status=mgr.DeleteAll();
			}
			break;
		}				
	} while(choice != 7);
	
//		acceptProducts();
//		showProducts();
	return 0;
	}
