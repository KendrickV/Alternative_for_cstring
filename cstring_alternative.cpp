#include <iostream>
//
using namespace std;

class CHAR
{
	char val[256];
	
	public:
		CHAR(char value[0]="\0") 
		{
			if(value[0]!='\0')
			{
     	   	 		int i = 0;
    	   			while (value[i] != '\0' && i < 256) 
    		   		{
					val[i] = value[i];
 	        	    		i++;
 			    	}
      	  			val[i] = '\0';
 	  		}
 	  	}	
    	~CHAR(){}
/////////////////////////////////////////////////////////////////////////////////// strlen()
	int operator()(char mes1[],char mes2[])       //////// len(char1,char2)
	{										//
		int i1=0;								//
		int i2=0;								//
		while(mes1[i1] != 0) i1++;						//
		while(mes2[i2] != 0) i2++;						// 		returns -1 if the number of characters in 1st string is greater than the 2nd string
											//strlen -	returns  1 if the number of characters in 2st string is greater than the 1nd string
											//		returns  0 if the number of characters are equal in both strings
		if(i1>i2)return -1;							//
		else if(i1<i2) return 1;						//
		else if(i1==i2) return 0;						//
	}										//////////
	
	int LEN(char mes[]) // len.LEN(char)
	{									
		int i=0;						
		while(mes[i] != '\0') i++;	
		return i;						
	}	
	int LEN(CHAR&OBJ)	// OBJ.LEN(OBJ)	     
	{									
		int i=0;						
		while(OBJ.val[i] != '\0') i++;	
		return i;						
	}									
	int LEN()	// this->LEN() of the OBJ calling it	    				
	{									
		int i=0;						
		while(this->val[i] != 0) i++;	
		return i;						
	}									
	int operator()()	// OBJ()		     		
	{									
		int i=0;						
		while(this->val[i] != 0) i++;	
		return i;						
	}									
	int operator()(CHAR&OBJ)  // len(OBJ2)   		
	{									
		int i=0;						
		while(this->val[i] != 0) i++;	
		return i;						
	}									 
	int operator()(char mes[])	// len(char)   		
	{									
		int i=0;						
		while(mes[i] != 0) i++;			
		return i;						
	}							
	////////////////////////////////////////////////////////////////////// strcpy()
	void operator=(char mes[])  // OBJ=char 
	{									
		int i=0;						
		while(mes[i]!=0 && i<256)		
		{								
			this->val[i]=mes[i];		
			i++;						
		}								
		this->val[i]=0;						
	}									
	void operator=(CHAR&OBJ)	// OBJ=OBJ 			
	{										
		int i=0;							
		while(this->val[i]!=0 && i<256)	
		{									
			this->val[i]=OBJ.val[i];	
			i++;						
		}								
		this->val[i]=0;	
	}
	char* str_cy(char mes[], const CHAR& OBJ)  // copy(char,OBJ) 
	{
    	int i = 0;
    	while (OBJ.val[i] != '\0' && i < 256) 
		{
        	mes[i] = OBJ.val[i];
        	i++;
    	}
    	mes[i] = '\0';
    	return mes;
	}
	
	////////////////////////////////////////////////////// strcat
	void operator+(char mes[])  //OBJ+char
	{									
		int n=this->LEN();	 			
		int i=0;						
		while(mes[i]!=0 && n+i<256)		
		{								
			this->val[n+i]=mes[i];		
			i++;						
		}								
		this->val[n+i]=0;					
	}									
	void operator+(CHAR&OBJ)	//OBJ+OBJ		
	{										
		int n=this->LEN();				
		int i=0;						
		while(OBJ.val[i]!=0 && n+i<256)	
		{								
			this->val[n+i]=OBJ.val[i];
			i++;						
		}								
		this->val[n+i]=0;				
	}									
										
	void cat(char mes1[], char mes2[])	//concat(char,char)
	{	
		int n1=this->LEN(mes1);
		int n2=this->LEN(mes2);
    	
		for (int i = 0; i < n2; i++) 
		{
   	    	mes1[n1 + i] = mes2[i];
   		}
   		mes1[n1 + n2] = '\0';													
	}
//////////////////////////////////////////////////////////////////////////	strcmp
	int operator>(char mes[])         //OBJ>char  	
	{																	
   		int i = 0;															
 		while (this->val[i] != '\0' && mes[i] != '\0') 					
		{																
        	if (this->val[i] < mes[i]) return -1;					
			else if (this->val[i] > mes[i]) return 1;					
        	i++;														
    	}																
    																	
    	if (this->val[i] == '\0' && mes[i] != '\0') return -1;			
		else if (this->val[i] != '\0' && mes[i] == '\0') return 1;		
    																	
    	return 0; 														
	}																	
																		
