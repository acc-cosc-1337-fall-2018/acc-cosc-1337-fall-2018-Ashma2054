#include "invoice.h"

void Invoice::add_invoice_detail(InvoiceDetail detail)
{
	invoice_details.pushback(detail);
}

double Invoice::get_total() const
{
	double total{ 0 };
	for (auto detail : invoice_details)
	{
		total += details.get_extended;
	}
}