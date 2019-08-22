#ifndef SRC_RWLOCK_H_
#define SRC_RWLOCK_H_

#include <pthread.h>

extern pthread_rwlock_t RWLock;

#define RWLOCK_ACQUIRE_READ() assert(pthread_rwlock_rdlock(&RWLock) == 0)
#define RWLOCK_ACQUIRE_WRITE() assert(pthread_rwlock_wrlock(&RWLock) == 0)
#define RWLOCK_RELEASE() assert(pthread_rwlock_unlock(&RWLock) == 0)

#endif /* SRC_RWLOCK_H_ */
