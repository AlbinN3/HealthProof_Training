CREATE DATABASE sqldemo;
USE sqldemo;

CREATE TABLE emp(empid int,empname VARCHAR(20), sal int,city VARCHAR(20));
INSERT INTO emp VALUES(1,'user1',2000,'hyd');
INSERT INTO emp VALUES(2,'user2',20000,'ban');
INSERT INTO emp VALUES(3,'user3',3000,'kochi');
INSERT INTO emp VALUES(4,'user4',40004,'tvm');

SELECT * FROM emp;
SELECT empname FROM emp;
SELECT empname,city FROM emp;

SELECT  * FROM emp WHERE sal>3000;
SELECT sal FROM emp WHERE empname='user1';

UPDATE emp SET sal =sal+10000 WHERE city = 'tvm';
SELECT * FROM emp;

DELETE FROM emp WHERE city = 'hyd';
SELECT * FROM emp;

CREATE TABLE BOOKS(bookid int,bookname VARCHAR(40),author VARCHAR(20),price int);

INSERT INTO BOOKS VALUES(1,'c','balaguruswamy',150);
INSERT INTO BOOKS VALUES(2,'c++','balaguruswamy',175);
INSERT INTO BOOKS VALUES(3,'java','balaguruswamy',300);
INSERT INTO BOOKS VALUES(4,'oracle','rish',850);
INSERT INTO BOOKS VALUES(5,'mysql','manohar',400);

SELECT * FROM BOOKS;
SELECT author FROM BOOKS WHERE bookname='mysql';
SELECT price FROM BOOKS WHERE bookname='oracle';
SELECT bookname FROM BOOKS WHERE author='balaguruswamy';
SELECT COUNT(bookname) FROM BOOKS;
SELECT bookid FROM BOOKS WHERE bookname='java';
SELECT bookname FROM BOOKS WHERE price>200;
SELECT COUNT(bookname) FROM BOOKS WHERE author='balaguruswamy';

SELECT SUM(sal) FROM emp;
SELECT AVG(sal) FROM emp;
SELECT COUNT(empid) FROM emp;
SELECT MIN(sal) FROM emp;
SELECT MAX(sal) FROM emp;

RENAME TABLE emp TO newemp;
ALTER TABLE newemp ADD COLUMN(deptname VARCHAR(20));
SELECT * FROM newemp;
ALTER TABLE newemp DROP deptname;
SHOW TABLES;
SHOW DATABASES;
DESC newemp;
DROP TABLE newemp;

CREATE DATABASE ALBIN;
CREATE TABLE STUDENT(ROLLNO INT,STUDENTNAME VARCHAR(30),AGE INT);
DESC STUDENT;
ALTER TABLE STUDENT ADD DEPT VARCHAR(40);
DESC STUDENT;
ALTER TABLE STUDENT RENAME COLUMN ROLLNO TO ID;
INSERT INTO STUDENT VALUES(1,'user1',22,'testing');
INSERT INTO STUDENT VALUES(2,'user2',23,'dev');
INSERT INTO STUDENT VALUES(3,'user3',21,'hr');
ALTER TABLE STUDENT ADD COLUMN(MOBILE_NUMBER INT);
UPDATE STUDENT SET MOBILE_NUMBER=999999 WHERE ID=1;
UPDATE STUDENT SET MOBILE_NUMBER=999444 WHERE ID=2;

ALTER TABLE STUDENT DROP AGE;
SELECT * FROM STUDENT;
UPDATE STUDENT SET DEPT ='developer' WHERE DEPT='dev'; 
UPDATE STUDENT SET DEPT ='human resource' WHERE DEPT='hr'; 
SELECT * FROM STUDENT;

CREATE TABLE emp(empid int primary key, empname varchar(20),sal int);
insert into emp values(1,'albin',10000);
drop table emp;

create table emp(empid int,empname varchar(20),age int check(age>18));
insert into emp values(1,'albin',22);
insert into emp values(2,'albi',15);
drop table emp;

