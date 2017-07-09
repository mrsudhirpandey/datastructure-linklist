//
//  main.c
//  LinkList
//
//  Created by Sunil Pandey on 09/07/17.
//  Copyright © 2017 Sunil Pandey. All rights reserved.
//

#include <stdio.h>
#include "linklist.hpp"
int main(int argc, const char * argv[]) {
    create(5);
    addlast(6);
    insertAtIndex(3, 10);
    print();
    
    return 0;
}


