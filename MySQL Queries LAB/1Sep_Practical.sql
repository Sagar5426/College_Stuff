Create database practical;
use practical;

Create Table A (
a1 int primary key,
a2 int
);

Create Table B (
b1 int primary key,
b2 int
);

Create Table A_R1_B (
a1 int,
b1 int,
x int,
Foreign key (a1) references A(a1),
Foreign key (b1) references B(b1),
primary key (a1,b1)
);

Create Table C (
c1 int,
c2 int,
b1 int,
foreign key(b1) references B(b1),
primary key(c1, b1)
);
