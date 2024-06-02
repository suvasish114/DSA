import java.util.Arrays;

public class Main {
    public static void main(String[] args) {
        ReadIp readIp = new ReadIp("test/a.in");
        // create unditected graph with vertices
        UndirectedGraph graph = new UndirectedGraph(readIp.getList(), readIp.getSize());
        graph.displayMatrix();
        // add new vertices with adjacent vertices
        graph.addVertex(Arrays.asList(1,2,3));
        graph.displayMatrix();
    }
}
