read -p "n1: " n1
read -p "n2: " n2
read -p "n3: " n3


if [ $n1 -eq $n2 -a $n3 -eq $n2 ]
then
    echo "All lengths same"
elif [ $n1 -eq $n2 -o $n1 -eq $n3 -o $n2 -eq $n3 ]
    then
        echo "Two lengths same"
else
    echo "All lengths different"

fi
