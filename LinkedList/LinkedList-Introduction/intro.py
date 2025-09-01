class Node:
    def __init__(self, data, next=None):
        self.data = data
        self.next = next


arr = [2, 5, 8, 7]

# Create first node
y = Node(arr[0])

print(y)        # prints object reference (like memory address)
print(y.data)   # prints 2
