
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct slist
{
	int id ;
	struct slist *next ;			
}L;
 
//閸掓稑缂撴稉鈧稉顏囧Ν閻愶拷 
L *create_node(int data)
{
	//缂佹瑦鐦℃稉顏囧Ν閻愮懓鍨庨柊宥囩波閺嬪嫪缍嬫稉鈧弽椋庢畱缁屾椽妫挎径褍鐨� 
	L *p = malloc(sizeof(L));
	if(NULL == p)
	{
		printf("malloc error!\n");
		return NULL ;
	}
	//閻㈠彉绨紒鎾寸€担鎾虫躬閺堫亜鍨垫慨瀣閻ㄥ嫭妞傞崐娆庣閺嶉攱妲搁懘蹇旀殶閹诡噯绱濋幍鈧禒銉洣濞擄拷 
	memset(p,0,sizeof(L));
	//閸掓繂顫愰崠鏍儑娑撯偓娑擃亣濡悙锟� 
	p->id = data ; 
	//鐏忓棜濡悙鍦畱閸氬海鎴烽幐鍥嫛鐠佸墽鐤嗘稉绡楿LL 
	p->next = NULL ;
}
 
//闁炬崘銆冮惃鍕啲閹伙拷 
void tail_insert(L *pH , L *new)
{
	//閼惧嘲褰囪ぐ鎾冲閻ㄥ嫪缍呯純锟� 
	L *p = pH ; 
	//婵″倹鐏夎ぐ鎾冲娴ｅ秶鐤嗛惃鍕瑓娑撯偓娑擃亣濡悙閫涚瑝娑撹櫣鈹� 
	while(NULL != p->next)
	{
		//缁夎濮╅崚棰佺瑓娑撯偓娑擃亣濡悙锟� 
		p = p->next ;
	}
	//婵″倹鐏夌捄鍐插毉娴犮儰绗傚顏嗗箚閿涘本澧嶆禒銉ュ嚒缂佸繐鍩屾禍鍝奤LL閻ㄥ嫯绻栨稉顏冪秴缂冿拷
	//濮濄倖妞傞惄瀛樺复閹跺﹥鏌婇幓鎺戝弳閻ㄥ嫯濡悙纭呯ゴ閸婅偐绮癗ULL鏉╂瑤閲滄担宥囩枂 
	p->next = new ;
}
 
//闁炬崘銆冮惃鍕仈閹伙拷 
void top_insert(L *pH , L *new)
{
	L *p = pH ;
	new->next = p->next ;
	p->next = new ;
}
 
//闁炬崘銆冮惃鍕憾閸橈拷 
void Print_node(L *pH)
{
	//閼惧嘲褰囪ぐ鎾冲閻ㄥ嫪缍呯純锟� 
	L *p = pH ;
	//閼惧嘲褰囩粭顑跨娑擃亣濡悙鍦畱娴ｅ秶鐤� 
	p = p->next ;
	//婵″倹鐏夎ぐ鎾冲娴ｅ秶鐤嗛惃鍕瑓娑撯偓娑擃亣濡悙閫涚瑝娑撹櫣鈹� 
	while(NULL != p->next)
	{
		//(1)閹垫挸宓冮懞鍌滃仯閻ㄥ嫭鏆熼幑锟� 
		printf("id:%d\n",p->id);
		//(2)缁夎濮╅崚棰佺瑓娑撯偓娑擃亣濡悙锟�,婵″倹鐏夐弶鈥叉娴犲秳璐熼惇鐕傜礉閸掓瑩鍣告径锟�(1)閿涘苯鍟€(2) 
		p = p->next ;
	}
	//婵″倹鐏夎ぐ鎾冲娴ｅ秶鐤嗛惃鍕瑓娑撯偓娑擃亣濡悙閫涜礋缁岀尨绱濋崚娆愬ⅵ閸楃増鏆熼幑锟�
	//鐠囧瓨妲戦崣顏呮箒娑撯偓娑擃亣濡悙锟� 
	printf("id:%d\n",p->id);
}
 
L *sll_reverse(L *first)
{
   L *current,*next;
  if(first != NULL){
        for(current = NULL; first != NULL; first = next){
            next = first->next;
            first->next = current;
            current = first;
        }
    }
    Print_node(first);
    return first;
}
int main(int argc , char **argv) 
{
	//閸掓稑缂撶粭顑跨娑擃亣濡悙锟� 
	int i ;
	L *header = create_node(0); 
	for(i = 1 ; i < 10 ; i++)
	{
		tail_insert(header,create_node(i));
	}
	Print_node(header);	
	header=sll_reverse(header);
	Print_node(header);
	return 0 ;
}












































































































































































