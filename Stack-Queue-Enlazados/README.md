# Stack-Queue
>Trabajo con Int.

Se definen los tipos de dato Stack(pila) y Queue(cola).
Se define y ejecuta la función esCapicua, invocando a los tipos de dato Stack y Queue.

### Lexico Stack:

> Tipo.Stack = (Stack, Operaciones.Stack)

> Operaciones.Stack = {Push, Pop, Top, lengthStack}

> Stack ∈ ℤ*

```
  Push: Stack x ℤ -> Stack
  Pop: Stack -> Stack x ℤ
  Top: Stack -> ℤ
  lengthStack: Stack -> ℕ
  vaciarStack: Stack -> Stack
```

### Lexico Queue:

> Tipo.Queue = (Queue, Operaciones.Queue)

> Operaciones.Queue = {enQueue, deQueue, first, lengthQueue}

> Queue ∈ ℤ*

```
  enQueue: Queue x ℤ -> Queue
  deQueue: Queue -> Queue x ℤ
  first: Queue -> ℤ
  lengthQueue: Queue -> ℕ
  vaciarQueue: Queue -> Queue
```
### Lexico esCapicua():

```
   Stack -> B
