echo "Enter the marks of the student:"
read m
if [ $m -ge 90 -a $m -le 100 ]
then
echo "S grade"
elif [ $m -ge 80 -a $m -lt 90 ]
then
echo "A grade"
elif [ $m -ge 70 -a $m -lt 80 ]
then
echo "B grade"
elif [ $m -ge 60 -a $m -lt 70 ]
then
echo "C grade"
elif [ $m -ge 50 -a $m -lt 60 ]
then
echo "D grade"
elif [ $m -ge 40 -a $m -lt 50 ]
then
echo "E grade"
else
echo "Fail"
fi
 
