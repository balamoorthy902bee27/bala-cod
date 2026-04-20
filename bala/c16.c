nt marks_summation(int* marks, int number_of_students, char gender)
 {
    int sum = 0;
    int i = (gender == 'b') ? 0 : 1;
    
    for (; i < number_of_students; i += 2)
     {
        sum += marks[i];
    }
    
    return sum;
}






