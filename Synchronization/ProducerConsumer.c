#include<stdio.h>
#include<stdlib.h>

int mutex=1,full=0,empty=5,x=0;

int wait(int s)
{
    while(s<=0);
    return(--s);
}

int signal(int s)
{
    return(++s);
}

void producer()
{
	mutex=wait(mutex);
	full=signal(full);
	empty=wait(empty);
	x++;
	printf("\nProducer produces the item %d\n",x);
	mutex=signal(mutex);
}
 
void consumer()
{
	mutex=wait(mutex);
	full=wait(full);
	empty=signal(empty);
	printf("\nConsumer consumes item %d\n",x);
	x--;
	mutex=signal(mutex);
}

int main()
{
    int ch,f=1;
    while(f!=0)
    {
        printf("\nEnter your choice:\nEnter '1' for producing\nEnter '2' for consuming\nEnter '3' to exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            if((mutex==1)&&(empty!=0))
            {
                producer();
            }
            else
            {
                printf("\nThe buffer is full\n");
            }
            break;
            
            case 2:
            if((mutex==1)&&(full!=0))
            {
                consumer();
            }
            else
            {
                printf("\nBuffer is empty\n");
            }
            break;
			
			case 3:
			f=0;
			break;
		}
	}
	return 0;
}

