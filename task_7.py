def hit_target(n):
    # Check if n is 2, then two shots at the same spot solve the problem
    if n == 2:
        print("Shooting at spot 1.")
        result = input("Did the shot hit the target? (yes/no): ")
        if result.lower() == 'yes':
            return "Target hit at spot 1!"
        else:
            print("Shooting again at spot 1.")
            return "Target hit at spot 1!"

    # Sequence of shots for n > 2
    shots = list(range(2, n)) + list(range(n-1, 1, -1))
    for shot in shots:
        print(f"Shooting at spot {shot}.")
        result = input("Did the shot hit the target? (yes/no): ")
        if result.lower() == 'yes':
            return f"Target hit at spot {shot}!"
        else:
            print("Target missed. Moving to the next spot.")

# Example usage:
print(hit_target(10))
