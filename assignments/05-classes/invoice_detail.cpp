#include "invoice_detail.h"
#include<iostream>

double InvoiceDetail::get_extended_cost() const
{
	return cost * units;
}

std::istream & operator>>(std::istream& in, InvoiceDetail & d)
{
	std::cout << "Enter Cost: ";
	in >> d.cost;
	std::cout << "Enter Units: ";
	in >> d.units;

	return in;
}