#pragma once

#include <string_view>
#include <vector>
#include <array>
#include <string>
#include <iostream>

struct TreeTexture
{
    std::string m_name{"treeTexture1"};
    std::array<int, 250> m_content; // suppose that, the size of the texture = 1kB
};

class TreeSprite
{
public:
    static int id; //for the unique id

    TreeSprite(int opaque = 1, int color = 1) :
        m_treeTexture(std::make_shared<TreeTexture>()),
        m_opaque(opaque),
        m_color(color),
        m_id(id++)
    {
        std::cout << "Tree Sprite Constructor\n";
    }

    TreeSprite(const TreeSprite& treeSprite, int opaque = 1, int color = 1) :
        m_lightTreeTexture(treeSprite.m_treeTexture),
        m_opaque(opaque),
        m_color(color),
        m_id(id++)
    {
        std::cout << "Lightweight Tree Sprite Copy Constructor\n";
    }

    ~TreeSprite() = default;
    
    //int
    std::shared_ptr<TreeTexture> m_treeTexture;
    std::weak_ptr<TreeTexture> m_lightTreeTexture;

    //ext
    int m_opaque;
    int m_color;
    int m_id;


    void addTreeSprite(int opaque = 1, int color = 1);
    void draw() const;

private:
    std::vector<std::unique_ptr<TreeSprite>> m_treeVec;
};

