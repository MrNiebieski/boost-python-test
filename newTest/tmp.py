parameter = {
	key:value
	key2:value2
	}
REF_POINTER = {
	coner_size:1,

	}


layer = Layer()
layer.setup(paramter)
layer.optimize()

metal = layer("sram",1,0)
metal = oversize(metal)
mi = DITHER(metal)
mi.save("1.png")
mi.read("abc")


CONERSIZE=10

