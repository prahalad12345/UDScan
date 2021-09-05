class OCRHandler{
    protected:
        OCRHandler *nexthandler;
    public:
        virtual void setnexthandler(OCRHandler* nexthandler);
        virtual OCRHandler* getNextHandler();
        virtual void transform(OCRData* ocrdata)=0;
}