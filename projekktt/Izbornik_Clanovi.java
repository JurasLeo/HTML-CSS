package projekktt;

import java.awt.EventQueue;


import javax.swing.JFrame;
import javax.swing.JButton;
import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;
import javax.swing.JLabel;
import java.awt.Font;

public class Izbornik_Clanovi {

	private JFrame frame;

	/**
	 * Launch the application.
	 */
	public static void main(String[] args) {
		EventQueue.invokeLater(new Runnable() {
			public void run() {
				
				try {
					Izbornik_Clanovi window = new Izbornik_Clanovi();
					window.frame.setVisible(true);
				} catch (Exception e) {
					e.printStackTrace();
				}
				
			}
		});
	}

	/**
	 * Create the application.
	 * @wbp.parser.entryPoint
	 */
	public Izbornik_Clanovi() {
		initialize();
	}

	/**
	 * Initialize the contents of the frame.
	 */
	private void initialize() {
		frame = new JFrame();
		frame.setBounds(100, 100, 641, 403);
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		frame.getContentPane().setLayout(null);
		
		JButton btnNewButton = new JButton("REZERVIRAJ");
		btnNewButton.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				
				RezervacijaClana rez=new RezervacijaClana();
				rez.showWindow();
			}
		});
		btnNewButton.setBounds(86, 116, 184, 81);
		frame.getContentPane().add(btnNewButton);
		
		JButton btnPregledlana = new JButton("PREGLED TRENERA");
		btnPregledlana.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				
				Tereni tereni=new Tereni();
				tereni.showWindow();
				
			}
		});
		btnPregledlana.setBounds(334, 116, 184, 81);
		frame.getContentPane().add(btnPregledlana);
		
		JButton btnNewButton_2 = new JButton("PLAĆANJE");
		btnNewButton_2.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				
				Placanje tereni=new Placanje();
				tereni.showWindow();
				
			}
		});
		btnNewButton_2.setBounds(334, 216, 184, 81);
		frame.getContentPane().add(btnNewButton_2);
		
		JLabel lblNewLabel = new JLabel("ODABERITE OPCIJU");
		lblNewLabel.setFont(new Font("Tahoma", Font.BOLD, 25));
		lblNewLabel.setBounds(165, 37, 353, 49);
		frame.getContentPane().add(lblNewLabel);
	}
	
	public void showWindow()
	{
		frame.setVisible(true);
	}
}
