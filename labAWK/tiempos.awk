{
    if(NR > 1){
        s=0
        for (i=2; i<=NF; i++){            
            s+=$i
            val[i] = $i;  
        }
        prom = s/(NF - 1)  
        
        for (i in val) {
            d=val[i]-prom 
            s2+=d*d
        }
        print "Programa: " $1
        print "-promedio: " prom
        print "-desviacion estandar:"sqrt(s2/(NF-2)) "\n"
    } else {
        print "Tiempo promedio de ejecucion y desviacion standar de los siguientes programa :"
    }
}
