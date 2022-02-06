import java.util.List;

public interface Graph {
    public void addEdge(int from, int to);
    public void addVertex(List<Integer> adjacent);
    public void deleteEdge();
    public void deleteVertex();
    public List<List<Integer>> getMatrix();
    public void displayMatrix();
}
