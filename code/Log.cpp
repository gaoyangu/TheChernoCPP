#include <iostream>

class Log_const{
public:
    const int LogLevelError = 0;
    const int LogLevelWarning = 1;
    const int LogLevelInfo = 2;
private:
    int m_LogLevel = LogLevelInfo;
public:
    void SetLevel(int level){
        m_LogLevel = level;
    }
    void Error(const char* message){
        if(m_LogLevel >= LogLevelError){
            std::cout << "[ERROR]: " << message << std::endl;
        }
    }
    void Warn(const char* message){
        if(m_LogLevel >= LogLevelWarning){
            std::cout << "[Warn]: " << message << std::endl;
        }
    }
    void Info(const char* message){
        if(m_LogLevel >= LogLevelInfo){
            std::cout << "[Info]: " << message << std::endl;
        }
    }
};


// enum
class Log{
public:
    enum Level{
        LevelError = 0, LevelWarning, LevelInfo
    };
private:
    Level m_LogLevel = LevelInfo;
public:
    void SetLevel(Level level){
        m_LogLevel = level;
    }
    void Error(const char* message){
        if(m_LogLevel >= LevelError){
            std::cout << "[ERROR]: " << message << std::endl;
        }
    }
    void Warn(const char* message){
        if(m_LogLevel >= LevelWarning){
            std::cout << "[Warn]: " << message << std::endl;
        }
    }
    void Info(const char* message){
        if(m_LogLevel >= LevelInfo){
            std::cout << "[Info]: " << message << std::endl;
        }
    }
};

int main()
{
    Log log;
    log.SetLevel(Log::LevelError);
    log.Error("Hello!");
    log.Warn("Hello!");
    log.Info("Hello!");
    std::cin.get();
}