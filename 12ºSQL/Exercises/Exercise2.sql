--
create database Revisoes;
use Resisoes;

--

create table Clientes
(BI int primary key,
Nome varchar(20),
morada varchar(20),
telefone int,
Email varchar(30));

create table Produtos
(IDProduto int primary key,
nome varchar(15),
preço int,
IDmarca int references Marca (IDMarca),
idmodelo int references Modelo (idmodelo));

create table Marca
(IDMarca int auto_increment primary key,
descriçao varchar(15));

create Table Modelo 
(idmodelo int primary key,
descriçao varchar(15));

create table Compra
(NRegisto int auto_increment primary key,
idCliente int references Clientes (idCliente),
idProduto int references Produtos (idProduto));

--Inserir dados

Insert into Clientes
values 
(123456,'Ana','Evora',266 000 001,'a@aerdl.eu'),
(123457,'Pedro','Lisboa',210 000 001,'b@aerdl.eu'),
(123458,'Amilcar','Evora',266 000 003,'c@aerdl.eu'),
(123459,'Josefina','Lisboa',210 000 002,'d@aerdl.eu'),
(123460,'Zulmira','Evora',266 000 002,'e@aerdl.eu');

Insert into Produtos
values
(1,'Produto A',100,1,1),
(2,'Produto B',50,1,2),
(3,'Produto C',25,2,1),
(4,'Produto D',30,1,1),
(5,'Produto E',50,2,2);

Insert into Modelo
values
(Null,'Modelo A'),
(Null,'Modelo B');

Insert into Compra
values
(Null,123456,3),
(Null,123457,4),
(Null,123458,1),
(Null,123459,2),
(Null,123460,5);

--consultas

Select Nome from Consultas 
Where Morada='Evora';

--consulta 2
Select BI from Clientes
Where Morada = 'Lisboa';

-- consulta 3
Select telefone from Clientes
where BI=123456;

--consulta 4
Select  BI, Nome from Clientes
where mOrada = 'Lisboa' and telefone=210000001;

--consulta 4
Select nome from Produtos
where idProduto=3;

--consulta 5
Select nome from Produtos
where IDMarca = 1 
order by nome ;

--consulta 6
Select IDMarca and idmodelo from Produtos
where idProduto=1 and nome='Produto A';

--consulta 8
Select Compras.idCliente from Compras, Produtos
where compras.idProduto=Produtos.idProduto and Produtos.nome='Produto A';

--consulta 9
Select Compras.idProduto from Clientes, Compras
where compras.idCliente=Clientes.BI and cliente.nome='Zulmira';

