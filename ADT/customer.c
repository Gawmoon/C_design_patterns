#include "customer.h"
#include "order.h"
#include <stdlib.h>

struct Customer
{
  const char* name;
  Address address;
  size_t noOfOrders;
  Order orders[42];
};

CustomerPtr createCustomer(
  const char* name,
  const Address* address)
{
  CustomerPtr customer = malloc(sizeof *customer);

  if (customer) {
    customer->name= name;
    customer->address = *address;
  }

  return customer;
}

const char* getName(CustomerPtr customer){
  if (customer) {
    return customer->name;
  }
}

void destroyCustomer(
  CustomerPtr customer)
{
  /* Perform clean-up of the customer internals, if necessary. */
  if (customer) {
    free(customer);
  }
}
