-- there is like nothing here because I have been doing Roblox for years, and Luau is similar to Lua

local test, anotherTest = 1

local r, g, b = math.random(0, 255), math.random(0, 255), math.random(0, 255)
print("R ".. r.. ", G ".. g.. ", B ".. b)

local file = io.open("test.txt", "r")
local text = file:read()

print("\thi\nworld")

print(os.date())

print(text)

print(arg[1])

print("turns out you cant do test *= 2")

print("hi world")

print(math.random(1, 5))

for i = 1, 10 do
    if i <= 5 then
        print(i)
    end
end
