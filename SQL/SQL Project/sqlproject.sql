use albin;
create table customers(customerid int,name varchar(20),city varchar(20));
create table orders(orderid int,customerid int,orderdate date,ordertotal int);

insert into customers values(1,'John Levi','New York');
insert into customers values(2,'Jane Tye','Los Angeles');
insert into customers values(3,'Mike Foley','Chicago');
insert into customers values(4,'Alice White','New York');

select * from customers;

insert into orders values(100,1,'2023-07-01',100.00);
insert into orders values(101,2,'2023-06-15',50.00);
insert into orders values(102,3,'2023-07-05',150.00);
insert into orders values(103,1,'2023-07-07',75.00);
insert into orders values(104,4,'2023-07-02',200.00);

select * from orders;

select c.customerid,c.name,count(o.orderid) as no_of_orders from customers c left join orders o on c.customerid=o.customerid where o.orderdate not like '____-06-__' group by c.customerid,c.name;

select c.name,c.customerid from customers c left join orders o on c.customerid=o.customerid group by c.customerid,c.name order by sum(ordertotal) desc limit 1;

select c.name,o.orderid,o.orderdate from customers c,orders o where c.customerid=o.customerid;

select avg(o.ordertotal),c.city from customers c left join orders o on c.customerid=o.customerid group by c.city;

select c.name,c.customerid from customers c where c.customerid not in(select orders.customerid from orders);