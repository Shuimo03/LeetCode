Create table If Not Exists Logs (Id int, Num int)
Truncate table Logs
insert into Logs (Id, Num) values ('1', '1')
insert into Logs (Id, Num) values ('2', '1')
insert into Logs (Id, Num) values ('3', '1')
insert into Logs (Id, Num) values ('4', '2')
insert into Logs (Id, Num) values ('5', '1')
insert into Logs (Id, Num) values ('6', '2')
insert into Logs (Id, Num) values ('7', '2')

SELECT DISTINCT a.Num as ConsecutiveNums FROM (
SELECT t.Num,
      @cnt:=IF(@pre=t.Num, @cnt+1, 1) cnt,
      @pre:=t.Num pre
    FROM logs as t,(SELECT @pre:=null, @cnt:=0) b) as a
WHERE a.cnt >=3