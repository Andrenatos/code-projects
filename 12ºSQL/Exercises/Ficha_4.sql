create database Ficha4;

use Ficha4;

create table Utilizador
(num int auto_increment primary key,
login varchar(30) NOT NULL,
joined date,
nome varchar(20),
data_nascimento date,
sexo varchar(1) NOT NULL,
telefone int(9),
email varchar(15) NOT NULL); 

insert into Utilizador values
(1,"joao.pinto",'2019/12/01',"Joao Pinto",'1976/12/19',"M",912582582,"'azulibranco@fcp.pt"),
(2,"semedo",'2019/12/02',"Carlos Semedo",'1985/06/02',"M",223774327,"semedo@xpto.com"),
(3,"maria",'2019/12/02'"Maria Silva",'2005/11/17',"F",939939939,"maria@xyz.pt"),
(4,"pedro",'2019/12/10',"Pedro Costa",'1985/01/03',"M",915874587,"Pc12345@xpto.com"),
(5,"mendocas",'2019/12/11',"Filipa Mendes",'2002/05/03',"F",936958472,"filipa.mendes@gmail.com"),
(6,"eva",'20191210',"Eva Mendes",'1975/11/18',"F",987654321,"I_ate_the_aplle@paradise.com"),
(7,"pedro2",'2019/12/16',"Pedro Simões",'1993/02/22',"M",968527412,"simoes333@gmail.com");


create table Postagem
(num int auto_increment primary key,
autor int NOT NULL,
data_criacao date NOT NULL,
conteudo varchar (20) NOT NULL,
cod_autor int references Utilizador (num));

insert into Postagem values
(1,1,'2020/01/13',"Comigo, ou sem-migo, o Porto vai ser campeão!"),
(2,1,'2020/02/01',"O meu coração só tem uma cor: azul e branco"),
(3,1,'2020/02/13',"Não foi nada de especial, chutei com o pé que estava mais a mão!"),
(4,2,'2019/12/23',"Nothing to do except posting ... anyone there?"),
(5,2,'2019/12/24',"I guess nobody is online!"),
(6,8,'2020/01/01',"Joker, you are dead!"),
(7,8,'2020/02/10',"Catwoman, I love you!"),
(8,9,'2020/02/10',"Batman is a troll! Joker is my sweetheart these days!"),
(9,9,'2020/02/18',"Joker is a busy man, he has no time for social networking");

create table comentario
(num int auto_increment primary key,
post int NOT NULL,
autor int NOT NULL,
criacao date NOT NULL,
conteudo varchar(50) NOT NULL,
cod_post int references Postagem (num),
autor int references Utilizador (num));

insert into comentario values
(1,1,2,'2020/01/13',"Grande João Pinto!"),
(2,1,3,'2020/01/13',"Yes!"),
(3,1,1,'2020/01/13',"Obrigado!"),
(4,8,2,'2020/02/12',"Poor Batman!"),
(5,8,9,'2020/02/11',"Get a life darling!");





