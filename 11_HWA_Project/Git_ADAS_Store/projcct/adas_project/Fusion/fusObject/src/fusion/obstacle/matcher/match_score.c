#include "match_score.h"

float cal_match_score(Point2F *realPoint, Point2F *estimatePoint) {
  return (realPoint->x - estimatePoint->x) * (realPoint->x - estimatePoint->x) +
         (realPoint->y - estimatePoint->y) * (realPoint->y - estimatePoint->y);
}