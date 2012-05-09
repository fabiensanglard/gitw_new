#include <stdio.h>
#include <string.h>

char* cypheredText[] = 
{
    
    "Max vhlm hy max unl wkboxk ingva B nlxw mh ingva fr hpg mktglyxkl",
    // Decoded via crackKevin.exe:
    // the cost of the bus driver punch i used to punch my own transfer 
    
    "Estd mzzv esle elfrse xp szh ez ncplep yph topyetetpd hspy T hld l acp-eppy",
    //Decoded via crackKevin.exe:
    // this book that taught me how to coeate new identities when i was a pre-teen
    
    "pbzfsobp dkfobtpkx lq pbkfi ppbkfpry aoxtolc iixz lq abpr bobt pbzfsba cl bmvq obail bpbeQ",
    
    /*challenges[3 ]*/  "gsvmznvlugsvnzrmuiznvhrszxpvwzgfhxrmgsvzikzmvgwzbh",
    /*challenges[4 ]*/  "jbi ujt veo eco ntk iwa lhc eeo anu uir trs hae oni rfn irt toh imi ets shs !eu",
    /*challenges[5 ]*/  "bmFtZXRoZWNvbXBhbnl3aGVyZWJvbm5pZXdhc2VtcGxveWVkd2hlbndlc3RhcnRlZGRhdGluZw==",
    //Base64: namethecompanywherebonniewasemployedwhenwestarteddating
    // Name the company where bonnie was employed when we started dating
    
    /*challenges[6 ]*/ "multbqncannqenabrhfgacnqogehchetbkkebmsqgkncchebr",
    /*challenges[7 ]*/ "'siass nuhmil sowsra amnapi waagoc ifinti dscisf iiiesf ahgbao staetn itmlro",
    /*challenges[8 ]*/ "tvifafwawehes hsesoonvtlimaeloemtcagmem irnoerrldony",
    /*challenges[9 ]*/ "gnkusr ooursnsiti ttnotoihiec rolwaintmlk ovtgp",
    /*challenges[10]*/ "ow gw ty kc qb eb nm ht ud pc iy ty ik tu zo dp gl qt hd", 
    /*challenges[11]*/ "idniidhsubrseognteiuignuhrzdalrd ietfetinmeablnigorcsnuatoieclei",
    /*challenges[12]*/ "qclgjq'qcrjcrlmqnyrcpgursmzyddmbcnngrgmfupceylyk",
    /*challenges[13]*/ "c2VuaWxzJ2RhZHltbm9zcGF0ZXJpd2VodHRjZW5ub2NlcmRuYXNlbGVnbmFzb2xvdHlsZm90ZGFob2h3dG5lZ2F5dGlydWNlc2xsZWJjYXBlaHQ=",
     //Base 64 decode:
     //senils'dadymnospateriwehttcennocerdnaselegnasolotylfotdahohwtnegaytirucesllebcapeht
     // Reverse the string
     // thepacbellsecurityagentwhohadtoflytolosangelesandreconnectthewiretapsonmydad'slines
     // clear text:
     // the pacbell security agent who had to fly to los angeles and reconnect the wiretaps on my dad's lines
     
     /*challenges[14]*/ "ud mn cf ub mw re lb is ba of gx ty qc qh il ea ym nx bz ub he cf th is",
    /*challenges[15]*/ "",
    /*challenges[16]*/ "100 0000 10 1 01 001 00 1000 1 010 11 000 0 0000 11 000 00011 10000 11111 11110 11000 00111 10000 11111 10000 11111",
    /*challenges[17]*/ "6365696a647a727573697775716d6d6e736e69627a74736a6f7969706469737967647163656c6f71776c66646d63656d78626c6879746d796f6d71747765686a6a71656d756c70696b6a627965696a71",
    /*challenges[18]*/ "hranmoafignwoeoeiettwsoeheneteelaefnbaethscrdniyajspwrl",
    /*challenges[19]*/ "yo kb pn oc ox rh oq kb oh kp ge gs yt yt hg sa i mt ob sa po po mk pl md",
    /*challenges[20]*/ "77726e6b7668656a77676b6b276c6d6b62746166726565677776c6a7368697a70726f6d79656c",
    /*challenges[21]*/ "opoybdpmwoqbcpqcygagpcgxbpusapdluscplchxwoisgyeasdcpopdhadfyaethis",
    /*challenges[22]*/ "",
    /*challenges[23]*/ "anhgynnrtfafaqgmbhsuuzkzfbhbfk",
    /*challenges[24]*/ "nhyitekmnryoogmwefehocttntoauttosumooalgei",
    /*challenges[25]*/ "11 0100 000 111 010 0 011 0010 000 010 11 10 1101 01 01 1 000 1 1111 01 0 011 1 010 1 1000 000 010 01 00 01 01 011 00 1101 0010 1 010 1 10 0 001101 110010 001101 110010 001101 100 0000 1 10 101 0 111 0 10 010 0101 0000 11 10 001 10 1 011 00 100 1 10 0 00 0 00 1 000",
    /*challenges[26]*/ "laeaslarhawpuiolshawzadxijxkjgvvbaxavlowyuuhdsxausmrmbulbegukseq",
    /*challenges[27]*/ "qnxpnebielnudqqpbibecua3m'llswhmmhrdzucclsfvqmdunepbkreezkarsnngpkgmscdnkr",
    /*challenges[28]*/ "70776d61766374666f2770636d6167797a786977786f78656a7974696465737073786f65696f64706a6f766b636165686573677069637a617886172",
    /*challenges[29]*/ "eyiyibemhemijixvpyiocjkxdwwxdazvtkaazrvl",
    /*challenges[30]*/ "usygbjmqeauidgttlcflcflgqmfqhyhwurqmbxzoqmnpmjhlneqsctmglahp",
    /*challenges[31]*/ "tpdwxjw'viyegmzbecfvpcqtuwdinpfhzvvfadzbkfoevcnseozxffdlvrdo'jwsjkzllzwapfrvhuaqz",
    /*challenges[32]*/ "010 1 0001 101 0 111 000 100001 01 101 001 00 111 00 00 1111 000 01 111 1 10 000 0000 1001 000 11 0000 0 111 0 0 0101 010 110 111 111 0 1111 1 101 111 1101 110 01 00 010 111 000 0100 111 01 100 00",
    /*challenges[33]*/ "eafeihchqqlndcinrarnfhqdvmlqnmcrlphaccqmqefkzhlslnstmqgmma",
    /*challenges[34]*/ "ifdmnbbnqitnsobmmmtthdkhqbqzponduqz\"zhnemccxhyaninaxanf",
    /*challenges[35]*/ "kgqmicewdnfmastcefkxlkqshgrfsspotxuesqvcohxttpcuvhnxawypuwzdt",
    /*challenges[36]*/ "",
    /*challenges[37]*/ "001101 110010 001101 110010 001101 110010 001101 110010 111 00 011 00 10 110 0000 11 00 1001 110 0100 111 10 11 00 1101 1001 0100 10 100 11 01 101 0010 11 101 0010 11 101 011 111 000 100 010 1001 001 1 101 01 010 1010 01 0 1110 10 0111 010 010"


};

