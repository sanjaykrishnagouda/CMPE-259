import os,sys,glob
def allfiles(foldername):
	owd=os.getcwd()
	fld=foldername + "/"
	os.chdir(fld)
	arr=[]
	for file in glob.glob("*.txt"):
		arr.append(file)
	os.chdir(owd)
	return arr
#src='/media/sanjay/New Volume/Course stuff/spring 2017/sensor networks/s1/src'
#src='M:\Course stuff\spring 2017\sensor networks\s3\src'
#src='/home/sanjay/Desktop/centralized'
src='M:\Course stuff\spring 2017\sensor networks\s1\src'
a=allfiles(src)
t,c=0,0
a.sort()
for i in range(len(a)-1):
	#print a[i]
	f=open(a[i],'r')
	total=f.read()
	c+=int (total[24:])
	t+=1
	#print (a[i],i,total[24:])

cumulative_visibility={}
#dict values for dish terrain
cumulative_visibility['dish130']=0
cumulative_visibility['dish140']=0
cumulative_visibility['dish150']=0
cumulative_visibility['dish160']=0
cumulative_visibility['dish170']=0

#dict values for wavy terrain
cumulative_visibility['wavy130']=0
cumulative_visibility['wavy140']=0
cumulative_visibility['wavy150']=0
cumulative_visibility['wavy160']=0
cumulative_visibility['wavy170']=0

#dict vlues for flat terrain

cumulative_visibility['flat130']=0
cumulative_visibility['flat140']=0
cumulative_visibility['flat150']=0
cumulative_visibility['flat160']=0
cumulative_visibility['flat170']=0

#dict values for real30 terrain

cumulative_visibility['real30_130']=0
cumulative_visibility['real30_140']=0
cumulative_visibility['real30_150']=0
cumulative_visibility['real30_160']=0
cumulative_visibility['real30_170']=0

#dict values for wavy terrain

cumulative_visibility['wavy130']=0
cumulative_visibility['wavy140']=0
cumulative_visibility['wavy150']=0
cumulative_visibility['wavy160']=0
cumulative_visibility['wavy170']=0

#dict values for wavy2 terrain

cumulative_visibility['wavy2_130']=0
cumulative_visibility['wavy2_140']=0
cumulative_visibility['wavy2_150']=0
cumulative_visibility['wavy2_160']=0
cumulative_visibility['wavy2_170']=0

t1=0
for i in range(0,5):
	f=open(a[i],'r')
	dish130=f.read()
	cumulative_visibility['dish130']+=int(dish130[24:])
	t1+=1
	#print dish130[24:]
cumulative_visibility['dish130']/=t1

t1=0
for i in range(5,10):
	f=open(a[i],'r')
	dish140=f.read()
	cumulative_visibility['dish140']+=int(dish140[24:])
	t1+=1
	#print dish140[24:]
cumulative_visibility['dish140']/=t1

t1=0
for i in range(10,15):
	f=open(a[i],'r')
	dish150=f.read()
	cumulative_visibility['dish150']+=int(dish150[24:])
	t1+=1
	#print dish150[24:]
cumulative_visibility['dish150']/=t1

t1=0
for i in range(15,20):
	f=open(a[i],'r')
	dish160=f.read()
	cumulative_visibility['dish160']+=int(dish160[24:])
	t1+=1
	#print dish160[24:]
cumulative_visibility['dish160']/=t1

t1=0
for i in range(20,25):
	f=open(a[i],'r')
	dish170=f.read()
	cumulative_visibility['dish170']+=int(dish170[24:])
	t1+=1
	#print dish170[24:]
cumulative_visibility['dish170']/=t1



#############

t1=0
for i in range(25,30):
	f=open(a[i],'r')
	flat130=f.read()
	cumulative_visibility['flat130']+=int(flat130[24:])
	t1+=1
	#print flat130[24:]
cumulative_visibility['flat130']/=t1

t1=0
for i in range(30,35):
	f=open(a[i],'r')
	flat140=f.read()
	cumulative_visibility['flat140']+=int(flat140[24:])
	t1+=1
	#print flat140[24:]
cumulative_visibility['flat140']/=t1

t1=0
for i in range(35,40):
	f=open(a[i],'r')
	flat150=f.read()
	cumulative_visibility['flat150']+=int(flat150[24:])
	t1+=1
	#print flat150[24:]
cumulative_visibility['flat150']/=t1

t1=0
for i in range(40,45):
	f=open(a[i],'r')
	flat160=f.read()
	cumulative_visibility['flat160']+=int(flat160[24:])
	t1+=1
	#print flat160[24:]
