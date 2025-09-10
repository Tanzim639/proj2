import javax.swing.ImageIcon;
import javax.swing.JFrame;
import java.awt.Color;



public class jframe{
    public static void main(String[] args) {
        //Jframe = a GUI window to add opponants to

        JFrame frame = new JFrame(); //creates a frame
        frame.setTitle("Jfarme title goes here"); // title of frame
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE); // get close when hit x button 
        frame.setResizable(false); //prevent frame from being resize

        frame.setSize(420,420); //sets x and y dimension
        frame.setVisible(true); //makes frame visible

        ImageIcon image = new ImageIcon("brocode.png"); // set an image icon
        frame.setIconImage(image.getImage());
        frame.getContentPane().setBackground(new Color(123,50,250)); //background color


    }
} 