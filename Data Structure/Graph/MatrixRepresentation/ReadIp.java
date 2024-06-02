import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class ReadIp {
    private int size;
    private List<List<Integer>> list = new ArrayList<List<Integer>>();
    private Scanner scan;
    public ReadIp(String inputFile){
        try{ 
            scan = new Scanner(new File(inputFile));
           
            size = Integer.parseInt(scan.next());
            while(scan.hasNext()){
                List<Integer> temp = new ArrayList<Integer>();
                for(int i=0; i<2; i++){
                    temp.add(Integer.parseInt(scan.next()));
                }
                this.list.add(temp);
            }
        }catch(FileNotFoundException e){
            System.out.println("File Not Found");
        }
    }
    public int getSize(){
        return this.size;
    }
    public List<List<Integer>> getList(){
        return this.list;
    }
}
