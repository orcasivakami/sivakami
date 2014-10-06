/*
 * Simple Client/Server Architecture
 */
package clientserver_communication;

import java.io.PrintWriter;
import java.io.IOException;
import java.util.Date;
import java.net.ServerSocket;
import java.net.Socket;

/**
 * @author Sivakami, Sep 2014
 */
public class Server_communication {

    public static void main(String[] args) throws IOException {
        ServerSocket l = new ServerSocket(3128);
        try {
            while (true) {
                Socket s = l.accept();
                try {
                    PrintWriter outline = new PrintWriter(s.getOutputStream(), true);
                    Date date = new Date();
                    outline.println("Hello time is: " + date.toString());
                } finally {
                    s.close();
                }
            }
        } finally {
            l.close();
        }
    }
}
