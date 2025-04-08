README.md: |
  # OS Project: Priority Scheduling Algorithm (Non-Preemptive)

  This project implements a **Non-Preemptive Priority Scheduling Algorithm** in Cpp, simulating how an operating system schedules processes based on arrival time, burst time, and calculated priority.

  ---

  ## Features

  - Accepts input for arrival time and burst time for `n` processes.
  - Sorts processes based on arrival time.
  - Dynamically calculates priority for each process using:
    ```
    Priority = 1 + (Waiting Time / Burst Time)
    ```
  - Re-sorts processes based on computed priority.
  - Calculates:
    - Start Time
    - Finish Time
    - Waiting Time
    - Turnaround Time (TAT)
  - Outputs:
    - A clean tabular representation of each process’s data.
    - Average Waiting Time and Average Turnaround Time.

  ---

  ## Sample Input/Output

 - Enter number of processes: 3 P1 Arrival: 0 P1 Burst: 5 P2 Arrival: 2 P2 Burst: 3 P3 Arrival: 4 P3 Burst: 1

 ➡Output includes sorted tables and process calculations after scheduling.

---

## Technologies Used

- **Language**: C++
- **Compiler**: g++ / Code::Blocks / OnlineGDB

---

## Concepts Used

- Priority Scheduling
- Process Management in OS
- CPU Scheduling Algorithms
- Structs and Sorting in Cpp

---

## Author

**Sai Vineeth Neeli**  
[GitHub](https://github.com/vineeth-neeli7)
---

## License

This project is created for academic demonstration purposes.
