#ifndef INVOICE_DETAIL 
#define INVOICE_DETAIL

class InvoiceDetail
{

public:
	InvoiceDetail(double c,int u): cost(c), units(u){}
	double get_extended_cost() const;

private:
	int units;
	double cost;
};


#endif INVOICE_DETAIL