#!/bin/bash
#cuentaPalabras

archivo=$1
rm nuevo
cat $archivo | tr -d [:punct:] | tr [:space:] '\n' | sort | uniq >> nuevo

while read line 
do
echo $line
echo `grep -i -w $linea $archivo | wc -l`
#linea="linea" `grep -i -w $linea $archivo | wc -l`
done <nuevo