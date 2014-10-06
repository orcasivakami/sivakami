/*
 * Simple Client/Server Architecture
 */
package clientserver_communication;

import java.io.InputStreamReader;
import java.io.IOException;
import java.io.BufferedReader;
import java.net.Socket;
import javax.swing.JOptionPane;

/**
 * @author Sivakami, Sep 2014
 */
public class Client_communication {
    public static void main(String[] args) throws IOException {
      String serveraddress = JOptionPane.showInputDialog("Enter the IP address of the machine\n that run the date service at 3128");
      Socket s  = new Socket(serveraddress, 3128);
      BufferedReader br = new BufferedReader(new InputStreamReader(s.getInputStream()));
      String ip = br.readLine();
      JOptionPane.showMessageDialog(null, ip);
      System.exit(0);
    }
}
