//
//  Week1_Task.cpp
//  SeSACAlgorithm
//
//  Created by 이중원 on 2022/11/01.
//

#include <iostream>

using namespace std;

int main(int argc, const char* argv[]) {
    
    int N;
    cin >> N;
    
    int result = 1;
    
    for(int i = 0; i < N; i++) {
        result *= (i + 1);
    }
    
    
    cout << result << "\n";
    
    return 0;
}
