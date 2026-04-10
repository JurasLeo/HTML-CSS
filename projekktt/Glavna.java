package projekktt;
import projekktt.LoginVoditelj;



import java.awt.EventQueue;

import javax.swing.JFrame;
import javax.swing.JButton;
import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;
import javax.swing.JLabel;
import java.awt.Font;

public class Glavna {

	private JFrame frame;

	/**
	 * Launch the application.
	 */
	public static void main(String[] args) {
		EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
					Glavna window = new Glavna();
					window.frame.setVisible(true);

					
				} catch (Exception e) {
					e.printStackTrace();
				}
			}
		});
	}

	/**
	 * Create the application.
	 */
	public Glavna() {
		initialize();
	}

	/**
	 * Initialize the contents of the frame.
	 */
	private void initialize() {
		frame = new JFrame();
		frame.setBounds(100, 100, 551, 340);
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		frame.getContentPane().setLayout(null);
		
		JButton btnNewButton = new JButton("ČLANOVI");
		btnNewButton.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				
				LoginClanovi clanovi=new LoginClanovi();
				clanovi.showWindow();
				
			}
		});
		btnNewButton.setBounds(199, 92, 133, 51);
		frame.getContentPane().add(btnNewButton);
		
		JButton btnLogin = new JButton("VODITELJI");
		btnLogin.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
					
				LoginVoditelj voditelj=new LoginVoditelj();
				voditelj.showWindow();
			}
		});
		btnLogin.setBounds(199, 168, 133, 51);
		frame.getContentPane().add(btnLogin);
		
		JLabel lblNewLabel = new JLabel("ČLAN/VODITELJ\r\n");
		lblNewLabel.setFont(new Font("Tahoma", Font.PLAIN, 18));
		lblNewLabel.setBounds(199, 27, 215, 54);
		frame.getContentPane().add(lblNewLabel);
	}
}
