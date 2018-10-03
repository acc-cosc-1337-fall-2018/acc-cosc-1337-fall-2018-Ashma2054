#include "invoice.h"
//#include<iostream>

void Invoice::add_invoice_detail(InvoiceDetail details)
{
	invoice_details.push_back(details);
}

double Invoice::get_total()
{
	double total{ 0 };
	for (auto detail : invoice_details)
	{
		total += detail.get_extended_cost();
	}
	return 0.0;
}

