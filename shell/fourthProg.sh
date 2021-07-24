echo "Enter your choice:"
echo "Enter '+' for addition"
echo "Enter '-' for substraction"
echo "Enter '*' for multiplication"
echo "Enter '/' for division"
echo "Enter '%' for modulus"
read ch
echo "Enter operands for $ch operation:"
read a
read b
case $ch in
"+") echo "The result is $((a+b))"
;;
"-") echo "The result is $((a-b))"
;;
"*") echo "The result is $((a*b))"
;;
"/") echo "The result is $((a/b))"
;;
"%") echo "The result is $((a%b))"
;;


esac

