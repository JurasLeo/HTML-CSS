package projekktt;
import java.awt.EventQueue;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JOptionPane;
import javax.swing.JTextField;
import javax.swing.JComboBox;
import javax.swing.JRadioButton;
import javax.swing.JScrollPane;
import javax.swing.JTable;
import javax.swing.ButtonGroup;
import javax.swing.JButton;
import javax.swing.DefaultComboBoxModel;
import java.awt.event.ActionListener;
import java.awt.event.MouseAdapter;
import java.awt.event.MouseEvent;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.Statement;
import java.awt.event.ActionEvent;
import javax.swing.SwingConstants;
import javax.swing.table.DefaultTableModel;
import javax.swing.JPasswordField;
import java.awt.Font;
public class Racuni {
JFrame frame;
 private JTextField iznos;
 private final ButtonGroup buttonGroup = new ButtonGroup();
 private JTextField dat_izd;
 private DefaultTableModel tableModel;
 private JTable table;
 private JTextField id;
 private JTextField ime;
 /**
 * Launch the application.
 */
 public static void main(String[] args) {
 EventQueue.invokeLater(new Runnable() {
 public void run() {
 try {
	 Racuni window = new Racuni();
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
 public Racuni() {
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
 
 String[] columns = {"REZERVACIJA ID", "DATUM REZERVACIJE","TEREN","CLAN"};
 tableModel = new DefaultTableModel(columns, 0);

 try {
     Class.forName("com.mysql.cj.jdbc.Driver");
     Connection con = DriverManager.getConnection("jdbc:mysql://student.veleri.hr/ljuras?serverTimezone=UTC", "ljuras", "11");
     String upit = "SELECT * FROM rezervacija";
     Statement stmt = con.createStatement();

     ResultSet rs = stmt.executeQuery(upit);

     while (rs.next()) {
         int id = rs.getInt("id");
         String datum_rez = rs.getString("datum_rezervacije");
         String ime_clan = rs.getString("clan_ime");
         String teren = rs.getString("teren");
 

         // Add data to the table model
         tableModel.addRow(new Object[]{id, datum_rez, ime_clan, teren});
     }

 } catch (Exception e2) {
     JOptionPane.showMessageDialog(null, e2);
 }

 frame.getContentPane().setLayout(null);
 
 JScrollPane scrollPane = new JScrollPane();
 scrollPane.setBounds(0, 43, 561, 238);
 frame.getContentPane().add(scrollPane);
 
 table = new JTable(tableModel);
 scrollPane.setViewportView(table);

 JLabel lblNewLabel = new JLabel("DATUM IZDAVANJA");
 lblNewLabel.setBounds(10, 302, 105, 14);
 frame.getContentPane().add(lblNewLabel);

 JLabel lblNewLabel_2 = new JLabel("IZNOS");
 lblNewLabel_2.setBounds(10, 339, 79, 14);
 frame.getContentPane().add(lblNewLabel_2);

 iznos = new JTextField();
 iznos.setBounds(149, 336, 96, 20);
 frame.getContentPane().add(iznos);
 iznos.setColumns(10);
 
 id = new JTextField();
 id.setBounds(389, 299, 96, 20);
 frame.getContentPane().add(id);
 id.setColumns(10);
 
 ime = new JTextField();
 ime.setBounds(389, 346, 96, 20);
 frame.getContentPane().add(ime);
 ime.setColumns(10);
 
 
 

 table.addMouseListener(new MouseAdapter()
	{
		public void mouseClicked(MouseEvent e)
		{
			int odabraniRedak=table.getSelectedRow();
			id.setText(table.getValueAt(odabraniRedak,0).toString());
			ime.setText(table.getValueAt(odabraniRedak,3).toString());
			
			
		}
	});
 

 JButton btnNewButton = new JButton("UNESI ");
 btnNewButton.addActionListener(new ActionListener() {
 public void actionPerformed(ActionEvent e) {

	 String dat_izds,clans,iznoss;
	 clans=ime.getText();
	 dat_izds=dat_izd.getText();
	 iznoss=iznos.getText();
	 
	 if (dat_izds.equals("") || iznoss.equals("") ||clans.equals("")) {
			JOptionPane.showMessageDialog(null, "Unesite sve podatke!");
			
		}

		else {
	 
 try {
	 	
	 	Class.forName("com.mysql.cj.jdbc.Driver");
		Connection con=DriverManager.getConnection("jdbc:mysql://student.veleri.hr/ljuras?serverTimezone=UTC", "ljuras", "11");
		
		String upitUbaci="INSERT INTO RacuniProjekt(ImeClana, DatumRac, UkIznos) VALUES (?,?,?)";
		 PreparedStatement psUbaci=con.prepareStatement(upitUbaci);
		 psUbaci.setString(2, dat_izds);
		 psUbaci.setString(3, iznoss);
		 psUbaci.setString(1, clans);
 
 int redakaUbaceno=psUbaci.executeUpdate();
 if (redakaUbaceno==1)
 {
 JOptionPane.showMessageDialog(null, "Račun je zapisan.");
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
 //////BRISAAAAAAANJEEEEEEEEEEEEEEEEEEEEEEE////////////////////////////////////////////////////
 
 DefaultTableModel model=(DefaultTableModel)table.getModel();
	int odabraniRedak=table.getSelectedRow();
	
	if (odabraniRedak>=0)
	{
		try
		{
			int id=Integer.parseInt(table.getValueAt(odabraniRedak,0).toString());
			
			Class.forName("com.mysql.cj.jdbc.Driver");
			Connection con=DriverManager.getConnection("jdbc:mysql://student.veleri.hr/ljuras?serverTimezone=UTC", "ljuras", "11");
			
			
			String upit="DELETE FROM rezervacija WHERE id=?";
			//String upit="DELETE FROM ClanoviProjekt WHERE clan_id=? AND ime=? AND prezime=?";
			PreparedStatement ps=con.prepareStatement(upit);
			ps.setInt(1, id);
			
			int rezultat=ps.executeUpdate();
			
			if (rezultat==1)
			{
				DefaultTableModel model1=(DefaultTableModel)table.getModel();
				model1.removeRow(odabraniRedak);
				JOptionPane.showMessageDialog(null, "Rezervacija uspješno maknuta");
			}
			else
			{
				JOptionPane.showMessageDialog(null, "Za rezervaciju nije moguće napraviti račun");
			}
			
			
		}
		catch(Exception e1)
		{
			JOptionPane.showMessageDialog(null, e1);
		}
	}
	else
	{
		
	}
	
	
	
}
});
 btnNewButton.setBounds(201, 392, 147, 23);
 frame.getContentPane().add(btnNewButton);
 
 dat_izd = new JTextField();
 dat_izd.setBounds(149, 299, 96, 20);
 frame.getContentPane().add(dat_izd);
 dat_izd.setColumns(10);
 
 JLabel lblNewLabel_3 = new JLabel("REZERVACIJA ID");
 lblNewLabel_3.setBounds(279, 302, 100, 14);
 frame.getContentPane().add(lblNewLabel_3);
 
 JLabel lblNewLabel_1 = new JLabel("IME ČLANA");
 lblNewLabel_1.setBounds(279, 349, 100, 14);
 frame.getContentPane().add(lblNewLabel_1);
 
 JLabel lblNewLabel_4 = new JLabel("RAČUNI");
 lblNewLabel_4.setFont(new Font("Tahoma", Font.BOLD, 25));
 lblNewLabel_4.setBounds(220, 11, 111, 31);
 frame.getContentPane().add(lblNewLabel_4);
 

 

 

 

 
 }
 public void showWindow()
	{
		frame.setVisible(true);
	}
}