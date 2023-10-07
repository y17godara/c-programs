int joeAndCheeseCake(int n, int m)
{
    int days = 0;
    while (n > 0)
    {
        if (n < m)
        {
            days++;
            n = 0;
        }
        else
        {
            n -= m;
            days++;
        }
    }

    return days;
}

// Your submission is taking too long to execute
//     We think Common causes of Time Limit Exceeded :

//     Infinite Loop
//         Takes too much time than allowed constraints