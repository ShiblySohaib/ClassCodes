SELECT (50+60) as Addition,
 (50-60) as Subtraction,
 (50*60) as Multiplication,
 (50/60) as Division,
 (50%60) as Modulous;


update products set price = price+20 where ProductName = 'Tofu';

SELECT ProductName as L20 FROM products WHERE price < 20;
SELECT ProductName as G20 FROM products WHERE price > 20;
SELECT ProductName as LE50 FROM products WHERE price <= 50;
SELECT ProductName as GE50 FROM products WHERE price >= 50;
SELECT ProductName as NE50 FROM products WHERE Price <> 50;

SELECT CustomerName FROM customers WHERE Country = 'Germany' OR City = 'London';

SELECT CustomerName FROM customers WHERE Country = 'Germany' ANd CustomerID>=5 AND CustomerID<=10;

SELECT CustomerName FROM customers WHERE Country = 'Germany' ANd CustomerID BETWEEN 5 AND 10;
