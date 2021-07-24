
echo "Enter a number:"
read a
echo "Enter another number:"
read b
a=$((a+b))
b=$((a-b))
a=$((a-b))
echo "a after swapping is $a and b is $b"


