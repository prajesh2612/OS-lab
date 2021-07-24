echo "Enter the first number:"
read a
echo "Enter the second number:"
read b
echo "Enter the third number:"
read c
if [ $a -lt $b -a $a -lt $c ]
then
echo "The smallest number is $a"
elif [ $b -lt $a -a $b -lt $c ]
then
echo "The smallest number is $b"
else
echo "The smallest number is $c"
fi 
