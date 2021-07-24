
echo "Enter the number numbers whose sum is to be displayed:" 
read N

sum=0
for((i=1;i<=N;i++)) 
do
sum=$((sum + i)) 

done

echo "The sum of first $N natural numbers =$sum" 