cumulative_visibility['flat160']/=t1

t1=0
for i in range(45,50):
	f=open(a[i],'r')
	flat170=f.read()
	cumulative_visibility['flat170']+=int(flat170[24:])
	t1+=1
	#print flat170[24:]
cumulative_visibility['flat170']/=t1

#############

t1=0
for i in range(50,60):
	f=open(a[i],'r')
	real30_130=f.read()
	cumulative_visibility['real30_130']+=int(real30_130[24:])
	t1+=1
	#print real30_130[24:]
cumulative_visibility['real30_130']/=t1

t1=0
for i in range(60,70):
	f=open(a[i],'r')
	real30_140=f.read()
	cumulative_visibility['real30_140']+=int(real30_140[24:])
	t1+=1
	#print real30_140[24:]
cumulative_visibility['real30_140']/=t1

t1=0
for i in range(70,80):
	f=open(a[i],'r')
	real30_150=f.read()
	cumulative_visibility['real30_150']+=int(real30_150[24:])
	t1+=1
	#print real30_150[24:]
cumulative_visibility['real30_150']/=t1

t1=0
for i in range(80,90):
	f=open(a[i],'r')
	real30_160=f.read()
	cumulative_visibility['real30_160']+=int(real30_160[24:])
	t1+=1
	#print real30_160[24:]
cumulative_visibility['real30_160']/=t1

t1=0
for i in range(90,100):
	f=open(a[i],'r')
	real30_170=f.read()
	cumulative_visibility['real30_170']+=int(real30_170[24:])
	t1+=1
	#print real30_170[24:]
cumulative_visibility['real30_170']/=t1

#############

t1=0
for i in range(100,105):
	f=open(a[i],'r')
	wavy130=f.read()
	cumulative_visibility['wavy130']+=int(wavy130[24:])
	t1+=1
	#print wavy130[24:]
cumulative_visibility['wavy130']/=t1

t1=0
for i in range(105,110):
	f=open(a[i],'r')
	wavy140=f.read()
	cumulative_visibility['wavy140']+=int(wavy140[24:])
	t1+=1
	#print wavy140[24:]
cumulative_visibility['wavy140']/=t1

t1=0
for i in range(110,115):
	f=open(a[i],'r')
	wavy150=f.read()
	cumulative_visibility['wavy150']+=int(wavy150[24:])
	t1+=1
	#print wavy150[24:]
cumulative_visibility['wavy150']/=t1

t1=0
for i in range(115,120):
	f=open(a[i],'r')
	wavy160=f.read()
	cumulative_visibility['wavy160']+=int(wavy160[24:])
	t1+=1
	#print wavy160[24:]
cumulative_visibility['wavy160']/=t1

t1=0
for i in range(120,125):
	f=open(a[i],'r')
	wavy170=f.read()
	cumulative_visibility['wavy170']+=int(wavy170[24:])
	t1+=1
	#print wavy170[24:]
cumulative_visibility['wavy170']/=t1

#############

t1=0
for i in range(125,130):
	f=open(a[i],'r')
	wavy2_130=f.read()
	cumulative_visibility['wavy2_130']+=int(wavy2_130[24:])
	t1+=1
	#print wavy2_130[24:]
cumulative_visibility['wavy2_130']/=t1

t1=0
for i in range(130,135):
	f=open(a[i],'r')
	wavy2_140=f.read()
	cumulative_visibility['wavy2_140']+=int(wavy2_140[24:])
	t1+=1
	#print wavy2_140[24:]
cumulative_visibility['wavy2_140']/=t1

t1=0
for i in range(135,140):
	f=open(a[i],'r')
	wavy2_150=f.read()
	cumulative_visibility['wavy2_150']+=int(wavy2_150[24:])
	t1+=1
	#print wavy2_150[24:]
cumulative_visibility['wavy2_150']/=t1
t1=0
for i in range(140,145):
	f=open(a[i],'r')
	wavy2_160=f.read()
	cumulative_visibility['wavy2_160']+=int(wavy2_160[24:])
	t1+=1
	#print wavy2_160[24:]
cumulative_visibility['wavy2_160']/=t1

t1=0
for i in range(145,149):
	f=open(a[i],'r')
	wavy2_170=f.read()
	cumulative_visibility['wavy2_170']+=int(wavy2_170[24:])
	t1+=1
	#print wavy2_170[24:]
cumulative_visibility['wavy2_170']/=t1

for i in sorted(cumulative_visibility):
	print i,cumulative_visibility[i]