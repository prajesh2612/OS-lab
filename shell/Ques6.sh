echo "Enter the limit of the Fibonacci series:"
read n
a=0
b=1
echo "The fibonacci series upto first $n terms is:"
echo "$a"
echo "$b"
for((i=3;i<=n;i++))
do
c=$((a + b))
echo "$c"
a=$b
b=$c
done 
