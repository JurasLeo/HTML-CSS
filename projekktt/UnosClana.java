package projekktt;
import java.awt.EventQueue;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JOptionPane;
import javax.swing.JTextField;
import javax.swing.JComboBox;
import javax.swing.JRadioButton;
import javax.swing.ButtonGroup;
import javax.swing.JButton;
import javax.swing.DefaultComboBoxModel;
import java.awt.event.ActionListener;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.awt.event.ActionEvent;
import javax.swing.SwingConstants;
import javax.swing.JPasswordField;
import java.awt.Font;
public class UnosClana {
JFrame frame;
 private JTextField ime;
 private JTextField prezime;
 private JTextField brMob;
 private final ButtonGroup buttonGroup = new ButtonGroup();
 private JPasswordField lozinka;
 private JPasswordField ponLozinka;
 private final ButtonGroup buttonGroup_1 = new ButtonGroup();
 /**
 * Launch the application.
 */
 public static void main(String[] args) {
 EventQueue.invokeLater(new Runnable() {
 public void run() {
 try {
UnosClana window = new UnosClana();
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
 public UnosClana() {
 initialize();
 }
 /**
 * Initialize the contents of the frame.
 */
 private void initialize() {
 frame = new JFrame();
 frame.setBounds(100, 100, 575, 479);
 frame.setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE);
 frame.getContentPane().setLayout(null);

 JLabel lblNewLabel = new JLabel("Ime");
 lblNewLabel.setBounds(62, 72, 46, 14);
 frame.getContentPane().add(lblNewLabel);

 JLabel lblNewLabel_1 = new JLabel("Prezime");
 lblNewLabel_1.setBounds(62, 115, 46, 14);
 frame.getContentPane().add(lblNewLabel_1);

 JLabel lblNewLabel_2 = new JLabel("Godina ro\u0111enja");
 lblNewLabel_2.setBounds(62, 156, 79, 14);
 frame.getContentPane().add(lblNewLabel_2);

 JLabel lblNewLabel_3 = new JLabel("Spol");
 lblNewLabel_3.setBounds(62, 203, 46, 14);
 frame.getContentPane().add(lblNewLabel_3);

 JLabel lblNewLabel_4 = new JLabel("brMob");
 lblNewLabel_4.setBounds(62, 249, 79, 14);
 frame.getContentPane().add(lblNewLabel_4);

 ime = new JTextField();
 ime.setBounds(184, 69, 86, 20);
 frame.getContentPane().add(ime);
 ime.setColumns(10);

 prezime = new JTextField();
 prezime.setBounds(184, 112, 86, 20);
 frame.getContentPane().add(prezime);
 prezime.setColumns(10);
 
 final JRadioButton musko = new JRadioButton("Muski");
 buttonGroup_1.add(musko);
 musko.setHorizontalAlignment(SwingConstants.TRAILING);
 musko.setBounds(126, 199, 109, 23);
 frame.getContentPane().add(musko);
 
 final JRadioButton zena = new JRadioButton("Zenski\r\n");
 buttonGroup_1.add(zena);
 zena.setBounds(236, 199, 109, 23);
 frame.getContentPane().add(zena);
 
 final JComboBox comboBox = new JComboBox();
 comboBox.setModel(new DefaultComboBoxModel(new String[] {"", "1990", "1991", "1992", "1993", "1994", "1995", "1996", "1997", "1998", "1999", "2000", "2001", "2002", "2003", "2004", "2005", "2006", "2007", "2008"}));
 comboBox.setBounds(184, 152, 86, 22);
 frame.getContentPane().add(comboBox);

 brMob = new JTextField();
 brMob.setBounds(184, 246, 86, 20);
 frame.getContentPane().add(brMob);
 brMob.setColumns(10);
 
 lozinka = new JPasswordField();
 lozinka.setBounds(184, 292, 86, 20);
 frame.getContentPane().add(lozinka);
 
 ponLozinka = new JPasswordField();
 ponLozinka.setBounds(184, 333, 86, 20);
 frame.getContentPane().add(ponLozinka);

 JButton btnNewButton = new JButton("UNESI ");
 btnNewButton.addActionListener(new ActionListener() {
 public void actionPerformed(ActionEvent e) {

 String imes, prezimes, brMobs, combos, spols="",lozinkas, ponLozinkas;
 imes=ime.getText();
 prezimes=prezime.getText();
 brMobs=brMob.getText();
 combos=(String)(comboBox.getSelectedItem());
 lozinkas=new String(lozinka.getPassword());
 ponLozinkas=new String(ponLozinka.getPassword());
 
 
 if(musko.isSelected())
 {
 spols="M";
 }
 else if (zena.isSelected())
 {
 spols="Z";
 }
 else
 {
 JOptionPane.showMessageDialog(null, "Spol nije odabran");
 }
 
 
//provjera za ime
	int brojacI = 0;
	for (int i = 0; i < imes.length(); i++) {
		if (Character.isLetter(imes.charAt(i))==false) { //char(i) je broj --> brojac raste
			brojacI++;
		}
	}
	// provjera za prezime
	int brojacP = 0;
	for (int i = 0; i < prezimes.length(); i++) {
		if (Character.isLetter(prezimes.charAt(i))==false) { //char(i) je broj --> brojac raste
			brojacP++;
		}
	}
	int brojacMob = 0;
	for (int i = 0; i< brMobs.length(); i++) {
		if (Character.isDigit(brMobs.charAt(i))== false) {
			brojacMob++;
		}
	}


	
	//uvjeti ako se pojavi broj u imenu
	if (brojacI!=0) {
		JOptionPane.showMessageDialog(null, "Nepravilno uneseno ime!");
	}
	else if (brojacP!=0) {
		JOptionPane.showMessageDialog(null, "Nepravilno uneseno prezime!");
	}
	
	else if (brojacMob!= 0) {
		JOptionPane.showMessageDialog(null, "Kontakt mora sadržavati samo znamenke");
	}
	
	//obavezan upis svih podataka
	else if (imes.equals("") || prezimes.equals("")||spols.equals("") || brMobs.equals("") || combos.equals("") || lozinkas.equals("")) {
		JOptionPane.showMessageDialog(null, "Sve podatke je potrebno upisati ispravno!");
		
	}

	else {
 
 try
 {
	 if 
	 (lozinkas.equals(ponLozinkas))
		{
	 	
		 Class.forName("com.mysql.cj.jdbc.Driver");
			Connection con=DriverManager.getConnection("jdbc:mysql://student.veleri.hr/ljuras?serverTimezone=UTC", "ljuras", "11");
			String upit="SELECT * FROM ClanoviProjekt WHERE brojMob=?";
			PreparedStatement ps=con.prepareStatement(upit);
			ps.setString(1, brMobs);
			
			
			ResultSet rs=ps.executeQuery();
			if (rs.next()) 
			{
				JOptionPane.showMessageDialog(null, "Član već postoji u bazi");
			}
			else
			{
		
				 String UpitUnos="INSERT INTO ClanoviProjekt(ime, prezime, god_rod,spol, brojMob, lozinka) VALUES (?,?,?,?,?,?)";
				 PreparedStatement psUnos=con.prepareStatement(UpitUnos);
				 
				 psUnos.setString(1, imes);
				 psUnos.setString(2, prezimes);
				 psUnos.setString(3, combos);
				 psUnos.setString(4, spols);
				 psUnos.setString(5, brMobs);
				 psUnos.setString(6, lozinkas);
				 
				 int redakaUbaceno=psUnos.executeUpdate();
				if (redakaUbaceno==1)
				{
					JOptionPane.showMessageDialog(null, "Unos je uspješan");
				}
				else
				{
					JOptionPane.showMessageDialog(null, "Greška pri unnosu");
				}
			}
		}
		else
		{
			JOptionPane.showMessageDialog(null, "Lozinka se ne podudaraju");
		}
		
	}
	catch(Exception e1)
	{
		JOptionPane.showMessageDialog(null, e1);
	}
	
	
	}	
}
});
 btnNewButton.setBounds(185, 377, 147, 23);
 frame.getContentPane().add(btnNewButton);
 
 
 
 JLabel lblNewLabel_5 = new JLabel("Lozinka");
 lblNewLabel_5.setBounds(62, 295, 49, 14);
 frame.getContentPane().add(lblNewLabel_5);
 
 JLabel lblNewLabel_5_1 = new JLabel("Ponovi lozinku");
 lblNewLabel_5_1.setBounds(42, 339, 69, 14);
 frame.getContentPane().add(lblNewLabel_5_1);
 
 JLabel lblNewLabel_6 = new JLabel("OSOBNI PODACI ČLANA");
 lblNewLabel_6.setFont(new Font("Tahoma", Font.BOLD, 25));
 lblNewLabel_6.setBounds(141, 11, 305, 55);
 frame.getContentPane().add(lblNewLabel_6);
 
 }
 public void showWindow()
	{
		frame.setVisible(true);
	}
}