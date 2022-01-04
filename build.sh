gcc -O3 main.c buffer.h buffer.c 
if [ "$1" == "-run" ]; then
    ./main
fi
