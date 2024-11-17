Create database Lab_Practical;
use Lab_Practical;

Create table A (
a1 int primary key,
a21 int,
a22 int,
a3 int,
Unique(a21, a22)
);

Create table B (
b1 int primary key
);

Create table A_R_B (
	a1 int, 
    b1 int, 
    foreign key (a1) references A(a1),
    foreign key (b1) references B(b1),
    primary key (a1,b1)
);

Create Table B_B2 (
	b1 int,
    b2 varchar(100),
    foreign key (b1) references B(b1),
    primary key(b1,b2)
);

describe B_B2;
