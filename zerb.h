#define MAX_BUF 1024
#define PORT 6012
#define FILES_PATH	"files"

#define ST_INIT		0
#define ST_DOWN		1

#define COM_ARGI	0
#define COM_TENP	1
#define COM_PERT	2
#define COM_INFO	3
#define COM_INF2	4
#define COM_FITX	5
#define COM_FIT2	6

#define MAX_UPLOAD_SIZE	10*1024*1024	// 10 MB
#define SPACE_MARGIN		50*1024*1024	// 50 MB

char * KOMANDOAK[] = {"ARGI","TENP","PERT","INFO","INF2","FITX","FIT2",NULL};
// 5 gela egongo dira [0-4]
bool argiak[] = {false, false, false, false, false};
char * tenperaturak[] = {"20", "20", "20", "20", "20"};
char * pertsianak[] = {0, 0, 0, 0, 0}

int egoera;

void sesioa(int s);
int readline(int stream, char *buf, int tam);
int bilatu_string(char *string, char **string_zerr);
int bilatu_substring(char *string, char **string_zerr);
void ustegabekoa(int s);
int bidali_zerrenda(int s);
unsigned long toki_librea();
void sig_chld(int signal);
int ez_ezkutua(const struct dirent *entry);
