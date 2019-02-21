#include "TreeSprite.h"

int TreeSprite::id = 0;

void TreeSprite::addTreeSprite(int opaque, int color)
{
    if (m_treeVec.empty() && (id == 1)) //add first element, could be used only 1 condition here, but, since it's hard to trust statics...
    {
        m_treeVec.emplace_back(std::make_unique<TreeSprite>(opaque, color));
    }
    else
    {
        m_treeVec.emplace_back(std::make_unique<TreeSprite>(**m_treeVec.begin(), opaque, color));
    }
}

void TreeSprite::draw() const
{
   for (const auto& tree : m_treeVec)
   {
       if (auto tex = tree->m_lightTreeTexture.lock()) // draw light trees
       {
           std::cout << "Draw Tree: id = " << m_id << " /opaque = " << m_opaque
                     << " /color = " << m_color << " /texture address = " << tex
                     << " /sizeof: " << sizeof(tree) << std::endl;
       }
       else // draw first, full tree
       {
           std::cout << "Draw Tree: id = " << m_id << " /opaque = " << m_opaque
               << " /color = " << m_color << " /texture address = " << tree->m_treeTexture
               << " /sizeof: " << sizeof(tree) << std::endl;
       }
   }
}
