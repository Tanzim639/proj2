import java.util.*;
public class qone{
    public static void main(String[] args) {
        Scanner yo = new Scanner(System.in);
        double a=yo.nextDouble();
        double b=yo.nextDouble();
        double c=yo.nextDouble();
        double DD = b*b - 4*a*c;
         DD =Math.sqrt(DD);
        if(DD>0){
            System.out.println( (-b+DD)/(2*a) );
            System.out.println( (-b-DD)/(2*a) );
        }else if(DD==0){
            System.out.println( (-b)/(2*a) );
        }else{
            double D = b*b - 4*a*c;
            D=D*-1;
            D=Math.sqrt((D));
            double real = (-b)/(2*a);
            double imag = (D)/(2*a);
            System.out.print(real);
            System.out.print("+");
            System.out.print("i");
            System.out.print(imag);
            System.out.println();
            System.out.print(real);
            System.out.print("-");
            System.out.print("i");
            System.out.print(imag);

        }
    }
}