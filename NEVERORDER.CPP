SELECT Name as Customers from Customers LEFT join Orders on Customers.Id=Orders.CustomerId WHERE CustomerId IS NULL
  
  
  
  SELECT Name as Customers from Customers WHERE Id not in (select CustomerId from Orders)
