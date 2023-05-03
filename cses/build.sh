
#!/bin/bash
if [ $# -eq 1 ]
then
  g++ $1 -o a.out -O2 && ./a.out
elif [ $# -eq 2 ]
then
  g++ $1 -o a.out -O2 && ./a.out < $2
elif [ $# -eq 3 ]
then
  g++ $1 -o a.out -O2 && ./a.out < $2 > $3
else
  echo "Parameters Error"
fi

# Usage in vim
# :w | ./build.sh %
# :w | ./build.sh % path_to_input
