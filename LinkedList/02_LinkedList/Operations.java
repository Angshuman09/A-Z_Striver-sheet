class Operations{
    static class Node{
        int data;
        Node next;

        Node(int data){
            this.data = data;
            this.next = null;
        }
    }

    // Will display the all nodes in a linked list.
    public static void display(Node node){
        Node temp = node;
        while(temp != null){
            System.out.println(temp.data);
            temp = temp.next;
        }
        System.out.println();
    }

    // Delete any node in the linkedlist
    public static Node deleteNode(Node node, int value){
        Node prev = null;
        Node curr = node;

        if(node!= null && node.data == value){
            return node.next;
        }

        while(curr != null){
            if(curr.data == value){
                if(prev != null){
                    prev.next = curr.next;
                    break;
                } 
            }
            prev = curr;
            curr = curr.next;
        }

        return node;
    }


    //Find length of a linkedlist
    public static int Length(Node node){
        Node temp = node;
        int count = 0;
        while(temp != null){
            count++;
            temp = temp.next;
        }

        return count;
    }

    public static boolean checkIfPresent(Node node, int ele){
        Node temp = node;
        while(temp != null){
            if( temp.data == ele){
                return true;
            }
            temp = temp.next;
        }

        return false;
    }
    public static void main(String[] args) {
        Node node = new Node(1);
        node.next = new Node(2);
        node.next.next = new Node(3);
        node.next.next.next = new Node(4);

        System.out.println("----Displaying all nodes in the LinkedList----");
        display(node);
        System.out.println("Length of the linkedlist is: "+ Length(node));
        System.out.println(checkIfPresent(node, 3));
        node = deleteNode(node, 3);
        System.out.println("----Displaying all nodes after deleting a node from the LinkedList----");
        display(node);
        System.out.println("Length of the linkedlist after deletion: "+ Length(node));
        System.out.println(checkIfPresent(node, 3));
    }
}