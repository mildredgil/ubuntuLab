BEGIN{
    palabra = $1
    linea = $1 ":\t" $3
}

$1 !~ /^(a|el|la|las|le|lo|los|este|esta|eso|ese|esos|esto|en|de|del|al|o|ni|no|si|con|sin|sino|se|y)$/{
    if(palabra == $1){
        linea = linea "\t" $3
    }  else {
        print linea
        palabra = $1
        linea = $1 ":\t" $3
    }
}
END {
    print linea 
}