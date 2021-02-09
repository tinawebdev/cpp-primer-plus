#ifndef DMA_H_
#define DMA_H_
#include <iostream>

class abcDMA
{
private:
  char* label;
  int rating;
protected:
  const char* showLabel() const { return label; }
  int showRating() const { return rating; }
public:
  abcDMA(const char* l = "null", int r = 0);
  abcDMA(const abcDMA& adma);
  virtual ~abcDMA() = 0;
  virtual void View() const = 0;
  abcDMA& operator=(const abcDMA& adma);
  friend std::ostream& operator<<(std::ostream& os, const abcDMA& adma);
};

class baseDMA : public abcDMA
{
public:
  baseDMA(const char* l = "null", int r = 0);
  baseDMA(const baseDMA& bdma);
  baseDMA& operator=(const baseDMA& bdma);
  friend std::ostream& operator<<(std::ostream& os, const baseDMA& bdma);
  virtual void View() const;
};

class lacksDMA : public abcDMA
{
private:
  enum { COL_LEN = 40 };
  char color[COL_LEN];
public:
  lacksDMA(const char* c = "blank", const char* l = "null", int r = 0);
  lacksDMA(const lacksDMA& ldma);
  lacksDMA& operator=(const lacksDMA& ldma);
  friend std::ostream& operator<<(std::ostream& os, const lacksDMA& ldma);
  virtual void View() const;
};

class hasDMA : public abcDMA
{
private:
  char* style;
public:
  hasDMA(const char* s = "none", const char* l = "null", int r = 0);
  hasDMA(const hasDMA& hdma);
  ~hasDMA();
  hasDMA& operator=(const hasDMA& hdma);
  friend std::ostream& operator<<(std::ostream& os, const hasDMA& hdma);
  virtual void View() const;
};

#endif
