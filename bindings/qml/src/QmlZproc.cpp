/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Read the zproject/README.md for information about making permanent changes. #
################################################################################
*/

#include "QmlZproc.h"



QObject* QmlZproc::qmlAttachedProperties(QObject* object) {
    return new QmlZprocAttached(object);
}


///
//  Returns CZMQ version as a single 6-digit integer encoding the major
//  version (x 10000), the minor version (x 100) and the patch.        
int QmlZprocAttached::czmqVersion () {
    return zproc_czmq_version ();
};

///
//  Returns true if the process received a SIGINT or SIGTERM signal.
//  It is good practice to use this method to exit any infinite loop
//  processing messages.                                            
bool QmlZprocAttached::interrupted () {
    return zproc_interrupted ();
};

///
//  Returns true if the underlying libzmq supports CURVE security.
bool QmlZprocAttached::hasCurve () {
    return zproc_has_curve ();
};

///
//  Return current host name, for use in public tcp:// endpoints.
//  If the host name is not resolvable, returns NULL.            
QString QmlZprocAttached::hostname () {
    char *retStr_ = zproc_hostname ();
    QString retQStr_ = QString (retStr_);
    free (retStr_);
    return retQStr_;
};

///
//  Move the current process into the background. The precise effect     
//  depends on the operating system. On POSIX boxes, moves to a specified
//  working directory (if specified), closes all file handles, reopens   
//  stdin, stdout, and stderr to the null device, and sets the process to
//  ignore SIGHUP. On Windows, does nothing. Returns 0 if OK, -1 if there
//  was an error.                                                        
void QmlZprocAttached::daemonize (const QString &workdir) {
    zproc_daemonize (workdir.toUtf8().data());
};

///
//  Drop the process ID into the lockfile, with exclusive lock, and   
//  switch the process to the specified group and/or user. Any of the 
//  arguments may be null, indicating a no-op. Returns 0 on success,  
//  -1 on failure. Note if you combine this with zsys_daemonize, run  
//  after, not before that method, or the lockfile will hold the wrong
//  process ID.                                                       
void QmlZprocAttached::runAs (const QString &lockfile, const QString &group, const QString &user) {
    zproc_run_as (lockfile.toUtf8().data(), group.toUtf8().data(), user.toUtf8().data());
};

///
//  Configure the number of I/O threads that ZeroMQ will use. A good  
//  rule of thumb is one thread per gigabit of traffic in or out. The 
//  default is 1, sufficient for most applications. If the environment
//  variable ZSYS_IO_THREADS is defined, that provides the default.   
//  Note that this method is valid only before any socket is created. 
void QmlZprocAttached::setIoThreads (size_t ioThreads) {
    zproc_set_io_threads (ioThreads);
};

///
//  Configure the number of sockets that ZeroMQ will allow. The default  
//  is 1024. The actual limit depends on the system, and you can query it
//  by using zsys_socket_limit (). A value of zero means "maximum".      
//  Note that this method is valid only before any socket is created.    
void QmlZprocAttached::setMaxSockets (size_t maxSockets) {
    zproc_set_max_sockets (maxSockets);
};

///
//  Set network interface name to use for broadcasts, particularly zbeacon.    
//  This lets the interface be configured for test environments where required.
//  For example, on Mac OS X, zbeacon cannot bind to 255.255.255.255 which is  
//  the default when there is no specified interface. If the environment       
//  variable ZSYS_INTERFACE is set, use that as the default interface name.    
//  Setting the interface to "*" means "use all available interfaces".         
void QmlZprocAttached::setBiface (const QString &value) {
    zproc_set_biface (value.toUtf8().data());
};

///
//  Return network interface to use for broadcasts, or "" if none was set.
const QString QmlZprocAttached::biface () {
    return QString (zproc_biface ());
};

///
//  Set log identity, which is a string that prefixes all log messages sent
//  by this process. The log identity defaults to the environment variable 
//  ZSYS_LOGIDENT, if that is set.                                         
void QmlZprocAttached::setLogIdent (const QString &value) {
    zproc_set_log_ident (value.toUtf8().data());
};

///
//  Sends log output to a PUB socket bound to the specified endpoint. To   
//  collect such log output, create a SUB socket, subscribe to the traffic 
//  you care about, and connect to the endpoint. Log traffic is sent as a  
//  single string frame, in the same format as when sent to stdout. The    
//  log system supports a single sender; multiple calls to this method will
//  bind the same sender to multiple endpoints. To disable the sender, call
//  this method with a null argument.                                      
void QmlZprocAttached::setLogSender (const QString &endpoint) {
    zproc_set_log_sender (endpoint.toUtf8().data());
};

///
//  Enable or disable logging to the system facility (syslog on POSIX boxes,
//  event log on Windows). By default this is disabled.                     
void QmlZprocAttached::setLogSystem (bool logsystem) {
    zproc_set_log_system (logsystem);
};

///
//  Log error condition - highest priority
void QmlZprocAttached::logError (const QString &format) {
    zproc_log_error ("%s", format.toUtf8().data());
};

///
//  Log warning condition - high priority
void QmlZprocAttached::logWarning (const QString &format) {
    zproc_log_warning ("%s", format.toUtf8().data());
};

///
//  Log normal, but significant, condition - normal priority
void QmlZprocAttached::logNotice (const QString &format) {
    zproc_log_notice ("%s", format.toUtf8().data());
};

///
//  Log informational message - low priority
void QmlZprocAttached::logInfo (const QString &format) {
    zproc_log_info ("%s", format.toUtf8().data());
};

///
//  Log debug-level message - lowest priority
void QmlZprocAttached::logDebug (const QString &format) {
    zproc_log_debug ("%s", format.toUtf8().data());
};

///
//  Self test of this class.
void QmlZprocAttached::test (bool verbose) {
    zproc_test (verbose);
};

/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Read the zproject/README.md for information about making permanent changes. #
################################################################################
*/