create table emp(empid int, empname varchar(20),country varchar(10) default 'INDIA');
insert into emp(empid,empname) values(1,'albin');
insert into emp values(2,'albi','USA');
select * from emp;

drop table emp;

create table emp(empid int,empname varchar(20),mobile varchar(20) unique);
insert into emp values(1,'user1',999999);
insert into emp values(2,'user2',999999);
insert into emp values(3,'usr3',7348374);
drop table emp;

create table emp(empid int,empname varchar(20),bloodgrp varchar(20) not null);
insert into emp values(1,'user1','A+');
insert into emp values(1,'user1',null);
drop table emp;

drop table dept;
create table dept(deptid int primary key,deptname varchar(20));
create table emp(empid int,empname varchar(20),deptid int, foreign key(deptid) references dept(deptid));
insert into dept values(1,'cs');
insert into dept values(2,'it');
insert into emp values(100,'albin',1);
insert into emp values(101,'gokul',3);
insert into emp values(102,'edwin',null);
drop table emp;
create table emp(empid int,empname varchar(20), sal int,deptname varchar(20));
insert into emp values(1,'user1',1000,'hr');
insert into emp values(2,'user2',2000,'dev');
insert into emp values(3,'user3',3000,'qa');
insert into emp values(4,'user4',4000,'qa');
insert into emp values(5,'user5',5000,'dev');
insert into emp values(6,'user6',6000,'qa');
insert into emp values(7,'user7',7000,'hr');

select deptname,max(sal) from emp group by deptname;
select deptname,max(sal) from emp group by deptname having max(sal)>4000;
select empid,empname from emp where deptname in('qa','dev');

select empid as 'employee id',empname as 'employee name' from emp;

select * from emp where deptname ='qa' and sal>3000;
select * from emp where deptname ='qa' or deptname = 'hr';
select * from emp where sal between 2500 and 4500;
insert into emp values(8,'user7',3000,null);
select * from emp where deptname is null;
select * from emp where deptname is not null;
select * from emp where deptname like 'd%';
select * from emp where deptname like '%v';
select * from emp where deptname like 'd_v';

create table books(bookid int,bookname varchar(20),category varchar(20),author varchar(20),price int);
insert into books values(1,'book1','fiction','raju',200);
insert into books values(2,'book2','non-fiction','guru',400);
insert into books values(3,'book3','non-fiction','swamy',500);
insert into books values(4,'book4','fiction','mahi',150);
insert into books values(5,'book5','non-fiction','pratap',300);

select * from books;
select category,count(bookid) from books group by category;
select count(bookid) from books;
select bookname,bookid,author from books where price>300 and price<500;
select bookname from books where author='mahi';
select price from books where author = 'guru';
select bookname from books where author = 'swamy' or author ='raju';
select bookname from books where author <>'pratap';
select min(price) from books group by category;
select bookname from books where category='fiction' and price>200;
select bookname,author from books where author like '%u';
drop table emp;
drop table dept;

create table emp(empid int,empname varchar(20),sal int,deptid int);
create table dept(deptid int,deptname varchar(20));

insert into emp values(101,'john',10000,1);
insert into emp values(102,'prakash',25000,2);
insert into emp values(103,'gowry',12000,2);
insert into emp values(104,'krishnan',15000,1);
insert into emp values(105,'kumar',28000,3);

insert into dept values(1,'hr');
insert into dept values(2,'testing');
insert into dept values(3,'development');
insert into dept values(4,'accounts');
insert into dept values(5,'admin');


select deptname from dept where deptid=(select deptid from emp where empname='prakash');
select count(empname) from emp where deptid=(select deptid from dept where deptname = 'hr');
select empname from emp where deptid=(select deptid from dept where deptname='testing') and sal=(select max(sal) from emp where deptid =(select deptid from dept where deptname='testing'));
select deptname from dept where deptid not in (select deptid from emp);
select empname from emp e where sal<(select avg(sal) from emp where deptid=e.deptid);
select empname from emp e where sal =(select max(sal) from emp where e.deptid=deptid);
select deptname from dept where deptid in (select deptid from emp where empname='krishnan' or empname='kumar');
select empname from emp where deptid=(select deptid from dept where deptname='hr') and sal>12000;

