-- Practice imp questions

create database prac;
use prac;

-- Question 1 -> solution
Create table M (
m1 int primary key,
m2 int,
m3 int,
p1 int not null
);

Create Table P(
p1 varchar(100) primary key,
p2 varchar(100)
);

Create Table N(
n1 int,
n2 int,
p1 varchar(100),
primary key (n1, p1),
foreign key (p1) references P(p1)
);

-- Question 2 -> solution
Create Table Student (
Roll_no int primary key,
name varchar (100)
);

Create Table Faculty(
fid int primary key,
fName varchar(100)
);

Create Table dependents (
name varchar(100),
dob Date,
fid int,
primary key(fid, name),
foreign key (fid) references Faculty(fid)
);

Create Table Student_Faculty (
fid int,
rollno int,
primary key(fid, rollno),
foreign key (fid) references Faculty(fid),
foreign key (rollno) references Student(Roll_no)
);

-- Question 3 -> solution
Create Table employees (
Eid int primary key,
hiredate date,
firstName varchar(100),
lastName varchar(100),
dob date,
salary decimal(12,2),
did int not null
);

Create Table department(
did int primary key,
dName varchar(255),
Manager_Id int not null,
Foreign Key (Manager_Id) references employees(Eid)
);

Alter Table employees add constraint fk_did foreign key (did) references department(did);

Create Table Projects (
Pid int primary key,
PName varchar(100),
startDate date,
endDate date,
budget int
);

Create Table Employee_Project(
Eid int not null,
Pid int not null,
noOfHrsWorked int,
foreign key (Eid) references employees(Eid),
foreign key (Pid) references Projects(Pid)
);


-- command to show schema : 
describe employees; 