char alphabet[] = 
{
'a',
'b',
'c',
'd',
'e',
'f',
'g',
'h',
'i',
'j',
'k',
'l',
'm',
'n',
'o',
'p',
'q',
'r',
's',
't',
'u',
'v',
'w',
'x',
'y',
'z'
};

char* keyWords[] = {" what "," is "," the "," of "," by "," to ", " did", " in ", " when ", " how "};


int attempROT(int rot, int cypheredIndex)
{
	char tmpString[1024];
	int i;
	char currentChar ;

	for(i=0 ; i < strlen(cypheredText[cypheredIndex]) ; i++)
	{
		currentChar = cypheredText[cypheredIndex][i] ;

		//Convert to lowercase
		if (currentChar >= 65 && currentChar <= 90)
			currentChar = currentChar+32;

		if (currentChar >= 97 && currentChar <= 122)
		{
			tmpString[i] = alphabet[ (currentChar + rot) % 26 ] ;
		}
		else
			tmpString[i] = cypheredText[cypheredIndex][i];
	}
	tmpString[i] = '\0';
	

	//Rotation done, seach for keywords.

	for(i= 0 ; i < sizeof(keyWords)/sizeof(char*); i++)
	{
		if (strstr(tmpString,keyWords[i]))
		{
			printf("[%d]: Candidate (ROT%d): %s\n",cypheredIndex+1,rot,tmpString);
			//printf("Found %s at %d\n",keyWords[i],);
			return 1;
		}
	}

	return 0;	
}



int main(int argc, char** argv)
{
	int i,j;
	int numTexts = sizeof(cypheredText) / sizeof(char*);
	int found;
	
	for(j=0 ; j < numTexts; j++)
	{
		//printf("%s\n",cypheredText[j]);
		found = 0;
		for(i=0 ; i < 26 ; i++)
		{
			found = found | attempROT(i,j);
		}

		if (!found)
				printf("[%d]: No Candidate.\n",j+1);
	}
}

