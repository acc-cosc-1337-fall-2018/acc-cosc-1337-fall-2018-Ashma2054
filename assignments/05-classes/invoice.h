#include "invoice_detail.h"
#ifndef INVOICE_H	
#define INVOICE_H
#include<vector>

using std::vector;

class Invoice
{
public:
	void add_invoice_detail(InvoiceDetail details);
	double get_total();

private:
	vector<InvoiceDetail> invoice_details;


};


#endif //INVOICE
