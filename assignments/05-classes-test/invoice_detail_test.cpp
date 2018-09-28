#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "invoice_detail.h"

TEST_CASE("Test get extended cost")

{
	InvoiceDetail InvoiceDetail(10,10);
	REQUIRE(InvoiceDetail.get_extended_cost() == 100);
}


