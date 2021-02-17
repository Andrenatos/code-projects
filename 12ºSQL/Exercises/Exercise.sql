CREATE user 'Renato'@'localhost';
GRANT CREATE ON *.* to 'Renato'@'localhost';

CREATE database Contactos;

use Contactos;

create table Pessoas
(Nome varchar(30) Primary Key,
Telef Varchar(9),
Email varchar(30));

describe Pessoas;

Insert into Pessoas
values
('Ana',911234567,'ana@mail.pt'),
('Eva',931234567,'eva@mail.pt'),
('Rui',961234567,'rui@mail.pt');

select * from Pessoas;

create user 'Maria'@'localhost'
Identified by 'maria';
GRANT ALL PRIVILEGES ON Contactos.Pessoas to 'Maria'@'localhost';

use mysql;
select user, password from user;

use Contactos;
SET PASSWORD for 'Renato'@'localhost' = PASSWORD('xaxaxa');

REVOKE select on *.* from 'Renato'@'localhost';

GRANT ALL PRIVILEGES ON Contactos to 'Renato'@'localhost';

GRANT select ON Contactos.* to 'Maria'@'localhost';

CREATE user 'Adriana'@'localhost'
Identified by 'professora';
GRANT ALL PRIVILEGES ON *.* TO 'Adriana'@'localhost' WITH 
GRANT OPTION;


DROP user 'Renato'@'localhost';

REVOKE ALL PRIVILEGES ON *.* from 'Maria'@'localhost';

SET PASSWORD for 'Maria'@'localhost' = PASSWORD('');


