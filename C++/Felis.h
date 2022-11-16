#ifndef FELIS_H
    #define FELIS_H

    class Felis {
        public:
            virtual void meow() = 0; //=0 is the syntax to indicate
                                    //this is a 'pure' virtual function
                                    //makes the class an Abstract class
    };

#endif