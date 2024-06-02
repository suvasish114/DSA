/* representation of directed graph using matrix */

import java.util.List;
import java.util.ArrayList;

public class DirectedGraph implements Graph{
    private List<List<Integer>> list;
    int size;
    
    // constractor
    public DirectedGraph(){
        super();
    }
    public DirectedGraph(int size){
        super();
        this.size = size;
    }
    public DirectedGraph(int size, List<List<Integer>> list){
        this.size = size;
        for(int i=0; i<this.size; i++) {
            List<Integer> temp = new ArrayList<Integer>();
            for(int k=0; k<this.size; k++) temp.add(0);
            this.list.add(temp);
        }
        for(List<Integer> a: list){
            addEdge(a.get(0), a.get(1));
        }
    }
    
    // methods
    public void addEdge(int from, int to){
        try{
            this.list.get(from).set(to, 1);
        }catch(IndexOutOfBoundsException e){
            System.out.println("Edge "+from+" to "+to+" is not possible.");
        }
    }
    public void addVertex(List<Integer> adjacentFrom, List<Integer> adjacentTo){
        this.size++;
        List<Integer> temp = new ArrayList<Integer>();
        for(int i=0; i<this.size; i++) temp.add(0);
        this.list.add(temp);
        for(int i=0; i<this.size-1; i++) this.list.get(i).add(0);
        for(int a: adjacentFrom) this.list.get(this.size).set(a, 1);
        for(int a: adjacentTo) this.list.get(a).set(this.size, 1);
    }
    public void deleteEdge(int from, int to){
        this.list.get(from).set(to, 0);
    }
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
    public void displayMatrix(){
        for(List<Integer> a: this.list){
            for(int b: a) System.out.print(b+" ");
            System.out.println();
        }
    }
}
