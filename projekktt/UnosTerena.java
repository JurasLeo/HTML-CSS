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
import java.awt.event.ActionEvent;
import javax.swing.SwingConstants;
import java.awt.Font;
public class UnosTerena {
 private JFrame frame;
 private JTextField naziv;
 private JTextField povrsina;
 private final ButtonGroup buttonGroup = new ButtonGroup();

 public static void main(String[] args) {
 EventQueue.invokeLater(new Runnable() {
 public void run() {
try {
		 UnosTerena window = new UnosTerena();
		 window.frame.setVisible(true);
		 } catch (Exception e) {
		 e.printStackTrace();
		 }
 }
 });
 }

 /**
  * @wbp.parser.entryPoint
  */
 public UnosTerena() {
 initialize();
 }

 private void initialize() {
 frame = new JFrame();
 frame.setBounds(100, 100, 575, 479);
 frame.setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE);
 frame.getContentPane().setLayout(null);

 JLabel lblNewLabel = new JLabel("Naziv");
 lblNewLabel.setBounds(95, 72, 46, 14);
 frame.getContentPane().add(lblNewLabel);

 JLabel lblNewLabel_1 = new JLabel("Vrsta");
 lblNewLabel_1.setBounds(95, 152, 46, 14);
 frame.getContentPane().add(lblNewLabel_1);

 JLabel lblNewLabel_4 = new JLabel("Površina");
 lblNewLabel_4.setBounds(95, 113, 79, 14);
 frame.getContentPane().add(lblNewLabel_4);

 naziv = new JTextField();
 naziv.setBounds(184, 69, 86, 20);
 frame.getContentPane().add(naziv);
 naziv.setColumns(10);
 
 final JComboBox comboBox = new JComboBox();
 comboBox.setModel(new DefaultComboBoxModel(new String[] {"", "TENISKI", "KOŠARKAŠKI", "NOGOMETNI", "DVORANA"}));
 comboBox.setBounds(184, 152, 86, 22);
 frame.getContentPane().add(comboBox);

 povrsina = new JTextField();
 povrsina.setBounds(184, 110, 86, 20);
 frame.getContentPane().add(povrsina);
 povrsina.setColumns(10);

 JButton btnNewButton = new JButton("UNESI TEREN");
 btnNewButton.addActionListener(new ActionListener() {
 public void actionPerformed(ActionEvent e) {

 String nazivs,povrsinas,combos;
 nazivs=naziv.getText();
 povrsinas=povrsina.getText();
 combos=(String)(comboBox.getSelectedItem());

 if (nazivs.equals("") || povrsinas.equals("")||combos.equals("")) {
		JOptionPane.showMessageDialog(null, "Unesite sve podatke!");
		
	}

	else {
 try
 {
 Class.forName("com.mysql.cj.jdbc.Driver");
 Connection
con=DriverManager.getConnection("jdbc:mysql://student.veleri.hr/ljuras?serverTimezone=UTC","ljuras", "11");
 String upit="INSERT INTO TEREN(NAZIV, VRSTA, POVRŠINA) VALUES (?,?,?)";
 PreparedStatement ps=con.prepareStatement(upit);
 ps.setString(1, nazivs);
 ps.setString(2, combos);
 ps.setString(3, povrsinas);


 int redakaUbaceno=ps.executeUpdate();
 if (redakaUbaceno==1)
 {
 JOptionPane.showMessageDialog(null, "Teren je zapisan u bazu.");
 }
 else
 {
 JOptionPane.showMessageDialog(null, "Dogodila se greška prilikom unosa.");
 }

 }
 catch(Exception e1)
 {
 JOptionPane.showMessageDialog(null, e1);
 }

	}
 }
 });
 btnNewButton.setBounds(184, 230, 147, 23);
 frame.getContentPane().add(btnNewButton);
 
 JLabel lblNewLabel_2 = new JLabel("NOVI TEREN");
 lblNewLabel_2.setFont(new Font("Tahoma", Font.PLAIN, 18));
 lblNewLabel_2.setBounds(198, 11, 197, 38);
 frame.getContentPane().add(lblNewLabel_2);
 
 }

public void showWindow() {
	{
		frame.setVisible(true);
	}
	
}
 
}