create table students(rollno int,student_name varchar(20));
create table courses(course_no varchar(10),course_name varchar(20),fee int);
create table course_enrolled(rollno int,course_no varchar(20));

insert into students values(1,'john');
insert into students values(2,'prakash');
insert into students values(3,'mano');
insert into students values(4,'raghav');
insert into students values(5,'kumar');

insert into courses values('c001','dos',1500);
insert into courses values('c002','mswindows',2000);
insert into courses values('c003','c++',3000);
insert into courses values('c004','c',2000);
insert into courses values('c005','java',3000);
insert into courses values('c006','oracle',4000);

insert into course_enrolled values(1,'c001');
insert into course_enrolled values(1,'c004');
insert into course_enrolled values(2,'c003');
insert into course_enrolled values(5,'c006');

select * from students;
select * from courses;
select * from course_enrolled;

select course_name from courses where course_no in (select course_no from course_enrolled where rollno=(select rollno from students where student_name='john'));
select course_name from courses where fee>3500;
select course_name from courses where course_no not in(select course_no from course_enrolled);
select fee from courses where course_no='c004';
select count(rollno) from course_enrolled where rollno=(select rollno from students where student_name='prakash');
select course_name from courses where course_no in (select course_no from course_enrolled);
select student_name from students where rollno in (select rollno from course_enrolled group by rollno having count(rollno)>1);
select student_name from students where rollno=(select rollno from course_enrolled where course_no=(select course_no from courses where course_name='oracle'));

use albin;
create table members(memberid int,membername varchar(10),category varchar(10));
create table transactions(orderid int,memberid int);
insert into members values(1,'user1','admin');
insert into members values(2,'user2','guest');
insert into members values(3,'user3','admin');
insert into members values(4,'user4','admin');

insert into transactions values(101,1);
insert into transactions values(102,1);
insert into transactions values(103,2);
insert into transactions values(104,3);
insert into transactions values(105,1);

select * from transactions;
select * from members;
select membername from members where memberid in (select memberid from transactions);
select membername from members where memberid=(select memberid from transactions where orderid=104);
select count(memberid) from members where category='admin' and memberid not in (select memberid from transactions);

show databases;
use albin;

create table books(bookid int,bookname varchar(20),price int);
create table tra(transactionid int,bookid int);
insert into books values(1,'c',100);
insert into books values(2,'c++',200);
insert into books values(3,'java',300);

insert into tra values(101,1);
insert into tra values(102,2);
insert into tra values(103,1);

select * from books;
select * from tra;
select books.bookid,books.bookname from books inner join tra on books.bookid=tra.bookid;
select books.bookid,books.bookname from books left join tra on books.bookid=tra.bookid;
select books.bookid,books.bookname from books right join tra on books.bookid=tra.bookid;
select * from books cross join tra;

create table emp(empid int, empname varchar(20),managerid int);
insert into emp values(1,'user1',4);
insert into emp values(2,'user2',3);
insert into emp values(3,'user3',1);
insert into emp values(4,'user4',2);

select * from emp;

select e1.empname,e2.empname as manager from emp e1,emp e2 where e1.managerid=e2.empid;
drop table emp;
create table emp(empid int, empname varchar(20),sal int,deptid int);
create table dept(deptid int,deptname varchar(20));

insert into emp values(1,'user1',1000,1);
insert into emp values(2,'user2',2000,1);
insert into emp values(3,'user3',3000,2);
insert into emp values(4,'user4',4000,2);

insert into dept values(1,'hr');
insert into dept values(2,'testing');
insert into dept values(3,'dev');
select * from emp;
select empname,sal,deptid from emp e where sal>(select avg(sal) from emp d where e.deptid=d.deptid);

select empid,empname,deptid from emp where deptid=any(select deptid from dept where deptname='testing' or deptname ='hr');

create table testindex(id int primary key,fname varchar(20));
insert into testindex values(1,'user1');
insert into testindex values(3,'user3');
insert into testindex values(2,'user2');
select * from testindex;
show index from testindex;
create index myindex on testindex(fname);

