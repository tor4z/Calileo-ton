#include "runner.h"

namespace ton {
    
Runner::Runner() {
    workers  = 0;
    status   = created;
}

void Runner::run() {
    status = running;
}

void Runner::dispatch(Worker *worker) {
    _workers.push(worker);    
}

    
} //ton