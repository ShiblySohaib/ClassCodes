/*Inner join*/
SELECT customers.id, customers.name, orders.order_id, orders.order_date FROM customers INNER JOIN orders ON customers.id = orders.customer_id;
