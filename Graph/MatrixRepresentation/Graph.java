import java.util.List;

public interface Graph {
    public void addEdge(int from, int to);
    public void deleteEdge(int from, int to);
    public void deleteVertex(int vertex);
    public List<List<Integer>> getMatrix();
    public void displayMatrix();
}
