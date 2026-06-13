# Sort Module
#
# This script sorts a list of integer arguments passed through the CLI
# and prints them in ascending order.

result = []
ARGV.each do |arg|
    next if arg !~ /^-?[0-8\d]+$/

    i_arg = arg.to_i
    
    is_inserted = false
    i = 0
    l = result.size
    while !is_inserted && i < l do
        if result[i] < i_arg
            i += 1
        else
            result.insert(i, i_arg)
            is_inserted = true
            break
        end
    end
    result << i_arg if !is_inserted
end

puts result
