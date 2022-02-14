/* weighted directed graph representation using matrix */

import java.util.ArrayList;
import java.util.List;

public class WeightedDirectedGraph implements WeightedGraph{
    private List<List<Integer>> list = new ArrayList<List<Integer>>();
    private int size;
    public WeightedDirectedGraph(){
        super();
    }
    public WeightedDirectedGraph(int size){
        super();
        this.size = size;
    }
    public WeightedDirectedGraph(int size, List<List<Integer>> edges){
        super();
    }
    public void addEdge(int from, int to, int weight){}
    public void deleteEdge(int from, int to){}
    public void deleteVertex(int vertex){
        try{
            for(int i=vertex-1; i<this.size; i++){
                for(int j=0; j<this.size; j++){
                    this.list.get(i).set(j, this.list.get(i).get(j+1));
                }
            }
            for(int i=vertex-1; i<this.size; i++){
                for(int j=0; j<this.size; j++){
                    this.list.get(j).set(i, this.list.get(j).get(i+1));
                }
            }
            this.size -= 1;
        }catch(IndexOutOfBoundsException e){
            System.out.println("Deletion of vertex "+vertex+" is not possible.");
        }
    }
    
    public List<List<Integer>> getMatrix(){
        return this.list;
    }
    public void displayMatrix(){}
}
