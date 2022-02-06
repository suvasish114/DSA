// status: under development
import java.util.List;

public interface WeightedGraph{
    public void addEdge(int from, int to, int weight);
    public void addVertex(List<Integer> adjacent);
    public void deleteEdge();
    public void deleteVertex();
    public List<List<Integer>> getMatrix();
    public void displayMatrix();
}
