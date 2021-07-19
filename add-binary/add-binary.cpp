class Solution {
public:
    string addBinary(string a, string b) 
    {
        string r = "";
        string c = "";
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        int l = max(a.length(),b.length());
        int ml = min(a.length(),b.length());
        for(int i = 0;i<ml;i++)
        {
            if(c.empty())
            {
                if(a[i] == '0' && b[i] == '0')
                {
                    r += '0';
                }
                if(a[i] == '1' && b[i] == '0')
                {
                    r += '1';
                }
                if(a[i] == '0' && b[i] == '1')
                {
                    r += '1';
                }
                if(a[i] == '1' && b[i] == '1')
                {
                    r += '0';
                    c += '1';
                }
            }
            else
            {
                if(a[i] == '0' && b[i] == '0')
                {
                    r += '1';
                    c.clear();
                }
                if(a[i] == '1' && b[i] == '0')
                {
                    r += '0';
                }
                if(a[i] == '0' && b[i] == '1')
                {
                    r += '0';
                }
                if(a[i] == '1' && b[i] == '1')
                {
                    r += '1';
                }
            }
        }
        for(int j = ml;j<l;j++)
        {
            if(a.length() == l)
            {
                if(a[j] == '1' && c.empty())
                    r += '1';
                if(a[j] == '0' && c.empty())
                    r += '0';
                if(a[j] == '1' && !c.empty())
                    r += '0';
                if(a[j] == '0' && !c.empty())
                {
                    r += '1';
                    c.clear();
                }
            }
            if(b.length() == l)
            {
                if(b[j] == '1' && c.empty())
                    r += '1';
                if(b[j] == '0' && c.empty())
                    r += '0';
                if(b[j] == '1' && !c.empty())
                    r += '0';
                if(b[j] == '0' && !c.empty())
                {
                    r += '1';
                    c.clear();
                }
            }
        }
        if(!c.empty())
            r += '1';
        reverse(r.begin(),r.end());
        return r;
    }
};