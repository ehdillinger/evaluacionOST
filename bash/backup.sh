#!/bin/bash

#DATE=date

FILENAME=respaldo.tar.gz

SRCDIR=/home/$USER

DESDIR=/home/$USER/Documents


tar -cpzf $DESDIR/$FILENAME $SRCDIR
