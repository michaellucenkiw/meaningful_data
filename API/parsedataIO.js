function bang(){
	
	var d = new Dict('a'); //corresponds to the dict a object in the Maxpatch
	
	var body = d.get("body");
	
	var x = d.get("body");
	
	var lines = body.split("\n")
	
	for (var i=0; i<lines.length; i++) {
	
		if (lines[i].charAt(0) == "#") continue;
		
		var l = lines[i].split(" ");
		
		var parse = l[0];
		
		var txt = parse;
//		outlet(0, txt);
outlet(0,x);		
		break;
		
		}
		
}
	