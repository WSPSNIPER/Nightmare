#ifndef _IMAGE_MANAGER_H_
#define _IMAGE_MANAGER_H_

#include <map>
#include <string>
#include <SFML/Graphics.hpp>

typedef std::map<std::string, sf::Texture> imageList;
class ImageManager
{
private:
    ImageManager();
    static ImageManager* _instance;

public:
    ~ImageManager();
    static ImageManager* instance();

    sf::Texture& getImage(std::string);

private:
    sf::Texture& _addImage(std::string);

    imageList _images;
    imageList::iterator _iterator;


};

#endif // _IMAGE_MANAGER_H_
