class Array
  # 要素をto_iした値の平均を算出する
  def avg
    inject(0.0){|r,i| r+=i.to_i }/size
  end
  # 要素をto_iした値の分散を算出する
  def variance
    a = avg
    inject(0.0){|r,i| r+=(i.to_i-a)**2 }/size
  end
  # 要素をto_iした値の標準偏差を算出する
  def standard_deviation
    Math.sqrt(variance)
  end
end



science = [65,80,67,35,58,60,72,75,68,92,36,50,2,58.5,46,42,78,62,84,70]

english = [44,87,100,63,52,60,58,73,55,86,29,56,89,23,65,84,64,27,86,84]

puts "理科"
print "平均:"
puts science.avg    
print "標準偏差:"
puts science.standard_deviation 
print "合計:"
puts science.inject(:+) 

puts "英語"
print "平均:"
puts english.avg    
print "標準偏差:"
puts english.standard_deviation 
print "合計:"
puts english.inject(:+) 

salt = science.sort
salt2 = english.sort

puts "ソート"
puts "理科:"
p salt.reverse
puts "英語:"
p salt2.reverse



