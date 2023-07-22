#include <iostream>
#include <unistd.h>
#include <csignal>

using namespace std;

void signalHandler(int signum) {
    cout << "Signal (" << signum << ") interrupted" << endl;
    exit(signum);
}

int main() {
    signal(SIGINT, signalHandler);
    while(1){
        cout << "Going to sleep..." << endl;
        sleep(1);
    }
    return 0;
}