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
import java.sql.Statement;
import java.awt.event.ActionEvent;
import javax.swing.SwingConstants;
import javax.swing.JPasswordField;
import java.awt.Font;
public class RezervacijaClana {
JFrame frame;
 private JTextField dat_vrijeme;
 private final ButtonGroup buttonGroup = new ButtonGroup();
 /**
 * Launch the application.
 */
 public static void main(String[] args) {
 EventQueue.invokeLater(new Runnable() {
 public void run() {
 try {
	 RezervacijaClana window = new RezervacijaClana();
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
 public RezervacijaClana() {
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

 JLabel lblNewLabel = new JLabel("DATUM");
 lblNewLabel.setBounds(79, 72, 46, 14);
 frame.getContentPane().add(lblNewLabel);

 JLabel lblNewLabel_1 = new JLabel("IME ČLANA");
 lblNewLabel_1.setBounds(79, 115, 95, 14);
 frame.getContentPane().add(lblNewLabel_1);

 JLabel lblNewLabel_2 = new JLabel("TEREN");
 lblNewLabel_2.setBounds(79, 156, 79, 14);
 frame.getContentPane().add(lblNewLabel_2);

 dat_vrijeme = new JTextField();
 dat_vrijeme.setBounds(184, 69, 86, 20);
 frame.getContentPane().add(dat_vrijeme);
 dat_vrijeme.setColumns(10);
 
 final JComboBox comboBox = new JComboBox();
 comboBox.setBounds(184, 152, 86, 22);
 frame.getContentPane().add(comboBox);
 
 try
	{
		Class.forName("com.mysql.cj.jdbc.Driver");
		Connection con=DriverManager.getConnection("jdbc:mysql://student.veleri.hr/ljuras?serverTimezone=UTC", "ljuras", "11");
		
		String upit="SELECT * FROM TEREN";
		Statement stmt=con.createStatement();
		
		ResultSet rs=stmt.executeQuery(upit);
		
		while (rs.next()) 
		{
			String podatak=rs.getString(3); 
			comboBox.addItem(podatak);
		}
	}
	catch (Exception e2)
	{
		JOptionPane.showMessageDialog(null, e2);
	}
 
 final JComboBox comboBox_1 = new JComboBox();
 comboBox_1.setBounds(184, 111, 86, 22);
 frame.getContentPane().add(comboBox_1);
 
 try
	{
		Class.forName("com.mysql.cj.jdbc.Driver");
		Connection con=DriverManager.getConnection("jdbc:mysql://student.veleri.hr/ljuras?serverTimezone=UTC", "ljuras", "11");
		
		String upit="SELECT * FROM ClanoviProjekt";
		Statement stmt=con.createStatement();
		
		ResultSet rs=stmt.executeQuery(upit);
		
		while (rs.next()) 
		{
			String podatak=rs.getString(2); 
			comboBox_1.addItem(podatak);
		}
	}
	catch (Exception e2)
	{
		JOptionPane.showMessageDialog(null, e2);
	}
 
 

 JButton btnNewButton = new JButton("UNESI ");
 btnNewButton.addActionListener(new ActionListener() {
 public void actionPerformed(ActionEvent e) {

	 String dat_vrijemes,clans,combos;
	 dat_vrijemes=dat_vrijeme.getText();
	 clans=(String)(comboBox.getSelectedItem());
	 combos=(String)(comboBox_1.getSelectedItem());
	 
 try {
	 	
	 	Class.forName("com.mysql.cj.jdbc.Driver");
		Connection con=DriverManager.getConnection("jdbc:mysql://student.veleri.hr/ljuras?serverTimezone=UTC", "ljuras", "11");
		String upit="SELECT * FROM rezervacija WHERE datum_rezervacije=?";
		PreparedStatement ps=con.prepareStatement(upit);
		ps.setString(1, dat_vrijemes);
		
		
		ResultSet rs=ps.executeQuery();
		if (rs.next()) 
		{
			JOptionPane.showMessageDialog(null, "Datum je već rezerviran");
		}
		else
		{
	 
		String upitUbaci="INSERT INTO rezervacija(datum_rezervacije, clan_ime, teren) VALUES (?,?,?)";
		 PreparedStatement psUbaci=con.prepareStatement(upitUbaci);
		 psUbaci.setString(1, dat_vrijemes);
		 psUbaci.setString(3, clans);
		 psUbaci.setString(2, combos);
 
 int redakaUbaceno=psUbaci.executeUpdate();
 if (redakaUbaceno==1)
 {
 JOptionPane.showMessageDialog(null, "Rezervacija je zapisana.");
 }
 else
 {
 JOptionPane.showMessageDialog(null, "Dogodila se greška prilikom unosa.");
 }
 }

}
 catch(Exception e1)
 {
 JOptionPane.showMessageDialog(null, e1);
 }
 
 
 
	
	
	
}
});
 btnNewButton.setBounds(184, 238, 147, 23);
 frame.getContentPane().add(btnNewButton);
 
 JLabel lblNewLabel_3 = new JLabel("REZERVACIJA TERMINA");
 lblNewLabel_3.setFont(new Font("Tahoma", Font.BOLD, 25));
 lblNewLabel_3.setBounds(115, 29, 395, 29);
 frame.getContentPane().add(lblNewLabel_3);
 

 
 }
 public void showWindow()
	{
		frame.setVisible(true);
	}
}