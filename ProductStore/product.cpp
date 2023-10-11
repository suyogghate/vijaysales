#include "product.h"
 
Product::Product()
{
	this->id=0;
	this->title="dummy";
	this->description="dummy";
	this->unitPrice=0.00;
}

Product::Product(int id, string title, string description, double unitPrice){
	this->id=id;
	this->title=title;
	this->description=description;
	this->unitPrice=unitPrice;
}

Product::~Product()
{
}

int Product::GetId(){
    return this->id;
}

string Product::GetTitle(){  
    return this->title;
}

string Product::GetDescription(){
	return this->description;
}

double Product::GetUnitPrice(){
	return this->unitPrice;
}

void Product::SetTitle(string title){
	this->title=title;
}

void Product::SetDescription(string description){
	this->description=description;
}

void Product::SetUnitPrice(double unitPrice){
	this->unitPrice=unitPrice;
}
