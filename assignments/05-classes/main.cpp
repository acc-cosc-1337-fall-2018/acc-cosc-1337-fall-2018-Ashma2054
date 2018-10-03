#include "invoice.h"
#include<iostream>

int main()
{
	//InvoiceDetail detail(10, 10);
	//std::cout << detail.get_extended_cost();
	//return 0;


	Invoice invoice;
	invoice.add_invoice_detail(InvoiceDetail(10, 10));
	invoice.add_invoice_detail(InvoiceDetail(5, 5));
	invoice.add_invoice_detail(InvoiceDetail(100, 2));

	std::cout << invoice.get_total();

	return 0;

}