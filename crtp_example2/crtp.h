
#pragma once
// Helper to hide the static_cast<> calls
//
// From the bottom of this page: https://www.fluentcpp.com/2017/05/19/crtp-helper/
//

template <typename T, template <typename> class crtpType> struct crtp
{

    T &underlying()
    {
        return static_cast<T &>(*this);
    }
    T const &underlying() const
    {
        return static_cast<T const &>(*this);
    }

  private:
    crtp()
    {
    }
    friend crtpType<T>;
};

// And a handy macro to make this seem easy
#define ubxBase (this->underlying())