	int operator>(CHAR&OBJ)			 //OBJ>OBJ 									
	{																	
   		int i = 0;														
 		while (this->val[i] != '\0' && OBJ.val[i] != '\0') 				
		{																
        	if (this->val[i] < OBJ.val[i]) return -1;					
			else if (this->val[i] > OBJ.val[i]) return 1;			
        	i++;													
    	}															
    																
    	if (this->val[i] == '\0' && OBJ.val[i] != '\0') return -1;		
		else if (this->val[i] != '\0' && OBJ.val[i] == '\0') return 1;	
    																
    	return 0; 														
	}	
	int cmp_ch(char mes1[], char mes2[])         //cmp.cmp_ch(char,char)  	
	{																	
   		int i = 0;															
 		while (mes1[i] != '\0' && mes2[i] != '\0') 					
		{																
        	if (mes1[i] < mes2[i]) return -1;					
			else if (mes1[i] > mes2[i]) return 1;					
        	i++;														
    	}																
    																	
    	if (mes1[i] == '\0' && mes2[i] != '\0') return -1;			
		else if (mes1[i] != '\0' && mes2[i] == '\0') return 1;		
    																	
    	return 0; 														
	}																
//////////////////////////////////////////////////////////////////////////////////////////////	strchr					 											
	
	bool operator%(char mes2) //OBJ&char finds a charcater in the OBJ
	{
		int i=0;
		while(this->val[i]!=0)
		{
			if(this->val[i]==mes2) return true;
			else return false;
			i++;
		}
	}
	bool operator%(CHAR&OBJ) //OBJ1%OBJ2 finds a charcater from OBJ1 in the OBJ2
	{
		int i=0;
		while(this->val[i]!=0)
		{
			if(this->val[i]==OBJ.val[0]) return true;
			else return false;
			i++;
		}
	}
	bool find_c(char mes2[],char mes1) //find.find_c(char1,char2)
	{
		int i=0;
		while(mes2[i]!='\0')
		{
			if(mes1==mes2[i]){ return true; }
			i++;
		}
		return false;
	}
////////////////////////////////////////////////////////////////////////////////////////////// strstr
    
    bool operator&(CHAR&OBJ)	//OBJ1&OBJ2 
    {
    	int n1=this->LEN();
    	int n2=this->LEN(OBJ);
    	int j=n2;
    	for(int i=0; i<n1; i++)
    	{
    		if(this->val[i]==OBJ.val[j]){if(j==n2-1){return 1;} j++;}
    		else{if(j>0){i--;} j=0;}
		}
		return 0;
	}
	bool operator&(char mes[]) //OBJ&char
    {
    	int n1=this->LEN();
    	int n2=this->LEN(mes);
    	int j=n2;
    	for(int i=0; i<n1; i++)
    	{
    		if(this->val[i]==mes[j]){if(j==n2-1){return 1;} j++;}
    		else{if(j>0){i--;} j=0;}
		}
		return 0;
	}
	bool find_ch(char mes1[], char mes2[]) //find.find_ch(char1, char2)
    {
    	int n1=this->LEN(mes1);
    	int n2=this->LEN(mes2);
    	int j=n2;
    	for(int i=0; i<n1; i++)
    	{
    		if(mes1[i]==mes2[j]){if(j==n2-1){return 1;} j++;}
    		else{if(j>0){i--;} j=0;}
		}
		return 0;
	}
	
	friend ostream& operator<<(ostream&O, const CHAR&x);
	friend istream& operator>>(istream&I, CHAR&x);
};


						 	
	

ostream& operator<<(ostream&O, const CHAR&x)
{
	O<<x.val; 
}

istream& operator>>(istream&I, CHAR&x)
{
	I>>x.val;
}

int main()
{	
	CHAR a,b,len,find,concat,copy,cmp;
	
	
		
return 0;
}
   
