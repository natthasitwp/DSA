# Block Insert Data Shift Visualization

## Example: Insert 2 elements 'X' at position 2 in queue [A, B, C, D]

### Initial State
```
Queue: [A, B, C, D]
Index:  0  1  2  3
        ^        ^
      front    back
```

### After block_insert(2, 2, 'X')
```
Queue: [A, B, X, X, C, D]
Index:  0  1  2  3  4  5
        ^              ^
      front          back
```

## Step-by-Step Data Movement

### Step 1: Move elements from RIGHT to LEFT (backwards)
```
Original: [A, B, C, D, _, _]
           0  1  2  3  4  5

Move D: [A, B, C, _, _, D]  // D moves from index 3 to 5
Move C: [A, B, _, _, C, D]  // C moves from index 2 to 4
```

### Step 2: Insert new elements
```
Insert X: [A, B, X, X, C, D]  // Insert at positions 2 and 3
```

## Why RIGHT-to-LEFT movement?

### ❌ Wrong (LEFT-to-RIGHT):
```
Move C: [A, B, C, C, _, _]  // C overwrites D!
Move D: [A, B, C, C, D, _]  // Original D is lost
```

### ✅ Correct (RIGHT-to-LEFT):
```
Move D: [A, B, C, _, _, D]  // D is safe
Move C: [A, B, _, _, C, D]  // C is safe
```

## Circular Buffer Example

### Initial circular buffer (mFront = 2, mSize = 4)
```
Buffer: [C, D, A, B, _, _]
Index:   0  1  2  3  4  5
              ^
            mFront
Logical: [A, B, C, D]
```

### After block_insert(1, 2, 'X')
```
Buffer: [C, D, A, X, X, B]
Index:   0  1  2  3  4  5
              ^
            mFront
Logical: [A, X, X, B, C, D]
```
