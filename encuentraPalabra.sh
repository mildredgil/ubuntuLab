#!/bin/bash
#encuentraPalabra

palabra=$1
echo `grep -i -w $palabra archivo3 | wc -l`