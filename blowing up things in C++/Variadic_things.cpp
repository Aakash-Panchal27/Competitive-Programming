
#define debug(args...) {string s=#args; replace(s.begin(),s.end(),',',' '); stringstream ss(s); istream_iterator<string> it(ss); err(it,args); }

void err(istream_iterator<string> it){}

template <typename T,typename... Args>
void err(istream_iterator<string> it, T a,Args... args)
{
	cout<<*it<<" = "<<a<<endl;
	err(++it,args...);
}
