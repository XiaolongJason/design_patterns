#ifndef _SIGLETON_TEMPLATE_H_
#define _SIGLETON_TEMPLATE_H_

template<typename T>
class singleton
{
public:
  static T* instance()
  {
    if (!instance_)
      instance_ = new(std::nothrow) T;
    return instance_;
  }
  static void destroy()
  {
    delete instance_;
    instance_ = NULL;
  }
private:
  static  T*  instance_;
};

template<typename T>
T* singleton<T>::instance_ = NULL;

#ifndef ENABLE_SINGLETON
#	define  ENABLE_SINGLETON \
  template<typename T> friend class singleton;
#endif

#endif//_SIGLETON_TEMPLATE_H_
