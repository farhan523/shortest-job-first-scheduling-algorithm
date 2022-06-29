# shortest-job-first-scheduling-algorithm
shortest job first scheduling algorithm for single threaded CPU implemented using heap priority queue data structure

#Non-preemptive shortest job first

Non-preemptive means that once a process has been removed from the waiting queue and given CPU time, it will execute until completed or terminated. The algorithm removes processes with minimum arrival time from the waiting queue and executes them until the process is completed. The process then shifts the CPU to other processes in the waiting queue.

#Non-preemptive example

The following example makes use of non-preemptive shortest job first to allocate CPU time to each process:

Time = 0

At time=0
time=0
, the processes P1 and P2 are in the waiting queue. The algorithm selects the one with the shorter burst time, which in this case is P1, to allocate the CPU cycle for the whole duration of its burst time.

![image](https://user-images.githubusercontent.com/62025759/176434599-9af0df6a-d5b2-4277-85df-161cd977bdf1.png)



![image](https://user-images.githubusercontent.com/62025759/176434337-4c343f58-3db3-47ad-bf9a-698783c14989.png)


![image](https://user-images.githubusercontent.com/62025759/176434383-ec9f50a3-b8a5-4fa6-9ef3-1ea39b16682a.png)

![image](https://user-images.githubusercontent.com/62025759/176434442-6a9e69b1-904e-4fa4-aa03-05de661e7a5a.png)
