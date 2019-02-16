def lucas(n)
    return (1/Math.sqrt(5)*(pow(1+sqrt(5)/2, n)-pow(1-sqrt(5)/2, n)))
end

l = gets.to_i
l = lucas(n)
puts(l)