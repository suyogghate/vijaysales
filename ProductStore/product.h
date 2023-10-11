#ifndef PRODUCT_H
#define PRODUCT_H
#include <string>
using namespace std;

class Product
{
	private:
		int id;
		string title;
		string description;
		double unitPrice;		
	public:
		Product();
		Product(int id, string title, string description, double unitPrice);
		int GetId();
		string GetTitle();
		string GetDescription();
		double GetUnitPrice();
	    void SetTitle(string title);
	    void SetDescription(string description);
	    void SetUnitPrice(double unitPrice);
		~Product();
	protected:
};

#endif
