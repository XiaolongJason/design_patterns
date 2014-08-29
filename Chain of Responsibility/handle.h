#ifndef _HANDLE_H_
#define _HANDLE_H_

class Handle
{
public:
  Handle();
  Handle(Handle * handle);

  virtual ~Handle();
  virtual void HandleRequest() = 0;
  void SetSuccessor(Handle * successor);
  Handle * GetSuccessor() const;

private:
  Handle * successor_;
};

#endif