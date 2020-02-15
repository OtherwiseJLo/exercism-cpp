#if !defined(SPACE_AGE_H)
#define SPACE_AGE_H

namespace space_age {
class space_age {
 private:
  int seconds_undefined;

 public:
  explicit space_age(int seconds_undef);
  int seconds() const;
};

}  // namespace space_age

#endif  // SPACE_AGE_H
