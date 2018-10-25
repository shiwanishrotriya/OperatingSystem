import java.util.*;

public class Producer_Consumer {
    
    static int s=1;
    static int e=5;
    static int f=0;
    
    static int wait(int s)
    {
        return --s;
    }
    static int signal(int f)
    {
    
        return ++f;
    }
    
    static void produce()
    {
       s=wait(s);
       f=signal(f);
       e=wait(e);
        System.out.println("------Producing------");
       s=signal(s);
    }
    
    static void consume()
    {
        s=wait(s);
        e=signal(e);
        f=wait(f);
        System.out.println("------Consuming------");
        s=signal(s);
    
    }

    public static void main(String[] args) {
        
        System.out.println("*********Producer and Consumer*******");
        while(true)
        {
            System.out.println("1. Producer");
            System.out.println("2. Consumer");
            System.out.println("3. Quit");
         
            int ch;
            System.out.print("Choice : ");
            Scanner sc=new Scanner(System.in);
            ch=sc.nextInt();
            switch(ch)
            {
                case 1:
                {
                    if(s==1 && e!=0)
                        produce();
                       else
                        System.out.println("Producer is Waiting.......");
                    break;
                
                }
                
                case 2:
                {
                    if(s==1 && f!=0)
                        consume();
                    else 
                        System.out.println("Consumer is waiting.......");
                    break;
                
                }
                
                case 3:
                    System.exit(0);
            
            }
            
        }
    }
    
}