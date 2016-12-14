#pragma once

#ifndef BUTTON_HPP_
# define BUTTON_HPP_

# include <string>
# include "IUIComponent.hpp"

class Button : public IUIComponent
{


public:
	Button(const std::string &text, float sizeX, float sizeY, float x = 0, float y = 0);
	virtual ~Button() {}

	// Inherited via IUIComponent
	virtual bool isQuiet() const override;
	virtual bool isIn(float, float) const override;
	virtual void trigger() override;
	virtual void unTrigger() override;
	virtual void hover(float elapsed) override;
	virtual bool isActive() const override;
	virtual void setActive(bool) override;
	virtual void triggerKey(const sf::Event &, float elapsed) override;
	virtual void update(float elapsed) override;
};

#endif /* !BUTTON_HPP_ */