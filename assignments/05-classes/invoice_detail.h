#ifndef INVOICE_DETAIL 
#define INVOICE_DETAIL
#include<iostream>

class InvoiceDetail
{

public:
	InvoiceDetail() = default;
	InvoiceDetail(double c,int u): cost(c), units(u){}
	double get_extended_cost() const;
	friend std::istream & operator>>(std::istream& in, InvoiceDetail& d);

private:
	int units;
	double cost;
};


#endif INVOICE_DETAIL