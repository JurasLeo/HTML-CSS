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
public class Placanje {
JFrame frame;
 private final ButtonGroup buttonGroup = new ButtonGroup();
 private DefaultTableModel tableModel;
 private JTable table;
 private JTextField pretraga;
 /**
 * Launch the application.
 */
 public static void main(String[] args) {
 EventQueue.invokeLater(new Runnable() {
 public void run() {
 try {
	 Placanje window = new Placanje();
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
 public Placanje() {
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
 
 String[] columns = {"BROJ RAČ", "IME ČLANA", "DATUM RAČ", "UKUPAN IZNOS"};
 tableModel = new DefaultTableModel(columns, 0);



 frame.getContentPane().setLayout(null);
 
 JScrollPane scrollPane = new JScrollPane();
 scrollPane.setBounds(0, 113, 561, 238);
 frame.getContentPane().add(scrollPane);
 
 table = new JTable(tableModel);
 scrollPane.setViewportView(table);
 
 
 

 

 JButton btnNewButton = new JButton("PLATI");
 btnNewButton.addActionListener(new ActionListener() {
 public void actionPerformed(ActionEvent e) {
	 
	 

	 DefaultTableModel model=(DefaultTableModel)table.getModel();
		int odabraniRedak=table.getSelectedRow();
		
		
		
		if (odabraniRedak>=0)
		{
			try
			{
				int brRac=Integer.parseInt(table.getValueAt(odabraniRedak,0).toString());
				
				Class.forName("com.mysql.cj.jdbc.Driver");
				Connection con=DriverManager.getConnection("jdbc:mysql://student.veleri.hr/ljuras?serverTimezone=UTC", "ljuras", "11");
				
				
				String upit="DELETE FROM RacuniProjekt WHERE BrojRac=? ";
				//String upit="DELETE FROM ClanoviProjekt WHERE clan_id=? AND ime=? AND prezime=?";
				PreparedStatement ps=con.prepareStatement(upit);
				ps.setInt(1, brRac);
				
				int rezultat=ps.executeUpdate();
				
				if (rezultat==1)
				{
					DefaultTableModel model1=(DefaultTableModel)table.getModel();
					model1.removeRow(odabraniRedak);
					JOptionPane.showMessageDialog(null, "Racun uspješno placaen");
				}
				else
				{
					JOptionPane.showMessageDialog(null, "Racun nije moguće platiti");
				}
				
				
			}
			catch(Exception e1)
			{
				JOptionPane.showMessageDialog(null, e1);
			}
		}
		else
		{
			JOptionPane.showMessageDialog(null, "Redak nije odabran");
		}
	
	
	
}
});
 btnNewButton.setBounds(185, 362, 147, 23);
 frame.getContentPane().add(btnNewButton);
 
 pretraga = new JTextField();
 pretraga.setBounds(322, 82, 96, 20);
 frame.getContentPane().add(pretraga);
 pretraga.setColumns(10);
 
 JButton btnNewButton_1 = new JButton("PRETRAZI");
 btnNewButton_1.addActionListener(new ActionListener() {
 	public void actionPerformed(ActionEvent e) {
 		
 		
 		String pretragas=pretraga.getText();
 		
 		if (pretragas.equals("")) {
 			JOptionPane.showMessageDialog(null, "Niste unijeli nikakve podatke");
 		}
 			else {
		
		try
		{
			Class.forName("com.mysql.cj.jdbc.Driver");
			Connection con=DriverManager.getConnection("jdbc:mysql://student.veleri.hr/ljuras?serverTimezone=UTC", "ljuras", "11");
			
			String upit="SELECT * FROM RacuniProjekt WHERE ImeClana LIKE ? OR BrojRac LIKE ?";
			
			PreparedStatement ps=con.prepareStatement(upit);
			ps.setString(1, "%"+pretragas+"%");
			ps.setString(2, "%"+pretragas+"%");

			
			ResultSet rs=ps.executeQuery();
			//i dalje ide defaultTableModel i nakon toga while (rs.next)
			// i onda sve isto kao kod punjenja podataka iz baze
			
DefaultTableModel model=(DefaultTableModel)table.getModel();
			
			model.setRowCount(0);
			
			while(rs.next())
			{
				int id_clan=rs.getInt(1);
				String ime=rs.getString(2);
				String prezime=rs.getString(3);
				String brojMob=rs.getString(4);
				
				
				model.addRow(new Object[] {id_clan, ime, prezime,brojMob});
			}
		}
		catch(Exception e1)
		{
			JOptionPane.showMessageDialog(null, e1);
		}
 			}
 		
 	}
 });
 btnNewButton_1.setBounds(428, 79, 112, 23);
 frame.getContentPane().add(btnNewButton_1);
 
 JLabel lblNewLabel = new JLabel("PLAĆANJE");
 lblNewLabel.setFont(new Font("Tahoma", Font.BOLD, 25));
 lblNewLabel.setBounds(185, 28, 175, 43);
 frame.getContentPane().add(lblNewLabel);
 

 

 
 }
 public void showWindow()
	{
		frame.setVisible(true);
	}
}