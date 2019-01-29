/* Copyright(c) 1998-1999, ALICE Experiment at CERN, All rights reserved. */
/* See cxx source for full Copyright notice */
/* $Id$ */

#ifndef AliAnalysisTaskMyTask_H
#define AliAnalysisTaskMyTask_H

#include "AliAnalysisTaskSE.h"

class AliAnalysisTaskMyTask : public AliAnalysisTaskSE  
{
    public:
                                AliAnalysisTaskMyTask();
                                AliAnalysisTaskMyTask(const char *name);
        virtual                 ~AliAnalysisTaskMyTask();

        virtual void            UserCreateOutputObjects();
        virtual void            UserExec(Option_t* option);
        virtual void            Terminate(Option_t* option);

    private:
        AliAODEvent*            fAOD;           //! input event
        TList*                  fOutputList;    //! output list
        TH1F*                   fHistPt;        //! dummy histogram
        TH1F*                   fHistTPConly;        //! dummy histogram
        TH1F*                   fHistFB0;        //! dummy histogram
        TH1F*                   fHistFB1;        //! dummy histogram
        TH1F*                   fHistFB2;        //! dummy histogram
        TH1F*                   fHistFB4;        //! dummy histogram
        TH1F*                   fHistFB5;        //! dummy histogram
        TH1F*                   fHistFB6;        //! dummy histogram
        TH1F*                   fHistFB7;        //! dummy histogram
        TH1F*                   fHistFB8;        //! dummy histogram

        AliAnalysisTaskMyTask(const AliAnalysisTaskMyTask&); // not implemented
        AliAnalysisTaskMyTask& operator=(const AliAnalysisTaskMyTask&); // not implemented

        ClassDef(AliAnalysisTaskMyTask, 1);
};

#endif
