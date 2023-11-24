#include <ncurses.h>
#include <string>

void clearp2 (int pos){
        mvhline(pos,(COLS-8),' ',8);
        mvhline(pos + 1,(COLS-8),' ',8);
        mvhline(pos + 2,(COLS-8),' ',8);
        mvhline(pos + 3,(COLS-8),' ',8);
}
void clearp1 (int pos){
        mvhline(pos,0,' ',8);
        mvhline(pos + 1,0,' ',8);
        mvhline(pos + 2,0,' ',8);
        mvhline(pos + 3,0,' ',8);
}
void p10 (int pos) {
        clearp1(pos);
	// P1 Zero
        mvhline(pos,1,'0', 6);                
        mvhline(pos + 1,0,'0', 1);                
        mvhline(pos + 1,7,'0', 1);                
        mvhline(pos + 2,0,'0', 1);                
        mvhline(pos + 2,7,'0', 1);                
        mvhline(pos + 3,1,'0', 6);                

}
void p11 (int pos) {
        clearp1(pos);
        // P2 One
        mvhline(pos,0,'0', 1);                
        mvhline(pos + 1,0,'0', 8);                
        mvhline(pos + 2,0,'0', 8);                
        mvhline(pos,6,'0', 1);                
        mvhline(pos + 3,0,'0', 1);                

}

void p12 (int pos) {
        clearp1(pos);
        // P1 Two
        mvhline(pos,0,'0', 2);                
        mvhline(pos,7,'0', 1);                
        mvhline(pos + 1,0,'0', 1);                
        mvhline(pos + 1,2,'0', 1);                
        mvhline(pos + 1,7,'0', 1);                
        mvhline(pos + 2,0,'0', 1);                
        mvhline(pos + 2,3,'0', 1);                
        mvhline(pos + 2,7,'0', 1);                
        mvhline(pos + 3,0,'0', 1);                
        mvhline(pos + 3,4,'0', 3);                

}
void p13 (int pos){
        clearp1(pos);
        // P2 Three
        mvhline(pos + 3,1,'0', 6);
        mvhline(pos + 2,0,'0', 1);
        mvhline(pos + 2,3,'0', 1);
        mvhline(pos + 2,7,'0', 1);
        mvhline(pos + 1,0,'0', 1);
        mvhline(pos + 1,3,'0', 1);
        mvhline(pos + 1,7,'0', 1);
        mvhline(pos,1,'0', 1);
        mvhline(pos,6,'0', 1);
}
void p14 (int pos){
        clearp1(pos);
        // p1 Four
        mvhline(pos + 3,0,'0', 8);
        mvhline(pos + 2,3,'0', 1);
        mvhline(pos + 1,3,'0', 1);
        mvhline(pos,3,'0', 5);
}

void p15 (int pos){
        clearp1(pos);
        mvhline(pos,4,'0',4);
        mvhline(pos,0,'0',1);
        mvhline(pos + 1,7,'0',1);
        mvhline(pos + 1,4,'0',1);
        mvhline(pos + 1,0,'0',1);
        mvhline(pos + 2,7,'0',1);
        mvhline(pos + 2,4,'0',1);
        mvhline(pos + 2,0,'0',1);
        mvhline(pos + 3,7,'0',1);
        mvhline(pos + 3,1,'0',3);
}

void p16 (int pos){
        clearp1(pos);

        mvhline(pos + 3,7,'0', 1);
        mvhline(pos + 3,1,'0', 3);
        mvhline(pos + 2,7,'0', 1);
        mvhline(pos + 1,4,'0', 1);
        mvhline(pos + 1,0,'0', 1);
        mvhline(pos + 1,6,'0', 1);
        mvhline(pos + 2,4,'0', 1);
        mvhline(pos + 2,0,'0', 1);
        mvhline(pos,1,'0', 5);
}

void p17 (int pos){
        clearp1(pos);

        mvhline(pos + 3,3,'0', 4);                
        mvhline(pos + 1,7,'0', 1);                
        mvhline(pos + 1,1,'0', 1);                
        mvhline(pos + 2,7,'0', 1);                
        mvhline(pos + 2,2,'0', 1);                
        mvhline(pos,7,'0', 1);                
        mvhline(pos,0,'0', 1);                
}

void p18 (int pos){
        clearp1(pos);
        mvhline(pos,4,'0', 3);                
        mvhline(pos,1,'0', 2);                
        mvhline(pos + 1,7,'0', 1);                
        mvhline(pos + 1,3,'0', 1);                
        mvhline(pos + 1,0,'0', 1);                
        mvhline(pos + 2,7,'0', 1);                
        mvhline(pos + 2,3,'0', 1);                
        mvhline(pos + 2,0,'0', 1);                
        mvhline(pos + 3,4,'0', 3);                
        mvhline(pos + 3,1,'0', 2);                
}


