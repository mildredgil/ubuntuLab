#!/bin/bash
#MULTIPLICA

n=$1
digits="${#n}"
multiplica=1

for((i = 0 ; i < digits; i++ ))
do
div=`expr $n % 10`
multiplica=`expr $multiplica \* $div`
n=`expr $n / 10`
done
echo $multiplica
