public class Main {
    public static void main(String[] args) {
        ReadIp readIp = new ReadIp("test/a.in");
        UGraph graph = new UGraph(readIp.getList(), readIp.getSize());
        graph.displayMatrix();
    }
}
