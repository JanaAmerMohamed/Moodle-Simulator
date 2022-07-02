#ifndef CCOURSE
#define CCOURSE
namespace xclass{
class CCourse{

private:
char course_name[20];
char course_code[5];
float course_cost[5];
int new_cost;

public:
inline void setnew_cost(int w);
inline int getnew_cost();
inline void setcourse_name(char name[20]);
inline void setcourse_code(char code[5]);
inline void setcourse_cost(float cost[5]);

inline char getcourse_name();
inline char getcourse_code();
inline float getcourse_cost();


inline void AddCourse();
inline void getCourseinfo();
};

}

#endif