void p19 (int pos) {
        clearp1(pos);
	// p1 Nine 
        mvhline(pos + 3,2,'0', 5);                
        mvhline(pos + 2,7,'0', 1);                
        mvhline(pos + 2,3,'0', 1);                
        mvhline(pos + 2,1,'0', 1);                
        mvhline(pos + 1,0,'0', 1);                
        mvhline(pos + 1,3,'0', 1);                
        mvhline(pos + 1,7,'0', 1);                
        mvhline(pos,4,'0', 3);                
        mvhline(pos,0,'0', 1);                
}

void p20 (int pos) {
        clearp2(pos);
	// P2 Zero
        mvhline(pos,(COLS-7),'0', 6);                
        mvhline(pos + 1,(COLS-8),'0', 1);                
        mvhline(pos + 1,(COLS-1),'0', 1);                
        mvhline(pos + 2,(COLS-8),'0', 1);                
        mvhline(pos + 2,(COLS-1),'0', 1);                
        mvhline(pos + 3,(COLS-7),'0', 6);                

}

void p21 (int pos) {
        clearp2(pos);
        // P2 One
        mvhline(pos,(COLS-1),'0', 1);                
        mvhline(pos + 1,(COLS-8),'0', 8);                
        mvhline(pos + 2,(COLS-8),'0', 8);                
        mvhline(pos + 3,(COLS-7),'0', 1);                
        mvhline(pos + 3,(COLS-1),'0', 1);                

}

void p22 (int pos) {
        clearp2(pos);
	// P2 Two
         mvhline(pos,(COLS-7),'0', 3);                
         mvhline(pos,(COLS-1),'0', 1);                
         mvhline(pos + 1,(COLS-8),'0', 1);                
         mvhline(pos + 1,(COLS-4),'0', 1);                
         mvhline(pos + 1,(COLS-1),'0', 1);                
         mvhline(pos + 2,(COLS-8),'0', 1);                
         mvhline(pos + 2,(COLS-3),'0', 1);                
         mvhline(pos + 2,(COLS-1),'0', 1);                
         mvhline(pos + 3,(COLS-8),'0', 1);                
         mvhline(pos + 3,(COLS-2),'0', 2);                

}

void p23 (int pos){
        clearp2(pos);
        // P2 Three
        mvhline(pos,(COLS-7),'0', 6);
        mvhline(pos + 1,(COLS-8),'0', 1);
        mvhline(pos + 1,(COLS-4),'0', 1);
        mvhline(pos + 1,(COLS-1),'0', 1);
        mvhline(pos + 2,(COLS-8),'0', 1);
        mvhline(pos + 2,(COLS-4),'0', 1);
        mvhline(pos + 2,(COLS-1),'0', 1);
        mvhline(pos + 3,(COLS-7),'0', 1);
        mvhline(pos + 3,(COLS-2),'0', 1);
}
void p24 (int pos){
        clearp2(pos);
        // P2 Four
        mvhline(pos,(COLS-8),'0', 8);
        mvhline(pos + 1,(COLS-4),'0', 1);
        mvhline(pos + 2,(COLS-4),'0', 1);
        mvhline(pos + 3,(COLS-8),'0', 5);
}

void p25 (int pos){
        clearp2(pos);
        mvhline(pos,(COLS-8),'0', 1);
        mvhline(pos,(COLS-4),'0', 3);
        mvhline(pos + 1,(COLS-8),'0', 1);
        mvhline(pos + 1,(COLS-5),'0', 1);
        mvhline(pos + 1,(COLS-1),'0', 1);
        mvhline(pos + 2,(COLS-8),'0', 1);
        mvhline(pos + 2,(COLS-5),'0', 1);
        mvhline(pos + 2,(COLS-1),'0', 1);
        mvhline(pos + 3,(COLS-8),'0', 4);
        mvhline(pos + 3,(COLS-5),'0', 1);
        mvhline(pos + 3,(COLS-1),'0', 1);

}

void p26 (int pos){
        clearp2(pos);

        mvhline(pos,(COLS-8),'0', 1);
        mvhline(pos,(COLS-4),'0', 3);
        mvhline(pos + 1,(COLS-8),'0', 1);
        mvhline(pos + 1,(COLS-5),'0', 1);
        mvhline(pos + 1,(COLS-1),'0', 1);
        mvhline(pos + 2,(COLS-7),'0', 1);
        mvhline(pos + 2,(COLS-5),'0', 1);
        mvhline(pos + 2,(COLS-1),'0', 1);
        mvhline(pos + 3,(COLS-6),'0', 5);
}

void p27 (int pos){
        clearp2(pos);

        mvhline(pos,(COLS-7),'0', 4);                
        mvhline(pos + 1,(COLS-8),'0', 1);                
        mvhline(pos + 1,(COLS-3),'0', 1);                
        mvhline(pos + 2,(COLS-8),'0', 1);                
        mvhline(pos + 2,(COLS-2),'0', 1);                
        mvhline(pos + 3,(COLS-8),'0', 1);                
        mvhline(pos + 3,(COLS-1),'0', 1);                
}

