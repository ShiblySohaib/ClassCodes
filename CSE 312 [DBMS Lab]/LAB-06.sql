/*Inner join*/
SELECT customers.id, customers.name, orders.order_id, orders.order_date FROM customers INNER JOIN orders ON customers.id = orders.customer_id;
/*Full join in mariaDB using union between left and right join*/
SELECT customers.id, customers.name, orders.order_id, orders.order_date FROM customers LEFT JOIN orders ON customers.id = orders.customer_id
UNION
SELECT customers.id, customers.name, orders.order_id, orders.order_date FROM customers RIGHT JOIN orders ON customers.id = orders.customer_id;
