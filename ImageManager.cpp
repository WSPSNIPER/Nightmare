#include "ImageManager.h"

///singleton methods
ImageManager* ImageManager::_instance = NULL;
ImageManager* ImageManager::instance()
{
    if(!_instance)
        _instance = new ImageManager();
    return _instance;
}


///constructor / destructor

ImageManager::ImageManager()
{

}

ImageManager::~ImageManager()
{
    _images.clear();
    if(_instance)
    {
        delete _instance;
    }
}


/// gets an image from the list if it exists or creates one if it dosent
sf::Texture& ImageManager::getImage(std::string image_name)
{
    _iterator = _images.find(image_name);
    if(_iterator == _images.end())
    {
        return _addImage(image_name);
    }
    return _iterator->second;
}


/// adds an image to the list
sf::Texture& ImageManager::_addImage(std::string image_name)
{
    sf::Texture temp;
    temp.loadFromFile(image_name);
    //temp.createMaskFromColor(sf::Color(255,0,255));
    _images.insert(std::make_pair<std::string, sf::Texture>(image_name, temp)); // i dont think i need the template brackets but its fine

    _iterator = _images.find(image_name);
    return _iterator->second;
}


