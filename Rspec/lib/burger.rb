require 'pry'
require 'pry-byebug'

class Burger
  attr_reader :options
 
  def initialize(options={})
    binding.pry
    @options = options
  end
 
  def apply_ketchup
    binding.pry
    @ketchup = @options[:ketchup]
  end
 
  def has_ketchup_on_it?
    binding.pry
    @ketchup
  end
end