delimiter //
create procedure p1()
begin 
	select * from emp;
end //
delimiter ;
call p1;

delimiter //
create procedure p2(a int,b int)
begin
	select 'sum is ' +(a+b);
end //
delimiter ;
call p2(3,3);

delimiter //
create procedure p3(a int,b int,out c int)
begin
	set c= a+b;
end //
delimiter ;
call p3(5,5,@output);
select @output;

delimiter //
create procedure p4(in id int)
begin
	select * from emp where empid=id;
end //
delimiter ;
call p4(1);

delimiter //
create trigger t1 after insert on emp for each row
begin 
	set @count='record added';
end //
delimiter ;

insert into emp values(5,'user5',10000,2);
select @count;

delimiter //
create trigger t2 after delete on emp for each row
begin
	set @count='record deleted';
end //
delimiter ;
delete from emp where empid=5;
select @count;


delimiter //
create procedure p5(in name1 varchar(20))
begin
	Select count(empid) from emp where empname=name1;
end //
delimiter ;
select * from emp;
call p5('user1');


delimiter //
create trigger t3
after insert
on emp for each row
begin
	select count(empid) into @count from emp;
end //
delimiter ;

delimiter //
create trigger t4
after update
on emp for each row
begin
	select count(empid) into @count from emp;
end //
delimiter ;

delimiter //
create trigger t5
after delete
on emp for each row
begin
	select count(empid) into @count from emp;
end //
delimiter ;
select * from emp;
insert into emp values(10,'user10',12000,12);
select @count;
update emp set sal=15000 where empid=10;
select @count;
delete from emp where empid=10;
select @count;

use albin;
drop table books;
create table books(bookid int,bookname varchar(20),author varchar(10),price int,publisher varchar(10));
insert into books values(1,'c','balu',100,'bpb');
insert into books values(2,'c++','gowri',200,'mcgraw');
insert into books values(3,'java','mano',300,'bpb');
insert into books values(4,'perl','james',400,'bpb');
insert into books values(5,'ruby','antony',500,'mcgraw');
select * from books;
select bookname from books;
select count(bookid) from books;
select author from books where bookname='c++';
select bookname from books where price>200;
select bookname from books where price>200 and price<400;
select bookname from books where author='antony';
select bookname from books where price=(select max(price)from books);
select bookname from books where price=(select min(price) from books);
select count(bookid),publisher from books group by publisher;
select avg(price) from books where publisher='mcgraw';
select * from books limit 2;
select * from books order by bookid desc limit 2;

create table employee(empid int,empname varchar(20),deptid int,salary int);
create table dept(deptid int,deptname varchar(20));

insert into employee values(1,'john',101,1000);
insert into employee values(2,'Mano',102,2000);
insert into employee values(3,'Prakash',101,3000);
insert into employee values(4,'Venu',102,4500);
insert into employee values(5,'Abirami',101,5000);

insert into dept values(101,'hr');
insert into dept values(102,'testing');
insert into dept values(103,'development');
insert into dept values(104,'accounts');

select empname from employee where deptid=(select deptid from dept where deptname='testing');
select count(empid) from employee where deptid=(select deptid from dept where deptname='accounts');
select deptname from dept where deptid = (select deptid from employee where empname='john');
select deptname from dept where deptid=(select deptid from employee where salary=(select max(salary) from employee));
select deptname from dept where deptid=(select deptid from employee where salary=(select min(salary) from employee));
select deptname from dept where deptid=(select deptid from employee group by deptid order by count(deptid) desc limit 1);
select deptname from dept where deptid not in(select deptid from employee);
select empname from employee where deptid not in(select deptid from dept where deptname='hr');
select empname from employee order by salary desc limit 1 offset 1;
select empname from employee where salary>(select salary from employee where empname='mano');
select empname from employee where salary=(select max(salary) from employee where deptid=(select deptid from dept where deptname='testing'));
select empid,empname,deptname from employee,dept where employee.deptid=dept.deptid;
select deptid,deptname from dept where deptid not in(select deptid from employee);

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