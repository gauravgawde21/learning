require_relative "const"

class Car
  def func
    Const.new.format 
  end 
end

Car.new.func
