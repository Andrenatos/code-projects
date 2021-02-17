create database Natal;

use Natal;

/*tables*/


create table Crianças()
(ID_criança Int(10) Primary Key,
Nome Varchar(30),
Morada Varchar(30),
Data_Nascimento Date());


create table Brinquedos
(ID_Brinq Int(10) Primary Key,
Brinquedo Varchar(50),
Preco Numeric(10,2));


create table Duendes
(Cod_Duende Int(10) Primary Key,
Nome Varchar(20));


create table Entega
(ID_Entrega Int Primary Key,
Cod_Duende Varchar(40) references Duendes(Cod_Duende),
ID_Crianca Int(10) references Criancas(ID_Crianca),
ID_Brinq int(10) references Brinquedos(ID_Brinq));

/*Alters*/

ALTER TABLE Criancas
add Sexo Varchar(10) NOT NULL , check (Sexo IN ('rapaz','rapariga'));

ALTER TABLE Duendes
Modify Cod_Duende Varchar(20);

/*insert*/

insert into Criancas
values
(1,'Ana Silva','Lisboa',19980512,'rapariga'),
(2,'Ivo Silva','Porto',19991009,'rapaz');

insert into Brinquedos
values
(11,'Barbie',18.30),
(13,'Batalha Naval',21.20),
(14,'Jogo da Glória',7.5);

/*deletes*/

Delete From Brinquedos
Where ID_Brinq = 13;

/*Updates*/

Update Brinquedos
Set Preco = Preco * 1.05
Where Brinquedo = 'Barbie';

/*Alters*/

ALTER TABLE Criancas
Drop Morada;

/*Updates*/

Update Brinquedos
Set Preco = 5.99
Where Brinquedo = 'Jogo da Glória';

use mysql;
select user
from mysql.user;

Show databases;

use Natal;

