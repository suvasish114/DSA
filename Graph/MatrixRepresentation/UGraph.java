/* representation of undirected graph using matrix */

import java.util.ArrayList;
import java.util.List;

public class UGraph{
    private List<List<Integer>> list = new ArrayList<List<Integer>>();
    private int size;
    public UGraph(){
        super();
    }
    public UGraph(List<List<Integer>> list, int size){
        this.size = size;
        List<Integer> temp = new ArrayList<Integer>();
        for(int i=0; i<this.size; i++) temp.add(0);
        for(int i=0; i<this.size; i++) this.list.add(temp);

        // list = [[1, 2], [2, 3], [1, 3], [3, 4]]
        // size = this.size = 4
        // this.list = [[0, 0, 0, 0], [0, 0, 0, 0], [0, 0, 0, 0], [0, 0, 0, 0]]
        for(int i=0; i<this.size; i++){
	        int from = list.get(i).get(0)-1;
	        int to = list.get(i).get(1)-1;
            this.list.get(from).set(to,1);
            this.list.get(to).set(from,1);
        }
    }
    public void displayMatrix(){
        for(List<Integer> a: this.list){
            for(int b: a){
                System.out.print(b+" ");
            }
            System.out.println();
        }
    }
}
