
#include <iostream>
#include <csignal> //Signals
#include <unistd.h> //Sleep function
using namespace std;

void signalHandler(int signum){
    cout << "Signal SIGINT received.\n";
    exit(signum);
}

int main() {
    int i = 0;
    signal(SIGINT, signalHandler);
    
    while(++i){
        cout << "Going to sleep..." << endl;
        if(i==3){
            raise(SIGINT);
        }
        sleep(1);
    }
    return 0;
}