package projekktt;
import projekktt.PregledClana;

import java.awt.EventQueue;

import javax.swing.JFrame;
import javax.swing.JButton;
import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;
import javax.swing.JLabel;
import java.awt.Font;
public class Voditelj_Izbornik {

	private JFrame frame;

	/**
	 * Launch the application.
	 */
	public static void main(String[] args) {
		EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
					Voditelj_Izbornik window = new Voditelj_Izbornik();
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
	public Voditelj_Izbornik() {
		initialize();
	}

	/**
	 * Initialize the contents of the frame.
	 */
	private void initialize() {
		frame = new JFrame();
		frame.setBounds(100, 100, 641, 403);
		frame.setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE);
		frame.getContentPane().setLayout(null);
		
		JButton btnNewButton = new JButton("TERENI");
		btnNewButton.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				
				UnosTerena teren=new UnosTerena();
				teren.showWindow();
			}
		});
		btnNewButton.setBounds(359, 69, 184, 81);
		frame.getContentPane().add(btnNewButton);
		
		JButton btnPregledFilma = new JButton("ČLANOVI");
		btnPregledFilma.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				
				PregledClana clan=new PregledClana();
				clan.showWindow();
				
			}
		});
		btnPregledFilma.setBounds(77, 69, 184, 81);
		frame.getContentPane().add(btnPregledFilma);
		
		JButton btnNewButton_1 = new JButton("REZERVACIJE");
		btnNewButton_1.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				
				Rezervacija rez=new Rezervacija();
				rez.showWindow();
			}
		});
		btnNewButton_1.setBounds(77, 161, 184, 81);
		frame.getContentPane().add(btnNewButton_1);
		
		JButton btnNewButton_2 = new JButton("RAČUNI");
		btnNewButton_2.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				
				Racuni rac=new Racuni();
				rac.showWindow();
				
			}
		});
		btnNewButton_2.setBounds(359, 161, 184, 81);
		frame.getContentPane().add(btnNewButton_2);
		
		JLabel lblNewLabel = new JLabel("IZBORNIK VODITELJ");
		lblNewLabel.setFont(new Font("Tahoma", Font.PLAIN, 18));
		lblNewLabel.setBounds(231, 11, 280, 37);
		frame.getContentPane().add(lblNewLabel);
	}
	
	public void showWindow()
	{
		frame.setVisible(true);
	}
}
