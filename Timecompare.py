import io, os, time 

 
def normal_io(): 
	
	 
	start = time.perf_counter() 
	
	
	s = input().strip(); 
	
	 
	end = time.perf_counter() 
	
	 
	print("\nTime taken in Normal I / O:", \ 
					end - start) 


def fast_io(): 
	
	input = io.BytesIO(os.read(0, \ 
		os.fstat(0).st_size)).readline 
 
	start = time.perf_counter() 
 
	s = input().decode() 
	
	end = time.perf_counter() 

	print("\nTime taken in Fast I / O:", \ 
					end - start) 




normal_io() 
fast_io() 
