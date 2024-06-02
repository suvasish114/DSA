import java.util.List;

public interface WeightedGraph{
    public void addEdge(int from, int to, int weight);
    public void deleteEdge(int from, int to);
    public void deleteVertex(int vertex);
    public List<List<Integer>> getMatrix();
    public void displayMatrix();
}
