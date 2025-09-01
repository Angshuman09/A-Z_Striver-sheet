class Intro{
static class Node {
    int data;    
    Node next;      
    Node(int data1) {
        this.data = data1;
        this.next = null;   
    }
}
    public static void main(String[] args) {
        int[] arr = {2, 5, 8, 7};
        // Creating a new Node with the value from the array
        Node y = new Node(arr[0]);
        // Printing the data stored in the Node
        System.out.println(y.data);
    }

}