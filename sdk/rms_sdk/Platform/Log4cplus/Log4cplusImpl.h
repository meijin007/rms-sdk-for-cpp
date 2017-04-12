#ifndef LOG4CPLUS_H
#define LOG4CPLUS_H

#include "StaticLogger.h"
#include <log4cplus/logger.h>
#include <log4cplus/configurator.h>
#include <log4cplus/consoleappender.h>
#include <log4cplus/fileappender.h>
#include <log4cplus/helpers/loglog.h>
#include <log4cplus/helpers/stringhelper.h>
#include <log4cplus/helpers/fileinfo.h>
#include <log4cplus/loggingmacros.h>
#include <log4cplus/initializer.h>

using namespace std;
using namespace log4cplus;
using namespace log4cplus::helpers;

namespace rmscore {
namespace platform {
namespace staticlogger {

class Log4cplusImpl : public StaticLogger {
public:
    Log4cplusImpl();


protected:
    void trace(const std::string& record) override;
    void debug(const std::string& record) override;
    void info(const std::string& record) override;
    void warning(const std::string& record) override;
    void error(const std::string& record) override;
    void fatal(const std::string& record) override;
    void append(const string &prefix,
                const string &record) override;
private:
    Logger logger_;
    log4cplus::Initializer initializer;
};
} // namespace logger
} // namespace platform
} // namespace rmscore
#endif // LOG4CPLUS_H