import java.util.ArrayList;
import java.util.List;

public class Warshall{
    private List<List<Integer>> path = new ArrayList<List<Integer>>();
    public Warshall(){
        super();
    }
    public Warshall(List<List<Integer>> path){
        this.path = path;
    }
    public void setPath(List<List<Integer>> path){
        this.path = path;
    }
    private void algorithm(){
        for(int k=0; k<path.size(); k++){
            for(int i=0; i<path.size(); i++){
                for(int j=0; j<path.size(); j++){
                    // 
                }
            }
        }
    }
    public List<List<Integer>> getPath(){
        algorithm();
        return path;
    }
}