void p28 (int pos){
        clearp2(pos);
        mvhline(pos,(COLS-7),'0', 3);                
        mvhline(pos,(COLS-3),'0', 2);                
        mvhline(pos + 1,(COLS-8),'0', 1);                
        mvhline(pos + 1,(COLS-4),'0', 1);                
        mvhline(pos + 1,(COLS-1),'0', 1);                
        mvhline(pos + 2,(COLS-8),'0', 1);                
        mvhline(pos + 2,(COLS-4),'0', 1);                
        mvhline(pos + 2,(COLS-1),'0', 1);                
        mvhline(pos + 3,(COLS-7),'0', 3);                
        mvhline(pos + 3,(COLS-3),'0', 2);                


}


void p29 (int pos) {
        clearp2(pos);
	// P2 Nine 
        mvhline(pos,(COLS-7),'0', 5);                
        mvhline(pos + 1,(COLS-8),'0', 1);                
        mvhline(pos + 1,(COLS-4),'0', 1);                
        mvhline(pos + 1,(COLS-2),'0', 1);                
        mvhline(pos + 2,(COLS-8),'0', 1);                
        mvhline(pos + 2,(COLS-4),'0', 1);                
        mvhline(pos + 2,(COLS-1),'0', 1);                
        mvhline(pos + 3,(COLS-7),'0', 3);                
        mvhline(pos + 3,(COLS-1),'0', 1);                
}

void chngep2(int value) {
        int i = 0;
        while (value > 0 ) {
                int digit = value % 10;
                //mvprintw(i,0,"the digit is %d",digit);
                switch(digit) {
                        case 9:
                                p29(i*6);
                                break;
                        case 8:
                                p28(i * 6);
                                break;
                        case 7:
                                p27(i * 6);
                                break;
                        case 6:
                                p26(i * 6);
                                break;
                        case 5:
                                p25(i * 6);
                                break;
                        case 4:
                                p24(i * 6);
                                break;
                        case 3:
                                p23(i * 6);
                                break;
                        case 2:
                                p22(i * 6);
                                break;
                        case 1:
                                p21(i * 6);
                                break;
                        case 0:
                                p20(i * 6);
                                break;
                        default:
                                break;
                                
                }
                refresh();
                value /=10;
                i++;
        }
}
void chngep1(int value) {
        int i = std::to_string(value).length();
        
        while (value > 0 ) {
                int digit = value % 10;
                //mvprintw(i,0,"the digit is %d",digit);
                switch(digit) {
                        case 9:
                                p19((i-1)*6);
                                break;
                        case 8:
                                p18((i-1) * 6);
                                break;
                        case 7:
                                p17((i-1) * 6);
                                break;
                        case 6:
                                p16((i-1) * 6);
                                break;
                        case 5:
                                p15((i-1) * 6);
                                break;
                        case 4:
                                p14((i-1) * 6);
                                break;
                        case 3:
                                p13((i-1) * 6);
                                break;
                        case 2:
                                p12((i-1) * 6);
                                break;
                        case 1:
                                p11((i-1) * 6);
                                break;
                        case 0:
                                p10((i-1) * 6);
                                break;
                        default:
                                break;
                                
                }
                refresh();
                value /=10;
                i--;
        }
}

int main (int argc, char *argv[]) {
	
	initscr();
	cbreak();
	noecho();
	clear();
        keypad(stdscr, true);

        int p1life = 20;
        chngep1(p1life);

	mvvline(0,(COLS/2), ACS_VLINE , COLS);


	refresh();

        int p2life = 20;
        chngep2(p2life);
        for (int ch = getch(); ch != 'q'; ch = getch()) {
                switch(ch) {
                        case 'd':
                                p1life+=1;
                                chngep1(p1life);
                                break;
                        case 's':
                                p1life-=1;
                                chngep1(p1life);
                                break;
                        case 'x':
                                p1life+=5;
                                chngep1(p1life);
                                break;
                        case 'z':
                                p1life-=5;
                                chngep1(p1life);
                                break;
                        case 'i':
                                p2life+=5;
                                chngep2(p2life);
                                break;
                        case 'o':
                                p2life-=5;
                                chngep2(p2life);
                                break;
                        case 'k':
                                p2life++;
                                chngep2(p2life);
                                break;
                        case 'l':
                                p2life--;
                                chngep2(p2life);
                                break;
                        case 'r':
                                // TODO: Fix this
                                p1life = 20;
                                p2life = 20;
                                chngep1(p1life);
                                chngep2(p2life);
                                break;
                        default:
                                break;
                }
                refresh();
        }


	endwin();
	return 0;
	
}
