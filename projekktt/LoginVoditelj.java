package projekktt;


import java.awt.EventQueue;



import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JOptionPane;
import javax.swing.JTextField;
import javax.swing.JPasswordField;
import javax.swing.JButton;
import java.awt.event.ActionListener;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.awt.event.ActionEvent;
import java.awt.Font;

public class LoginVoditelj {

	private JFrame frame;
	private JTextField brojMob;
	private JPasswordField lozinka;

	/**
	 * Launch the application.
	 */
	public static void main(String[] args) {
		EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
					LoginVoditelj window = new LoginVoditelj();
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
	public LoginVoditelj() {
		initialize();
	}

	/**
	 * Initialize the contents of the frame.
	 */
	private void initialize() {
		frame = new JFrame();
		frame.setBounds(100, 100, 516, 341);
		frame.setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE);
		frame.getContentPane().setLayout(null);
		
		JLabel lblNewLabel = new JLabel("Broj mobitela");
		lblNewLabel.setBounds(79, 98, 69, 14);
		frame.getContentPane().add(lblNewLabel);
		
		JLabel lblNewLabel_1 = new JLabel("Lozinka");
		lblNewLabel_1.setBounds(79, 136, 46, 14);
		frame.getContentPane().add(lblNewLabel_1);
		
		brojMob = new JTextField();
		brojMob.setBounds(174, 95, 108, 20);
		frame.getContentPane().add(brojMob);
		brojMob.setColumns(10);
		
		lozinka = new JPasswordField();
		lozinka.setBounds(174, 133, 108, 20);
		frame.getContentPane().add(lozinka);
		
		JButton btnNewButton = new JButton("LOGIN");
		btnNewButton.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				
				String brojMobs, lozinkas;
				
				brojMobs=brojMob.getText();
				lozinkas=new String(lozinka.getPassword());
				
				try
				{
					Class.forName("com.mysql.cj.jdbc.Driver");
					Connection con=DriverManager.getConnection("jdbc:mysql://student.veleri.hr/ljuras?serverTimezone=UTC", "ljuras", "11");
					String upit="SELECT * FROM RegistarProjekt WHERE broj_mob=? AND lozinka=?";
					PreparedStatement ps=con.prepareStatement(upit);
					ps.setString(1, brojMobs);
					ps.setString(2, lozinkas);
					
					ResultSet rs=ps.executeQuery();
					
					if (rs.next())
					{
						Voditelj_Izbornik gi=new Voditelj_Izbornik();
						gi.showWindow();
					}
					else
					{
						JOptionPane.showMessageDialog(null, "Krivi broj mobitela ili password");
					}
					
					
				}
				catch(Exception e1)
				{
					JOptionPane.showMessageDialog(null, e1);
					
				}
				
				
			}
		});
		btnNewButton.setBounds(174, 186, 86, 20);
		frame.getContentPane().add(btnNewButton);
		
		JLabel lblNewLabel_2 = new JLabel("UNOS PODATAKA VODITELJ");
		lblNewLabel_2.setFont(new Font("Tahoma", Font.PLAIN, 18));
		lblNewLabel_2.setBounds(114, 41, 311, 14);
		frame.getContentPane().add(lblNewLabel_2);
	}
	
	public void showWindow()
	{
		frame.setVisible(true);
	}
}
