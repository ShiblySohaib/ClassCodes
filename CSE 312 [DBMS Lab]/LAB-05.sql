SELECT * FROM employee_table ORDER BY NAME; /*sort*/
SELECT * FROM employee_table ORDER BY COUNTRY DESC; /*desc order*/
SELECT * FROM employee_table ORDER BY COUNTRY DESC, AGE ASC; /*first sort country desc, then sort age asc*/
SELECT COUNTRY, COUNT(*) FROM employee_table GROUP BY COUNTRY; /*group by country, count of each country*/
SELECT COUNTRY, COUNT(*) FROM employee_table GROUP BY COUNTRY HAVING COUNT(*)>1; /*group by country, show those having count>1*/
SELECT COUNTRY, MAX(AGE) FROM employee_table GROUP BY COUNTRY HAVING MAX(AGE)<50 ORDER BY COUNTRY DESC; 
SELECT COUNTRY, MAX(AGE) FROM employee_table GROUP BY COUNTRY HAVING MAX(AGE)<50 ORDER BY COUNTRY DESC LIMIT 2;



