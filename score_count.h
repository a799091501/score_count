#ifndef SCORE_COUNT_H
#define SCORE_COUNT_H


#include<QObject>
#include<QString>
#include<QFile>
#include<QJsonObject>
#include<QIODevice>
#include<QDir>
#include<QVector>
#include<iostream>
struct score
{
    int Chinese_Score,Chinese_Rank,Math_Score,Math_Rank,English_Score,English_Rank
    ,Phisics_Score,Phisics_Rank,Chemistry_Score,Chemistry_Rank,Biology_Score,Biology_Rank;
    score(int a,b,c,d,e,f,g,h,i,j,k,l)
    {
        (*this).Chinese_Rank=b;
        (*this).Chinese_Score=a;
        (*this).Math_Score=c;
        (*this).Math_Rank=d;
        (*this).English_Score=e;
        (*this).English_Rank=f;
        (*this).Phisics_Score=g;
        (*this).Phisics_Rank=h;
        (*this).Chemistry_Score=i;
        (*this).Chemistry_Rank=j;
        (*this).Biology_Score=k;
        (*this).Biology_Rank=l;
    }
};
class translate:public Q_OBJECT
{
    Q_OBJECT
public:
    int mSubject;
    int lRank;
    int rRank;

}
#endif // SCORE_COUNT_H
