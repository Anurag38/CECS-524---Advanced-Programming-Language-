! 
! Welcome to GDB Online.
! GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
! C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
! Code, Compile, Run and Debug online from anywhere in world.
! 
! 
program unit8_1
implicit none
 
   
    integer :: factor,rate
    
    print *,'Enter the rate: ' 
    read *,rate
   
    if( (rate == 1) .or. (rate == 2) ) then
      factor = 2 * rate - 1 
    
    else if( (rate == 3) .or. (rate == 5) ) then
      factor = 3 * rate + 1
    
    else if( rate == 4 ) then
      factor = 4 * rate - 1
      
    else if( (rate == 6) .or. (rate == 7) .or. (rate == 8) ) then
      factor = rate - 2  
    
    else
      factor=rate
      
    end if
    
    print*, "Value of factor: ", factor
 
end program unit8_1
