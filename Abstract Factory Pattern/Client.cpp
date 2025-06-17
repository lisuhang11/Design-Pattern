#include <iostream>
#include "factory/KingdomFactory.h"
#include "factory/OrcKingdomFactory.h"
#include "factory/ElfKingdomFactory.h"
#include "product/ElfKingdom.h"
#include "product/OrcKingdom.h"

using namespace afp;

int main(){
    //创建精灵国家工厂
    auto elfFactory = std::make_unique<ElfKingdomFactory>();

    //使用工厂创建精灵城堡、精灵国外、精灵军队
    auto elfCastle = elfFactory->createCastle();
    auto elfKing = elfFactory->createKing();
    auto elfArmy = elfFactory->createArmy();
    // 输出对象的描述信息
    std::cout << elfCastle->getDescription() << std::endl;
    std::cout << elfKing->getDescription() << std::endl;
    std::cout << elfArmy->getDescription() << std::endl;

    // 创建兽人国家工厂
    auto orcFactory = std::make_unique<OrcKingdomFactory>();

    // 使用工厂创建兽人城堡、兽人国王和兽人军队
    auto orcCastle = orcFactory->createCastle();
    auto orcKing = orcFactory->createKing();
    auto orcArmy = orcFactory->createArmy();

    // 输出对象的描述信息
    std::cout << orcCastle->getDescription() << std::endl;
    std::cout << orcKing->getDescription() << std::endl;
    std::cout << orcArmy->getDescription() << std::endl;

}